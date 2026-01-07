

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for test.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "test_h.h"

#define TYPE_FORMAT_STRING_SIZE   279                               
#define PROC_FORMAT_STRING_SIZE   1475                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _test_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } test_MIDL_TYPE_FORMAT_STRING;

typedef struct _test_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } test_MIDL_PROC_FORMAT_STRING;

typedef struct _test_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } test_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const test_MIDL_TYPE_FORMAT_STRING test__MIDL_TypeFormatString;
extern const test_MIDL_PROC_FORMAT_STRING test__MIDL_ProcFormatString;
extern const test_MIDL_EXPR_FORMAT_STRING test__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ILxssUserSession_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILxssUserSession_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const test_MIDL_PROC_FORMAT_STRING test__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure CreateInstance */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10 */	NdrFcShort( 0x4c ),	/* 76 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 26 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Flags */

/* 32 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 38 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 44 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 46 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterDistribution */

/* 50 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x4 ),	/* 4 */
/* 58 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 60 */	NdrFcShort( 0x20 ),	/* 32 */
/* 62 */	NdrFcShort( 0x4c ),	/* 76 */
/* 64 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 66 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 76 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 78 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 80 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Version */

/* 82 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 84 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter FileHandle */

/* 88 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 90 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 92 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter StderrHandle */

/* 94 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 96 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 98 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter TargetDirectory */

/* 100 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 102 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 104 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Flags */

/* 106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 108 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter VhdSize */

/* 112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 114 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 116 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter PackageFamilyName */

/* 118 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 120 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 122 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter InstalledDistributionName */

/* 124 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 126 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 128 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter Error */

/* 130 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 132 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 134 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 136 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 138 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 140 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterDistributionPipe */

/* 148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x5 ),	/* 5 */
/* 156 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 158 */	NdrFcShort( 0x20 ),	/* 32 */
/* 160 */	NdrFcShort( 0x4c ),	/* 76 */
/* 162 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 164 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 176 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 178 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Version */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PipeHandle */

/* 186 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 188 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 190 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter StderrHandle */

/* 192 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 194 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 196 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter TargetDirectory */

/* 198 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 200 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 202 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Flags */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter VhdSize */

/* 210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 212 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 214 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter PackageFamilyName */

/* 216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 218 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 220 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter InstalledDistributionName */

/* 222 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 224 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 226 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter Error */

/* 228 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 230 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 232 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 234 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 236 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 238 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDistributionId */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x6 ),	/* 6 */
/* 254 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 258 */	NdrFcShort( 0x4c ),	/* 76 */
/* 260 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 262 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 272 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter Flags */

/* 278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 280 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 284 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 286 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 288 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 290 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 292 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 294 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 298 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TerminateDistribution */

/* 302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x7 ),	/* 7 */
/* 310 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 312 */	NdrFcShort( 0x44 ),	/* 68 */
/* 314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 316 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 318 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 328 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 332 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Error */

/* 334 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 336 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 338 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 342 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterDistribution */

/* 346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 356 */	NdrFcShort( 0x44 ),	/* 68 */
/* 358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 360 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 362 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 372 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 376 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Error */

/* 378 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 382 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConfigureDistribution */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x9 ),	/* 9 */
/* 398 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 400 */	NdrFcShort( 0x54 ),	/* 84 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 406 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 416 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 420 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter DefaultUid */

/* 422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 430 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 434 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 436 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 438 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 442 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDistributionConfiguration */

/* 446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0xa ),	/* 10 */
/* 454 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 456 */	NdrFcShort( 0x44 ),	/* 68 */
/* 458 */	NdrFcShort( 0x78 ),	/* 120 */
/* 460 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 462 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 464 */	NdrFcShort( 0x1 ),	/* 1 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 472 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 474 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 476 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter DistributionName */

/* 478 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 480 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 482 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter Version */

/* 484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DefaultUid */

/* 490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 492 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DefaultEnvironmentCount */

/* 496 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 498 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DefaultEnvironment */

/* 502 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 504 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 506 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter Flags */

/* 508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 510 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 514 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 516 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 518 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 522 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDefaultDistribution */

/* 526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0xb ),	/* 11 */
/* 534 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x4c ),	/* 76 */
/* 540 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 542 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Error */

/* 552 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 556 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pResultState */

/* 558 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 560 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 562 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ResizeDistribution */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0xc ),	/* 12 */
/* 578 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 580 */	NdrFcShort( 0x54 ),	/* 84 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 586 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 596 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 600 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OutputHandle */

/* 602 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 604 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 606 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter NewSize */

/* 608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 610 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 612 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter Error */

/* 614 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 616 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 618 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 622 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDefaultDistribution */

/* 626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0xd ),	/* 13 */
/* 634 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 636 */	NdrFcShort( 0x44 ),	/* 68 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 642 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 652 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 656 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Error */

/* 658 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 662 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 666 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSparse */

