CFLAGS=/c /GS- /Gs32768 /std:c++20 /D_HAS_EXCEPTIONS=0 /GR-
DEBUGCFLAGS=/Zi /MTd /D_DEBUG /EHsc /std:c++20
PYTHON=python

# Detect architecture from VSCMD_ARG_TGT_ARCH (set by VS), or fallback to PROCESSOR_ARCHITECTURE
!IFNDEF VSCMD_ARG_TGT_ARCH
VSCMD_ARG_TGT_ARCH=$(PROCESSOR_ARCHITECTURE)
!ENDIF

!IF "$(VSCMD_ARG_TGT_ARCH)" == "x64" || "$(VSCMD_ARG_TGT_ARCH)" == "AMD64"
OUTDIR=..\x64\Release\ 
IMDIR=x64\Release\ 
DOUTDIR=..\x64\Debug\ 
DIMDIR=x64\Debug\ 
OUTEXT=.x64.o
!ELSEIF "$(VSCMD_ARG_TGT_ARCH)" == "x86"
OUTDIR=..\Release\ 
IMDIR=Release\ 
DIMDIR=Debug\ 
DOUTDIR=..\Debug\ 
OUTEXT=.x86.o
!ELSE
!ERROR Unsupported architecture: $(VSCMD_ARG_TGT_ARCH). Only x86 and x64 are supported.
!ENDIF


all: *.cpp
    @$(MAKE) /A $(patsubst %.c,%.obj, $(patsubst %.cpp, %.obj, $(patsubsti %, $(IMDIR)\%, $**)))

    @if not exist "$(OUTDIR)" mkdir "$(OUTDIR)"
    copy "$(IMDIR)\*.obj" "$(OUTDIR)"
    del /F "$(OUTDIR)\*$(OUTEXT)"
    ren "$(OUTDIR)*.obj" "*$(OUTEXT)"

all-debug: *.cpp
    @$(MAKE) /A $(patsubst %.c,%.exe, $(patsubst %.cpp, %.exe, $(patsubsti %, $(DOUTDIR)\%, $**)))

.cpp{$(IMDIR)}.obj:
    @if not exist "$(IMDIR)" mkdir "$(IMDIR)"
    $(CPP) $(CFLAGS) /Fo"$@" $<

    @(where $(PYTHON) >nul 2>nul \
        && $(PYTHON) --version >nul 2>nul \
        || (echo [*] Install Python to enable boflint && exit /b 0) \
    ) && $(PYTHON) utils\boflint.py --logformat vs --loader cs "$@"

.cpp{$(DOUTDIR)}.exe:
    @if not exist "$(DIMDIR)" mkdir "$(DIMDIR)"
    @if not exist "$(DOUTDIR)" mkdir "$(DOUTDIR)"
    $(CPP) $(DEBUGCFLAGS) /Fo$(DIMDIR) /Fd$(DIMDIR) /Fe"$@" $< base/mock.cpp

clean:
     @if exist "$(DIMDIR)" rmdir /Q /S "$(DIMDIR)"
     @if exist "$(IMDIR)" rmdir /Q /S "$(IMDIR)"
     @if exist "$(OUTDIR)" rmdir /Q /S "$(OUTDIR)"
     @if exist "$(DOUTDIR)" rmdir /Q /S "$(DOUTDIR)"
