# WSL BOF

This BOF allows for the enumeration of WSL distros on a windows host and the ability to run commands on them

This is using the command [WslLaunch](https://learn.microsoft.com/en-us/windows/win32/api/wslapi/nf-wslapi-wsllaunch) which is exposed by [wslapi.h/WslApi.dll](https://learn.microsoft.com/en-us/windows/win32/api/wslapi/). **Caution: All this does under the hood is fork and run wsl.exe**:

<img width="2310" height="902" alt="image" src="https://github.com/user-attachments/assets/38041c38-f6eb-4a34-a9b2-e970bed3f899" style="border: 1px solid black;" />

**This means that you should expect any commands you run to be logged by EDR on the windows side**. You can get around this by writing a script with all the commands you want run on the target distro to the `$wsl` share, then just using the bof to `chmod +x` it and then execute it.

**This also means the end user will briefly see a wsl.exe window. Ensure long running processes don't hang the window open by forking them (ending with `&`)**

_Why not just use COM, you ask? _

There is a proof of concept in the `com` branch of this repo, but sadly the COM interface changes between versions of WSL (not just 1&2, but subversions). Take a look at a similar project that tried to keep track of these changes named [wslbridge2](https://github.com/Biswa96/wslbridge2/blob/a7162d852ff438d2d5a8dd8dae61795addb3d980/src/GetVmId.cpp#L49) - it needs to keep track of undocumented bounaries of the changes and the function signatures for each of them - and there have been at least 2 more breaking changes since that project stopped tracking. 

Someone could use [oleviewdotnet](https://github.com/tyranid/oleviewdotnet) to generate IDLs for each version and create a master header file for all the different interfaces and checks to map your target machine's WSL instance to the right interface definition, but we haven't done that. Now you can see why the windows DLL just forks out and calls a client that should match the interface of the server! 

## Usage


### List Distros (queried from registry)
```
beacon> help wsl-list
Synopsis: wsl-list

Lists all installed WSL distributions on the target system, showing:
  - Distribution name
  - Default distribution (marked)
  - WSL version (1 or 2)

Example:
  beacon> wsl-list

[01/08 22:02:56] beacon> wsl-list
[01/08 22:02:56] [*] Listing WSL distributions
[01/08 22:02:57] [+] host called home, sent: 5349 bytes
[01/08 22:02:57] [+] received output:
Windows Subsystem for Linux Distributions:

[01/08 22:02:57] [+] received output:
  Ubuntu (Default) (WSL2)
```

### Execute Command on a Distro (uses wslapi.dll)
```
beacon> help wsl-exec
Synopsis: wsl-exec <distro> <command>

Executes a command in the specified WSL distribution and captures output.

Arguments:
  distro   - Name of the WSL distribution (e.g., Ubuntu, Debian)
  command  - Command to execute in the Linux environment

Examples:
  beacon> wsl-exec Ubuntu whoami
  beacon> wsl-exec Ubuntu uname -a
  beacon> wsl-exec Debian cat /etc/passwd
  beacon> wsl-exec Ubuntu ls -la /root

Note: Use wsl-list first to see available distributions

[01/08 22:06:01] beacon> wsl-exec Ubuntu uname -a
[01/08 22:06:01] [*] Executing in WSL (Ubuntu): uname -a
[01/08 22:06:01] [+] host called home, sent: 5389 bytes
[01/08 22:06:02] [+] received output:
Linux DESKTOP-K9LS5KS 5.15.153.1-microsoft-standard-WSL2 #1 SMP Fri Mar 29 23:14:13 UTC 2024 x86_64 x86_64 x86_64 GNU/Linux
```


Created by [@xpn](https://github.com/xpn), [@antroguy](https://github.com/antroguy), amd me for the SpecterOps 2026 24hr hackathon.