/* 670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0xe ),	/* 14 */
/* 678 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 680 */	NdrFcShort( 0x4e ),	/* 78 */
/* 682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 684 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 686 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 696 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 700 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Sparse */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 706 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter AllowUnsafe */

/* 708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 710 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 712 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter Error */

/* 714 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 716 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 718 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateDistributions */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0xf ),	/* 15 */
/* 734 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 740 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 742 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionCount */

/* 752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Distributions */

/* 758 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 762 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter Error */

/* 764 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 768 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 772 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateLxProcess */

/* 776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x10 ),	/* 16 */
/* 784 */	NdrFcShort( 0xd0 ),	/* X64 Stack size/offset = 208 */
/* 786 */	NdrFcShort( 0x70 ),	/* 112 */
/* 788 */	NdrFcShort( 0x90 ),	/* 144 */
/* 790 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x19,		/* 25 */
/* 792 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 802 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 804 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 806 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Filename */

/* 808 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 810 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 812 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter CommandLineCount */

/* 814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 816 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter CommandLine */

/* 820 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 822 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 824 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter CurrentWorkingDirectory */

/* 826 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 828 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 830 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter NtPath */

/* 832 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 834 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 836 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter NtEnvironment */

/* 838 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 840 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 842 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Parameter NtEnvironmentLength */

/* 844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 846 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Username */

/* 850 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 852 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 854 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Columns */

/* 856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 858 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 860 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Rows */

/* 862 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 864 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 866 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ConsoleHandle */

/* 868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 870 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StdHandles */

/* 874 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 876 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 878 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter Flags */

/* 880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 882 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DistributionId */

/* 886 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 888 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 890 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InstanceId */

/* 892 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 894 */	NdrFcShort( 0x80 ),	/* X64 Stack size/offset = 128 */
/* 896 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProcessHandle */

/* 898 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 900 */	NdrFcShort( 0x88 ),	/* X64 Stack size/offset = 136 */
/* 902 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter ServerHandle */

/* 904 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 906 */	NdrFcShort( 0x90 ),	/* X64 Stack size/offset = 144 */
/* 908 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter StandardIn */

/* 910 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 912 */	NdrFcShort( 0x98 ),	/* X64 Stack size/offset = 152 */
/* 914 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Parameter StandardOut */

/* 916 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 918 */	NdrFcShort( 0xa0 ),	/* X64 Stack size/offset = 160 */
/* 920 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Parameter StandardErr */

/* 922 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 924 */	NdrFcShort( 0xa8 ),	/* X64 Stack size/offset = 168 */
/* 926 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Parameter CommunicationChannel */

/* 928 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 930 */	NdrFcShort( 0xb0 ),	/* X64 Stack size/offset = 176 */
/* 932 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Parameter InteropSocket */

/* 934 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 936 */	NdrFcShort( 0xb8 ),	/* X64 Stack size/offset = 184 */
/* 938 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Parameter Error */

/* 940 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 942 */	NdrFcShort( 0xc0 ),	/* X64 Stack size/offset = 192 */
/* 944 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 948 */	NdrFcShort( 0xc8 ),	/* X64 Stack size/offset = 200 */
/* 950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetVersion */

/* 952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x11 ),	/* 17 */
/* 960 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 962 */	NdrFcShort( 0x4c ),	/* 76 */
/* 964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 966 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 968 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 978 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 980 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 982 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Version */

/* 984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 986 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StderrHandle */

/* 990 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 994 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter Error */

/* 996 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 998 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1000 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExportDistribution */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1016 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1018 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1022 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1024 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 1034 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1036 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1038 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter FileHandle */

/* 1040 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1042 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1044 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter StderrHandle */

/* 1046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1048 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1050 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter Flags */

/* 1052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1054 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 1058 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1060 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1062 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1066 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExportDistributionPipe */

/* 1070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1078 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1080 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1084 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1086 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 1096 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1100 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter PipeHandle */

/* 1102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1104 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1106 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter StderrHandle */

/* 1108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1110 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1112 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter Flags */

/* 1114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1116 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 1120 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1122 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1124 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1128 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachDisk */

/* 1132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1140 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1146 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1148 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Disk */

/* 1158 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1160 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1162 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter Flags */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 1170 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1172 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1174 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DetachDisk */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1190 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1198 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Disk */

/* 1208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1212 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Result */

/* 1214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1216 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Step */

/* 1220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 1226 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1228 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1230 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1234 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MountDisk */

/* 1238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1246 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1248 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1250 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1252 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 1254 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Disk */

/* 1264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1266 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1268 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter Flags */

/* 1270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1272 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PartitionIndex */

/* 1276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Name */

/* 1282 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1284 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1286 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Type */

/* 1288 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1290 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1292 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Options */

/* 1294 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1296 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1298 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter Result */

/* 1300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1302 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Step */

/* 1306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1308 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MountName */

/* 1312 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1314 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1316 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter Error */

/* 1318 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1320 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1322 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1326 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Shutdown */

/* 1330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1338 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1344 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1346 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Force */

/* 1356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1358 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1364 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ImportDistributionInplace */

/* 1368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1376 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1382 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1384 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 1394 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1396 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1398 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter VhdPath */

/* 1400 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1402 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1404 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter Error */

/* 1406 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1408 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1410 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 1412 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1414 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1416 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1420 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveDistribution */

/* 1424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1432 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1434 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1438 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 1450 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1452 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1454 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter DistributionName */

/* 1456 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1458 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1460 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter Error */

/* 1462 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1464 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1466 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1470 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const test_MIDL_TYPE_FORMAT_STRING test__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x8 ),	/* Offset= 8 (12) */
/*  6 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 12 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 18 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 20 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (6) */
			0x5b,		/* FC_END */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 30 */	NdrFcShort( 0x28 ),	/* 40 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0xa ),	/* Offset= 10 (44) */
/* 36 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 38 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 40 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 42 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 44 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 46 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 50 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 52 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 54 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 56 */	0x3c,		/* FC_SYSTEM_HANDLE */
			0x0,		/* 0 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	0x3c,		/* FC_SYSTEM_HANDLE */
			0xc,		/* 12 */
/* 64 */	NdrFcLong( 0x0 ),	/* 0 */
/* 68 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 74 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 76 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 78 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (12) */
/* 80 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 82 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x11, 0x0,	/* FC_RP */
/* 86 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (12) */
/* 88 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 90 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 92 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 94 */	NdrFcShort( 0x2 ),	/* Offset= 2 (96) */
/* 96 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 106 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 108 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 110 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 114 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 116 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 118 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 122 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (126) */
/* 126 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 128 */	NdrFcShort( 0x1e ),	/* Offset= 30 (158) */
/* 130 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 132 */	NdrFcShort( 0x202 ),	/* 514 */
/* 134 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 136 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x220 ),	/* 544 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* Offset= 0 (142) */
/* 144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (12) */
/* 148 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 150 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 152 */	0x0,		/* 0 */
			NdrFcShort( 0xffe9 ),	/* Offset= -23 (130) */
			0x3e,		/* FC_STRUCTPAD2 */
/* 156 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 158 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 166 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 168 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 172 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 176 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (136) */
/* 178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 180 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 182 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 184 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (188) */
/* 188 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 196 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 198 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 202 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 204 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 206 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 208 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 210 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 212 */	NdrFcShort( 0x2 ),	/* Offset= 2 (214) */
/* 214 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 216 */	NdrFcShort( 0x2 ),	/* 2 */
/* 218 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 220 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 222 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 224 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 226 */	
			0x11, 0x0,	/* FC_RP */
/* 228 */	NdrFcShort( 0xe ),	/* Offset= 14 (242) */
/* 230 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* Offset= 0 (236) */
/* 238 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 240 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 242 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 244 */	NdrFcShort( 0x18 ),	/* 24 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* Offset= 0 (248) */
/* 250 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 252 */	NdrFcShort( 0xffea ),	/* Offset= -22 (230) */
/* 254 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 256 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (230) */
/* 258 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 260 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (230) */
/* 262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 264 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 266 */	NdrFcShort( 0xff2e ),	/* Offset= -210 (56) */
/* 268 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (272) */
/* 272 */	0x3c,		/* FC_SYSTEM_HANDLE */
			0xa,		/* 10 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_test_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ILxssUserSession, ver. 0.0,
   GUID={0x38541BDC,0xF54F,0x4CEB,{0x85,0xD0,0x37,0xF0,0xF3,0xD2,0x61,0x7E}} */

#pragma code_seg(".orpc")
static const unsigned short ILxssUserSession_FormatStringOffsetTable[] =
    {
    0,
    50,
    148,
    246,
    302,
    346,
    390,
    446,
    526,
    570,
    626,
    670,
    726,
    776,
    952,
    1008,
    1070,
    1132,
    1182,
    1238,
    1330,
    1368,
    1424
    };



/* Standard interface: __MIDL_itf_test_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for test.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag234_t;
extern const __midl_frag234_t __midl_frag234;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag233_t;
extern const __midl_frag233_t __midl_frag233;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag232_t;
extern const __midl_frag232_t __midl_frag232;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag231_t;
extern const __midl_frag231_t __midl_frag231;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag229_t;
extern const __midl_frag229_t __midl_frag229;

typedef 
NDR64_FORMAT_CHAR
__midl_frag228_t;
extern const __midl_frag228_t __midl_frag228;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag226_t;
extern const __midl_frag226_t __midl_frag226;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag225_t;
extern const __midl_frag225_t __midl_frag225;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
NDR64_FORMAT_CHAR
__midl_frag220_t;
extern const __midl_frag220_t __midl_frag220;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag213_t;
extern const __midl_frag213_t __midl_frag213;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
}
__midl_frag198_t;
extern const __midl_frag198_t __midl_frag198;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag189_t;
extern const __midl_frag189_t __midl_frag189;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag183_t;
extern const __midl_frag183_t __midl_frag183;

typedef 
struct _NDR64_SYSTEM_HANDLE_FORMAT
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag176_t;
extern const __midl_frag176_t __midl_frag176;

typedef 
struct _NDR64_SYSTEM_HANDLE_FORMAT
__midl_frag171_t;
extern const __midl_frag171_t __midl_frag171;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag169_t;
extern const __midl_frag169_t __midl_frag169;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag164_t;
extern const __midl_frag164_t __midl_frag164;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag163_t;
extern const __midl_frag163_t __midl_frag163;

typedef 
struct _NDR64_SYSTEM_HANDLE_FORMAT
__midl_frag160_t;
extern const __midl_frag160_t __midl_frag160;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag159_t;
extern const __midl_frag159_t __midl_frag159;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag149_t;
extern const __midl_frag149_t __midl_frag149;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag143_t;
extern const __midl_frag143_t __midl_frag143;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag142_t;
extern const __midl_frag142_t __midl_frag142;

typedef 
NDR64_FORMAT_CHAR
__midl_frag140_t;
extern const __midl_frag140_t __midl_frag140;

typedef 
NDR64_FORMAT_CHAR
__midl_frag135_t;
extern const __midl_frag135_t __midl_frag135;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag134_t;
extern const __midl_frag134_t __midl_frag134;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag132_t;
extern const __midl_frag132_t __midl_frag132;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
    struct _NDR64_PARAM_FORMAT frag14;
    struct _NDR64_PARAM_FORMAT frag15;
    struct _NDR64_PARAM_FORMAT frag16;
    struct _NDR64_PARAM_FORMAT frag17;
    struct _NDR64_PARAM_FORMAT frag18;
    struct _NDR64_PARAM_FORMAT frag19;
    struct _NDR64_PARAM_FORMAT frag20;
    struct _NDR64_PARAM_FORMAT frag21;
    struct _NDR64_PARAM_FORMAT frag22;
    struct _NDR64_PARAM_FORMAT frag23;
    struct _NDR64_PARAM_FORMAT frag24;
    struct _NDR64_PARAM_FORMAT frag25;
    struct _NDR64_PARAM_FORMAT frag26;
}
__midl_frag119_t;
extern const __midl_frag119_t __midl_frag119;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag114_t;
extern const __midl_frag114_t __midl_frag114;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag112_t;
extern const __midl_frag112_t __midl_frag112;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
NDR64_FORMAT_CHAR
__midl_frag106_t;
extern const __midl_frag106_t __midl_frag106;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag103_t;
extern const __midl_frag103_t __midl_frag103;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
NDR64_FORMAT_CHAR
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag85_t;
extern const __midl_frag85_t __midl_frag85;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
NDR64_FORMAT_CHAR
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
}
__midl_frag30_t;
extern const __midl_frag30_t __midl_frag30;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag234_t __midl_frag234 =
0x5    /* FC64_INT32 */;

static const __midl_frag233_t __midl_frag233 =
{ 
/* *LXSS_ERROR_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag7
};

static const __midl_frag232_t __midl_frag232 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag231_t __midl_frag231 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag232
};

static const __midl_frag230_t __midl_frag230 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag229_t __midl_frag229 =
{ 
/* MoveDistribution */
    { 
    /* MoveDistribution */      /* procedure MoveDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag4,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DistributionName */      /* parameter DistributionName */
        &__midl_frag232,
        { 
        /* DistributionName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag234,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag228_t __midl_frag228 =
0x5    /* FC64_INT32 */;

static const __midl_frag227_t __midl_frag227 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag226_t __midl_frag226 =
{ 
/* *LXSS_ERROR_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag7
};

static const __midl_frag225_t __midl_frag225 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag224_t __midl_frag224 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag225
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* ImportDistributionInplace */
    { 
    /* ImportDistributionInplace */      /* procedure ImportDistributionInplace */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistributionName */      /* parameter DistributionName */
        &__midl_frag225,
        { 
        /* DistributionName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* VhdPath */      /* parameter VhdPath */
        &__midl_frag225,
        { 
        /* VhdPath */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pDistroGuid */      /* parameter pDistroGuid */
        &__midl_frag4,
        { 
        /* pDistroGuid */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag228,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag220_t __midl_frag220 =
0x5    /* FC64_INT32 */;

static const __midl_frag218_t __midl_frag218 =
{ 
/* Shutdown */
    { 
    /* Shutdown */      /* procedure Shutdown */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Force */      /* parameter Force */
        &__midl_frag220,
        { 
        /* Force */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag214_t __midl_frag214 =
{ 
/* *WCHAR */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag225
};

static const __midl_frag213_t __midl_frag213 =
{ 
/* **WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag214
};

static const __midl_frag211_t __midl_frag211 =
{ 
/* *int */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag220
};

static const __midl_frag207_t __midl_frag207 =
{ 
/* *WCHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag225
};

static const __midl_frag198_t __midl_frag198 =
{ 
/* MountDisk */
    { 
    /* MountDisk */      /* procedure MountDisk */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 96 /* 0x60 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 11 /* 0xb */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Disk */      /* parameter Disk */
        &__midl_frag225,
        { 
        /* Disk */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* PartitionIndex */      /* parameter PartitionIndex */
        &__midl_frag220,
        { 
        /* PartitionIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Name */      /* parameter Name */
        &__midl_frag207,
        { 
        /* Name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* Type */      /* parameter Type */
        &__midl_frag207,
        { 
        /* Type */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* Options */      /* parameter Options */
        &__midl_frag207,
        { 
        /* Options */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* Result */      /* parameter Result */
        &__midl_frag220,
        { 
        /* Result */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* Step */      /* parameter Step */
        &__midl_frag220,
        { 
        /* Step */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* MountName */      /* parameter MountName */
        &__midl_frag213,
        { 
        /* MountName */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    }
};

static const __midl_frag189_t __midl_frag189 =
{ 
/* DetachDisk */
    { 
    /* DetachDisk */      /* procedure DetachDisk */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Disk */      /* parameter Disk */
        &__midl_frag207,
        { 
        /* Disk */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Result */      /* parameter Result */
        &__midl_frag220,
        { 
        /* Result */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Step */      /* parameter Step */
        &__midl_frag220,
        { 
        /* Step */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag183_t __midl_frag183 =
{ 
/* AttachDisk */
    { 
    /* AttachDisk */      /* procedure AttachDisk */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Disk */      /* parameter Disk */
        &__midl_frag225,
        { 
        /* Disk */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* HANDLE */
    0x3c,    /* FC64_SYSTEM_HANDLE */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT32) 0 /* 0x0 */,
};

static const __midl_frag177_t __midl_frag177 =
{ 
/* *GUID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag176_t __midl_frag176 =
{ 
/* ExportDistributionPipe */
    { 
    /* ExportDistributionPipe */      /* procedure ExportDistributionPipe */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag177,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* PipeHandle */      /* parameter PipeHandle */
        &__midl_frag179,
        { 
        /* PipeHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* StderrHandle */      /* parameter StderrHandle */
        &__midl_frag179,
        { 
        /* StderrHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag171_t __midl_frag171 =
{ 
/* HANDLE */
    0x3c,    /* FC64_SYSTEM_HANDLE */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT32) 0 /* 0x0 */,
};

static const __midl_frag169_t __midl_frag169 =
{ 
/* ExportDistribution */
    { 
    /* ExportDistribution */      /* procedure ExportDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag177,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* FileHandle */      /* parameter FileHandle */
        &__midl_frag171,
        { 
        /* FileHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* StderrHandle */      /* parameter StderrHandle */
        &__midl_frag179,
        { 
        /* StderrHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag164_t __midl_frag164 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag163_t __midl_frag163 =
{ 
/* SetVersion */
    { 
    /* SetVersion */      /* procedure SetVersion */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag4,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Version */      /* parameter Version */
        &__midl_frag220,
        { 
        /* Version */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* StderrHandle */      /* parameter StderrHandle */
        &__midl_frag179,
        { 
        /* StderrHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag160_t __midl_frag160 =
{ 
/* HANDLE */
    0x3c,    /* FC64_SYSTEM_HANDLE */
    (NDR64_UINT8) 10 /* 0xa */,
    (NDR64_UINT32) 0 /* 0x0 */,
};

static const __midl_frag159_t __midl_frag159 =
{ 
/* *HANDLE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag160
};

static const __midl_frag149_t __midl_frag149 =
{ 
/* *HANDLE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag171
};

static const __midl_frag143_t __midl_frag143 =
{ 
/* _LXSS_STD_HANDLES */
    { 
    /* _LXSS_STD_HANDLES */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _LXSS_STD_HANDLES */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag142_t __midl_frag142 =
{ 
/* *_LXSS_STD_HANDLES */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag143
};

static const __midl_frag140_t __midl_frag140 =
0x4    /* FC64_INT16 */;

static const __midl_frag135_t __midl_frag135 =
0x11    /* FC64_WCHAR */;

static const __midl_frag134_t __midl_frag134 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */  /* Offset */
    }
};

static const __midl_frag133_t __midl_frag133 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag134
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag135
    }
};

static const __midl_frag132_t __midl_frag132 =
{ 
/* *WCHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag133
};

static const __midl_frag127_t __midl_frag127 =
{ 
/* *CHAR */
    { 
    /* *CHAR */
        0x63,    /* FC64_CONF_CHAR_STRING */
        { 
        /* *CHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 1 /* 0x1 */
    }
};

static const __midl_frag126_t __midl_frag126 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag125_t __midl_frag125 =
{ 
/* **CHAR */
    { 
    /* **CHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **CHAR */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag126
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *CHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag127
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag127
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* **CHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag125
};

static const __midl_frag121_t __midl_frag121 =
{ 
/* *CHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag127
};

static const __midl_frag119_t __midl_frag119 =
{ 
/* CreateLxProcess */
    { 
    /* CreateLxProcess */      /* procedure CreateLxProcess */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 208 /* 0xd0 */ ,  /* Stack size */
        (NDR64_UINT32) 180 /* 0xb4 */,
        (NDR64_UINT32) 152 /* 0x98 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 25 /* 0x19 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag177,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Filename */      /* parameter Filename */
        &__midl_frag121,
        { 
        /* Filename */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* CommandLineCount */      /* parameter CommandLineCount */
        &__midl_frag220,
        { 
        /* CommandLineCount */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* CommandLine */      /* parameter CommandLine */
        &__midl_frag124,
        { 
        /* CommandLine */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* CurrentWorkingDirectory */      /* parameter CurrentWorkingDirectory */
        &__midl_frag207,
        { 
        /* CurrentWorkingDirectory */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NtPath */      /* parameter NtPath */
        &__midl_frag207,
        { 
        /* NtPath */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* NtEnvironment */      /* parameter NtEnvironment */
        &__midl_frag132,
        { 
        /* NtEnvironment */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* NtEnvironmentLength */      /* parameter NtEnvironmentLength */
        &__midl_frag220,
        { 
        /* NtEnvironmentLength */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* Username */      /* parameter Username */
        &__midl_frag207,
        { 
        /* Username */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Columns */      /* parameter Columns */
        &__midl_frag140,
        { 
        /* Columns */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* Rows */      /* parameter Rows */
        &__midl_frag140,
        { 
        /* Rows */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* ConsoleHandle */      /* parameter ConsoleHandle */
        &__midl_frag220,
        { 
        /* ConsoleHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    },
    { 
    /* StdHandles */      /* parameter StdHandles */
        &__midl_frag143,
        { 
        /* StdHandles */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        104 /* 0x68 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        112 /* 0x70 */,   /* Stack offset */
    },
    { 
    /* DistributionId */      /* parameter DistributionId */
        &__midl_frag4,
        { 
        /* DistributionId */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        120 /* 0x78 */,   /* Stack offset */
    },
    { 
    /* InstanceId */      /* parameter InstanceId */
        &__midl_frag4,
        { 
        /* InstanceId */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        128 /* 0x80 */,   /* Stack offset */
    },
    { 
    /* ProcessHandle */      /* parameter ProcessHandle */
        &__midl_frag171,
        { 
        /* ProcessHandle */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        136 /* 0x88 */,   /* Stack offset */
    },
    { 
    /* ServerHandle */      /* parameter ServerHandle */
        &__midl_frag171,
        { 
        /* ServerHandle */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        144 /* 0x90 */,   /* Stack offset */
    },
    { 
    /* StandardIn */      /* parameter StandardIn */
        &__midl_frag160,
        { 
        /* StandardIn */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        152 /* 0x98 */,   /* Stack offset */
    },
    { 
    /* StandardOut */      /* parameter StandardOut */
        &__midl_frag160,
        { 
        /* StandardOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        160 /* 0xa0 */,   /* Stack offset */
    },
    { 
    /* StandardErr */      /* parameter StandardErr */
        &__midl_frag160,
        { 
        /* StandardErr */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        168 /* 0xa8 */,   /* Stack offset */
    },
    { 
    /* CommunicationChannel */      /* parameter CommunicationChannel */
        &__midl_frag160,
        { 
        /* CommunicationChannel */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        176 /* 0xb0 */,   /* Stack offset */
    },
    { 
    /* InteropSocket */      /* parameter InteropSocket */
        &__midl_frag160,
        { 
        /* InteropSocket */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        184 /* 0xb8 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        192 /* 0xc0 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        200 /* 0xc8 */,   /* Stack offset */
    }
};

static const __midl_frag116_t __midl_frag116 =
{ 
/* LXSS_ENUMERATE_INFO */
    { 
    /* LXSS_ENUMERATE_INFO */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* LXSS_ENUMERATE_INFO */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 544 /* 0x220 */
    }
};

static const __midl_frag115_t __midl_frag115 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag114_t __midl_frag114 =
{ 
/* *LXSS_ENUMERATE_INFO */
    { 
    /* *LXSS_ENUMERATE_INFO */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *LXSS_ENUMERATE_INFO */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 544 /* 0x220 */,
        &__midl_frag115
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 544 /* 0x220 */,
        &__midl_frag116
    }
};

static const __midl_frag113_t __midl_frag113 =
{ 
/* *LXSS_ENUMERATE_INFO */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag114
};

static const __midl_frag112_t __midl_frag112 =
{ 
/* **LXSS_ENUMERATE_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* EnumerateDistributions */
    { 
    /* EnumerateDistributions */      /* procedure EnumerateDistributions */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistributionCount */      /* parameter DistributionCount */
        &__midl_frag220,
        { 
        /* DistributionCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Distributions */      /* parameter Distributions */
        &__midl_frag112,
        { 
        /* Distributions */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag106_t __midl_frag106 =
0x2    /* FC64_INT8 */;

static const __midl_frag103_t __midl_frag103 =
{ 
/* SetSparse */
    { 
    /* SetSparse */      /* procedure SetSparse */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 82 /* 0x52 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag4,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Sparse */      /* parameter Sparse */
        &__midl_frag106,
        { 
        /* Sparse */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* AllowUnsafe */      /* parameter AllowUnsafe */
        &__midl_frag106,
        { 
        /* AllowUnsafe */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* SetDefaultDistribution */
    { 
    /* SetDefaultDistribution */      /* procedure SetDefaultDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag4,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag96_t __midl_frag96 =
0x7    /* FC64_INT64 */;

static const __midl_frag93_t __midl_frag93 =
{ 
/* ResizeDistribution */
    { 
    /* ResizeDistribution */      /* procedure ResizeDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag4,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* OutputHandle */      /* parameter OutputHandle */
        &__midl_frag179,
        { 
        /* OutputHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* NewSize */      /* parameter NewSize */
        &__midl_frag96,
        { 
        /* NewSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag89_t __midl_frag89 =
{ 
/* GetDefaultDistribution */
    { 
    /* GetDefaultDistribution */      /* procedure GetDefaultDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pResultState */      /* parameter pResultState */
        &__midl_frag4,
        { 
        /* pResultState */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag85_t __midl_frag85 =
{ 
/* *ULONG */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag220
};

static const __midl_frag83_t __midl_frag83 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* **CHAR */
    { 
    /* **CHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **CHAR */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag83
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *CHAR */
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag127
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag127
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/* **CHAR */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag82
};

static const __midl_frag80_t __midl_frag80 =
{ 
/* ***CHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag81
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* GetDistributionConfiguration */
    { 
    /* GetDistributionConfiguration */      /* procedure GetDistributionConfiguration */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 80 /* 0x50 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 136 /* 0x88 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 9 /* 0x9 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag177,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DistributionName */      /* parameter DistributionName */
        &__midl_frag213,
        { 
        /* DistributionName */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Version */      /* parameter Version */
        &__midl_frag220,
        { 
        /* Version */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DefaultUid */      /* parameter DefaultUid */
        &__midl_frag220,
        { 
        /* DefaultUid */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DefaultEnvironmentCount */      /* parameter DefaultEnvironmentCount */
        &__midl_frag220,
        { 
        /* DefaultEnvironmentCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DefaultEnvironment */      /* parameter DefaultEnvironment */
        &__midl_frag80,
        { 
        /* DefaultEnvironment */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* *GUID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag63_t __midl_frag63 =
{ 
/* ConfigureDistribution */
    { 
    /* ConfigureDistribution */      /* procedure ConfigureDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag64,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DefaultUid */      /* parameter DefaultUid */
        &__midl_frag220,
        { 
        /* DefaultUid */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/* TerminateDistribution */
    { 
    /* TerminateDistribution */      /* procedure TerminateDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag177,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag228,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag48_t __midl_frag48 =
{ 
/* GetDistributionId */
    { 
    /* GetDistributionId */      /* procedure GetDistributionId */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistributionName */      /* parameter DistributionName */
        &__midl_frag232,
        { 
        /* DistributionName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pDistroGuid */      /* parameter pDistroGuid */
        &__midl_frag4,
        { 
        /* pDistroGuid */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag43_t __midl_frag43 =
{ 
/* *WCHAR */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag232
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* **WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag43
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* *WCHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag232
};

static const __midl_frag39_t __midl_frag39 =
0x7    /* FC64_INT64 */;

static const __midl_frag30_t __midl_frag30 =
{ 
/* RegisterDistributionPipe */
    { 
    /* RegisterDistributionPipe */      /* procedure RegisterDistributionPipe */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 104 /* 0x68 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 12 /* 0xc */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistributionName */      /* parameter DistributionName */
        &__midl_frag40,
        { 
        /* DistributionName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Version */      /* parameter Version */
        &__midl_frag220,
        { 
        /* Version */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* PipeHandle */      /* parameter PipeHandle */
        &__midl_frag179,
        { 
        /* PipeHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* StderrHandle */      /* parameter StderrHandle */
        &__midl_frag179,
        { 
        /* StderrHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* TargetDirectory */      /* parameter TargetDirectory */
        &__midl_frag40,
        { 
        /* TargetDirectory */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* VhdSize */      /* parameter VhdSize */
        &__midl_frag39,
        { 
        /* VhdSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* PackageFamilyName */      /* parameter PackageFamilyName */
        &__midl_frag40,
        { 
        /* PackageFamilyName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* InstalledDistributionName */      /* parameter InstalledDistributionName */
        &__midl_frag42,
        { 
        /* InstalledDistributionName */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* pDistroGuid */      /* parameter pDistroGuid */
        &__midl_frag4,
        { 
        /* pDistroGuid */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* RegisterDistribution */
    { 
    /* RegisterDistribution */      /* procedure RegisterDistribution */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 104 /* 0x68 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 12 /* 0xc */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistributionName */      /* parameter DistributionName */
        &__midl_frag40,
        { 
        /* DistributionName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Version */      /* parameter Version */
        &__midl_frag220,
        { 
        /* Version */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* FileHandle */      /* parameter FileHandle */
        &__midl_frag171,
        { 
        /* FileHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* StderrHandle */      /* parameter StderrHandle */
        &__midl_frag179,
        { 
        /* StderrHandle */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* TargetDirectory */      /* parameter TargetDirectory */
        &__midl_frag40,
        { 
        /* TargetDirectory */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag220,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* VhdSize */      /* parameter VhdSize */
        &__midl_frag39,
        { 
        /* VhdSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* PackageFamilyName */      /* parameter PackageFamilyName */
        &__midl_frag40,
        { 
        /* PackageFamilyName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* InstalledDistributionName */      /* parameter InstalledDistributionName */
        &__midl_frag42,
        { 
        /* InstalledDistributionName */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* pDistroGuid */      /* parameter pDistroGuid */
        &__midl_frag4,
        { 
        /* pDistroGuid */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    }
};

static const __midl_frag10_t __midl_frag10 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag232
    },
    { 
    /* *WCHAR */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag232
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* LXSS_ERROR_INFO */
    { 
    /* LXSS_ERROR_INFO */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* LXSS_ERROR_INFO */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag10,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* LXSS_ERROR_INFO */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* GUID */
    { 
    /* GUID */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* GUID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* CreateInstance */
    { 
    /* CreateInstance */      /* procedure CreateInstance */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* DistroGuid */      /* parameter DistroGuid */
        &__midl_frag177,
        { 
        /* DistroGuid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag228,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Error */      /* parameter Error */
        &__midl_frag7,
        { 
        /* Error */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag220,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



/* Standard interface: __MIDL_itf_test_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ILxssUserSession, ver. 0.0,
   GUID={0x38541BDC,0xF54F,0x4CEB,{0x85,0xD0,0x37,0xF0,0xF3,0xD2,0x61,0x7E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ILxssUserSession_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag12,
    &__midl_frag30,
    &__midl_frag48,
    &__midl_frag55,
    &__midl_frag99,
    &__midl_frag63,
    &__midl_frag69,
    &__midl_frag89,
    &__midl_frag93,
    &__midl_frag99,
    &__midl_frag103,
    &__midl_frag109,
    &__midl_frag119,
    &__midl_frag163,
    &__midl_frag169,
    &__midl_frag176,
    &__midl_frag183,
    &__midl_frag189,
    &__midl_frag198,
    &__midl_frag218,
    &__midl_frag221,
    &__midl_frag229
    };


static const MIDL_SYNTAX_INFO ILxssUserSession_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    test__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    test__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ILxssUserSession_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ILxssUserSession_ProxyInfo =
    {
    &Object_StubDesc,
    test__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ILxssUserSession_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ILxssUserSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    test__MIDL_ProcFormatString.Format,
    (unsigned short *) &ILxssUserSession_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ILxssUserSession_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(26) _ILxssUserSessionProxyVtbl = 
{
    &ILxssUserSession_ProxyInfo,
    &IID_ILxssUserSession,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::CreateInstance */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::RegisterDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::RegisterDistributionPipe */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::GetDistributionId */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::TerminateDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::UnregisterDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::ConfigureDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::GetDistributionConfiguration */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::GetDefaultDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::ResizeDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::SetDefaultDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::SetSparse */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::EnumerateDistributions */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::CreateLxProcess */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::SetVersion */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::ExportDistribution */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::ExportDistributionPipe */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::AttachDisk */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::DetachDisk */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::MountDisk */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Shutdown */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::ImportDistributionInplace */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::MoveDistribution */
};

const CInterfaceStubVtbl _ILxssUserSessionStubVtbl =
{
    &IID_ILxssUserSession,
    &ILxssUserSession_ServerInfo,
    26,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS_OPT
};


/* Standard interface: __MIDL_itf_test_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    test__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0xa0000, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _test_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ILxssUserSessionProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _test_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ILxssUserSessionStubVtbl,
    0
};

PCInterfaceName const _test_InterfaceNamesList[] = 
{
    "ILxssUserSession",
    0
};


#define _test_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _test, pIID, n)

int __stdcall _test_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_test_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

EXTERN_C const ExtendedProxyFileInfo test_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _test_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _test_StubVtblList,
    (const PCInterfaceName * ) & _test_InterfaceNamesList,
    0, /* no delegation */
    & _test_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

