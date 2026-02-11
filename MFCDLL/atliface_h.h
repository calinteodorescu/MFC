

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for C:\Tools\Microsoft\Visual Studio\2026.Enterprise\VC\Tools\MSVC\14.29.30133\\atlmfc\include\atliface.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __atliface_h_h__
#define __atliface_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IRegistrarBase_FWD_DEFINED__
#define __IRegistrarBase_FWD_DEFINED__
typedef interface IRegistrarBase IRegistrarBase;

#endif 	/* __IRegistrarBase_FWD_DEFINED__ */


#ifndef __IRegistrar_FWD_DEFINED__
#define __IRegistrar_FWD_DEFINED__
typedef interface IRegistrar IRegistrar;

#endif 	/* __IRegistrar_FWD_DEFINED__ */


#ifndef __IDocHostUIHandlerDispatch_FWD_DEFINED__
#define __IDocHostUIHandlerDispatch_FWD_DEFINED__
typedef interface IDocHostUIHandlerDispatch IDocHostUIHandlerDispatch;

#endif 	/* __IDocHostUIHandlerDispatch_FWD_DEFINED__ */


#ifndef __IAxWinHostWindow_FWD_DEFINED__
#define __IAxWinHostWindow_FWD_DEFINED__
typedef interface IAxWinHostWindow IAxWinHostWindow;

#endif 	/* __IAxWinHostWindow_FWD_DEFINED__ */


#ifndef __IAxWinHostWindowLic_FWD_DEFINED__
#define __IAxWinHostWindowLic_FWD_DEFINED__
typedef interface IAxWinHostWindowLic IAxWinHostWindowLic;

#endif 	/* __IAxWinHostWindowLic_FWD_DEFINED__ */


#ifndef __IAxWinAmbientDispatch_FWD_DEFINED__
#define __IAxWinAmbientDispatch_FWD_DEFINED__
typedef interface IAxWinAmbientDispatch IAxWinAmbientDispatch;

#endif 	/* __IAxWinAmbientDispatch_FWD_DEFINED__ */


#ifndef __IAxWinAmbientDispatchEx_FWD_DEFINED__
#define __IAxWinAmbientDispatchEx_FWD_DEFINED__
typedef interface IAxWinAmbientDispatchEx IAxWinAmbientDispatchEx;

#endif 	/* __IAxWinAmbientDispatchEx_FWD_DEFINED__ */


#ifndef __IInternalConnection_FWD_DEFINED__
#define __IInternalConnection_FWD_DEFINED__
typedef interface IInternalConnection IInternalConnection;

#endif 	/* __IInternalConnection_FWD_DEFINED__ */


#ifndef __IAccessibleProxy_FWD_DEFINED__
#define __IAccessibleProxy_FWD_DEFINED__
typedef interface IAccessibleProxy IAccessibleProxy;

#endif 	/* __IAccessibleProxy_FWD_DEFINED__ */


#ifndef __IAccessibleServer_FWD_DEFINED__
#define __IAccessibleServer_FWD_DEFINED__
typedef interface IAccessibleServer IAccessibleServer;

#endif 	/* __IAccessibleServer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "oleacc.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_atliface_0000_0000 */
/* [local] */ 

EXTERN_C const CLSID CLSID_Registrar;
#pragma external_header(push)
#pragma external_header(pop)


extern RPC_IF_HANDLE __MIDL_itf_atliface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_atliface_0000_0000_v0_0_s_ifspec;

#ifndef __IRegistrarBase_INTERFACE_DEFINED__
#define __IRegistrarBase_INTERFACE_DEFINED__

/* interface IRegistrarBase */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRegistrarBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e21f8a85-b05d-4243-8183-c7cb405588f7")
    IRegistrarBase : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddReplacement( 
            /* [in] */ LPCOLESTR key,
            /* [in] */ LPCOLESTR item) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearReplacements( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRegistrarBaseVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRegistrarBase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRegistrarBase * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRegistrarBase * This);
        
        DECLSPEC_XFGVIRT(IRegistrarBase, AddReplacement)
        HRESULT ( STDMETHODCALLTYPE *AddReplacement )( 
            IRegistrarBase * This,
            /* [in] */ LPCOLESTR key,
            /* [in] */ LPCOLESTR item);
        
        DECLSPEC_XFGVIRT(IRegistrarBase, ClearReplacements)
        HRESULT ( STDMETHODCALLTYPE *ClearReplacements )( 
            IRegistrarBase * This);
        
        END_INTERFACE
    } IRegistrarBaseVtbl;

    interface IRegistrarBase
    {
        CONST_VTBL struct IRegistrarBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRegistrarBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRegistrarBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRegistrarBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRegistrarBase_AddReplacement(This,key,item)	\
    ( (This)->lpVtbl -> AddReplacement(This,key,item) ) 

#define IRegistrarBase_ClearReplacements(This)	\
    ( (This)->lpVtbl -> ClearReplacements(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRegistrarBase_INTERFACE_DEFINED__ */


#ifndef __IRegistrar_INTERFACE_DEFINED__
#define __IRegistrar_INTERFACE_DEFINED__

/* interface IRegistrar */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44EC053B-400F-11D0-9DCD-00A0C90391D3")
    IRegistrar : public IRegistrarBase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ResourceRegisterSz( 
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ LPCOLESTR szID,
            /* [in] */ LPCOLESTR szType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResourceUnregisterSz( 
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ LPCOLESTR szID,
            /* [in] */ LPCOLESTR szType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FileRegister( 
            /* [in] */ LPCOLESTR fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FileUnregister( 
            /* [in] */ LPCOLESTR fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StringRegister( 
            /* [in] */ LPCOLESTR data) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StringUnregister( 
            /* [in] */ LPCOLESTR data) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResourceRegister( 
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ UINT nID,
            /* [in] */ LPCOLESTR szType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResourceUnregister( 
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ UINT nID,
            /* [in] */ LPCOLESTR szType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRegistrar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRegistrar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRegistrar * This);
        
        DECLSPEC_XFGVIRT(IRegistrarBase, AddReplacement)
        HRESULT ( STDMETHODCALLTYPE *AddReplacement )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR key,
            /* [in] */ LPCOLESTR item);
        
        DECLSPEC_XFGVIRT(IRegistrarBase, ClearReplacements)
        HRESULT ( STDMETHODCALLTYPE *ClearReplacements )( 
            IRegistrar * This);
        
        DECLSPEC_XFGVIRT(IRegistrar, ResourceRegisterSz)
        HRESULT ( STDMETHODCALLTYPE *ResourceRegisterSz )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ LPCOLESTR szID,
            /* [in] */ LPCOLESTR szType);
        
        DECLSPEC_XFGVIRT(IRegistrar, ResourceUnregisterSz)
        HRESULT ( STDMETHODCALLTYPE *ResourceUnregisterSz )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ LPCOLESTR szID,
            /* [in] */ LPCOLESTR szType);
        
        DECLSPEC_XFGVIRT(IRegistrar, FileRegister)
        HRESULT ( STDMETHODCALLTYPE *FileRegister )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR fileName);
        
        DECLSPEC_XFGVIRT(IRegistrar, FileUnregister)
        HRESULT ( STDMETHODCALLTYPE *FileUnregister )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR fileName);
        
        DECLSPEC_XFGVIRT(IRegistrar, StringRegister)
        HRESULT ( STDMETHODCALLTYPE *StringRegister )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR data);
        
        DECLSPEC_XFGVIRT(IRegistrar, StringUnregister)
        HRESULT ( STDMETHODCALLTYPE *StringUnregister )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR data);
        
        DECLSPEC_XFGVIRT(IRegistrar, ResourceRegister)
        HRESULT ( STDMETHODCALLTYPE *ResourceRegister )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ UINT nID,
            /* [in] */ LPCOLESTR szType);
        
        DECLSPEC_XFGVIRT(IRegistrar, ResourceUnregister)
        HRESULT ( STDMETHODCALLTYPE *ResourceUnregister )( 
            IRegistrar * This,
            /* [in] */ LPCOLESTR resFileName,
            /* [in] */ UINT nID,
            /* [in] */ LPCOLESTR szType);
        
        END_INTERFACE
    } IRegistrarVtbl;

    interface IRegistrar
    {
        CONST_VTBL struct IRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRegistrar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRegistrar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRegistrar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRegistrar_AddReplacement(This,key,item)	\
    ( (This)->lpVtbl -> AddReplacement(This,key,item) ) 

#define IRegistrar_ClearReplacements(This)	\
    ( (This)->lpVtbl -> ClearReplacements(This) ) 


#define IRegistrar_ResourceRegisterSz(This,resFileName,szID,szType)	\
    ( (This)->lpVtbl -> ResourceRegisterSz(This,resFileName,szID,szType) ) 

#define IRegistrar_ResourceUnregisterSz(This,resFileName,szID,szType)	\
    ( (This)->lpVtbl -> ResourceUnregisterSz(This,resFileName,szID,szType) ) 

#define IRegistrar_FileRegister(This,fileName)	\
    ( (This)->lpVtbl -> FileRegister(This,fileName) ) 

#define IRegistrar_FileUnregister(This,fileName)	\
    ( (This)->lpVtbl -> FileUnregister(This,fileName) ) 

#define IRegistrar_StringRegister(This,data)	\
    ( (This)->lpVtbl -> StringRegister(This,data) ) 

#define IRegistrar_StringUnregister(This,data)	\
    ( (This)->lpVtbl -> StringUnregister(This,data) ) 

#define IRegistrar_ResourceRegister(This,resFileName,nID,szType)	\
    ( (This)->lpVtbl -> ResourceRegister(This,resFileName,nID,szType) ) 

#define IRegistrar_ResourceUnregister(This,resFileName,nID,szType)	\
    ( (This)->lpVtbl -> ResourceUnregister(This,resFileName,nID,szType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRegistrar_INTERFACE_DEFINED__ */


#ifndef __IDocHostUIHandlerDispatch_INTERFACE_DEFINED__
#define __IDocHostUIHandlerDispatch_INTERFACE_DEFINED__

/* interface IDocHostUIHandlerDispatch */
/* [object][unique][helpstring][uuid][local] */ 

typedef 
enum tagDOCHOSTUIDBLCLKDispatch
    {
        docHostUIDblClkDEFAULT	= 0,
        docHostUIDblClkSHOWPROPERTIES	= 1,
        docHostUIDblClkSHOWCODE	= 2
    } 	DOCHOSTUIDBLCLKDispatch;

typedef 
enum tagDocHostUIFlagDispatch
    {
        docHostUIFlagDIALOG	= 1,
        docHostUIFlagDISABLE_HELP_MENU	= 2,
        docHostUIFlagNO3DBORDER	= 4,
        docHostUIFlagSCROLL_NO	= 8,
        docHostUIFlagDISABLE_SCRIPT_INACTIVE	= 16,
        docHostUIFlagOPENNEWWIN	= 32,
        docHostUIFlagDISABLE_OFFSCREEN	= 64,
        docHostUIFlagFLAT_SCROLLBAR	= 128,
        docHostUIFlagDIV_BLOCKDEFAULT	= 256,
        docHostUIFlagACTIVATE_CLIENTHIT_ONLY	= 512
    } 	DocHostUIFlagDispatch;


EXTERN_C const IID IID_IDocHostUIHandlerDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("425B5AF0-65F1-11d1-9611-0000F81E0D0D")
    IDocHostUIHandlerDispatch : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowContextMenu( 
            /* [in] */ DWORD dwID,
            /* [in] */ DWORD x,
            /* [in] */ DWORD y,
            /* [in] */ IUnknown *pcmdtReserved,
            /* [in] */ IDispatch *pdispReserved,
            /* [retval][out] */ HRESULT *dwRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHostInfo( 
            /* [out][in] */ DWORD *pdwFlags,
            /* [out][in] */ DWORD *pdwDoubleClick) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowUI( 
            /* [in] */ DWORD dwID,
            /* [in] */ IUnknown *pActiveObject,
            /* [in] */ IUnknown *pCommandTarget,
            /* [in] */ IUnknown *pFrame,
            /* [in] */ IUnknown *pDoc,
            /* [retval][out] */ HRESULT *dwRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HideUI( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateUI( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableModeless( 
            /* [in] */ VARIANT_BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDocWindowActivate( 
            /* [in] */ VARIANT_BOOL fActivate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFrameWindowActivate( 
            /* [in] */ VARIANT_BOOL fActivate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResizeBorder( 
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom,
            /* [in] */ IUnknown *pUIWindow,
            /* [in] */ VARIANT_BOOL fFrameWindow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ DWORD_PTR hWnd,
            /* [in] */ DWORD nMessage,
            /* [in] */ DWORD_PTR wParam,
            /* [in] */ DWORD_PTR lParam,
            /* [in] */ BSTR bstrGuidCmdGroup,
            /* [in] */ DWORD nCmdID,
            /* [retval][out] */ HRESULT *dwRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptionKeyPath( 
            /* [out] */ BSTR *pbstrKey,
            /* [in] */ DWORD dw) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDropTarget( 
            /* [in] */ IUnknown *pDropTarget,
            /* [out] */ IUnknown **ppDropTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExternal( 
            /* [out] */ IDispatch **ppDispatch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateUrl( 
            /* [in] */ DWORD dwTranslate,
            /* [in] */ BSTR bstrURLIn,
            /* [out] */ BSTR *pbstrURLOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FilterDataObject( 
            /* [in] */ IUnknown *pDO,
            /* [out] */ IUnknown **ppDORet) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDocHostUIHandlerDispatchVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocHostUIHandlerDispatch * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocHostUIHandlerDispatch * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDocHostUIHandlerDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDocHostUIHandlerDispatch * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, ShowContextMenu)
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ DWORD dwID,
            /* [in] */ DWORD x,
            /* [in] */ DWORD y,
            /* [in] */ IUnknown *pcmdtReserved,
            /* [in] */ IDispatch *pdispReserved,
            /* [retval][out] */ HRESULT *dwRetVal);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, GetHostInfo)
        HRESULT ( STDMETHODCALLTYPE *GetHostInfo )( 
            IDocHostUIHandlerDispatch * This,
            /* [out][in] */ DWORD *pdwFlags,
            /* [out][in] */ DWORD *pdwDoubleClick);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, ShowUI)
        HRESULT ( STDMETHODCALLTYPE *ShowUI )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ DWORD dwID,
            /* [in] */ IUnknown *pActiveObject,
            /* [in] */ IUnknown *pCommandTarget,
            /* [in] */ IUnknown *pFrame,
            /* [in] */ IUnknown *pDoc,
            /* [retval][out] */ HRESULT *dwRetVal);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, HideUI)
        HRESULT ( STDMETHODCALLTYPE *HideUI )( 
            IDocHostUIHandlerDispatch * This);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, UpdateUI)
        HRESULT ( STDMETHODCALLTYPE *UpdateUI )( 
            IDocHostUIHandlerDispatch * This);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, EnableModeless)
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ VARIANT_BOOL fEnable);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, OnDocWindowActivate)
        HRESULT ( STDMETHODCALLTYPE *OnDocWindowActivate )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ VARIANT_BOOL fActivate);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, OnFrameWindowActivate)
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivate )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ VARIANT_BOOL fActivate);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, ResizeBorder)
        HRESULT ( STDMETHODCALLTYPE *ResizeBorder )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ long left,
            /* [in] */ long top,
            /* [in] */ long right,
            /* [in] */ long bottom,
            /* [in] */ IUnknown *pUIWindow,
            /* [in] */ VARIANT_BOOL fFrameWindow);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, TranslateAccelerator)
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ DWORD_PTR hWnd,
            /* [in] */ DWORD nMessage,
            /* [in] */ DWORD_PTR wParam,
            /* [in] */ DWORD_PTR lParam,
            /* [in] */ BSTR bstrGuidCmdGroup,
            /* [in] */ DWORD nCmdID,
            /* [retval][out] */ HRESULT *dwRetVal);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, GetOptionKeyPath)
        HRESULT ( STDMETHODCALLTYPE *GetOptionKeyPath )( 
            IDocHostUIHandlerDispatch * This,
            /* [out] */ BSTR *pbstrKey,
            /* [in] */ DWORD dw);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, GetDropTarget)
        HRESULT ( STDMETHODCALLTYPE *GetDropTarget )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ IUnknown *pDropTarget,
            /* [out] */ IUnknown **ppDropTarget);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, GetExternal)
        HRESULT ( STDMETHODCALLTYPE *GetExternal )( 
            IDocHostUIHandlerDispatch * This,
            /* [out] */ IDispatch **ppDispatch);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, TranslateUrl)
        HRESULT ( STDMETHODCALLTYPE *TranslateUrl )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ DWORD dwTranslate,
            /* [in] */ BSTR bstrURLIn,
            /* [out] */ BSTR *pbstrURLOut);
        
        DECLSPEC_XFGVIRT(IDocHostUIHandlerDispatch, FilterDataObject)
        HRESULT ( STDMETHODCALLTYPE *FilterDataObject )( 
            IDocHostUIHandlerDispatch * This,
            /* [in] */ IUnknown *pDO,
            /* [out] */ IUnknown **ppDORet);
        
        END_INTERFACE
    } IDocHostUIHandlerDispatchVtbl;

    interface IDocHostUIHandlerDispatch
    {
        CONST_VTBL struct IDocHostUIHandlerDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocHostUIHandlerDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDocHostUIHandlerDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDocHostUIHandlerDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDocHostUIHandlerDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDocHostUIHandlerDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDocHostUIHandlerDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDocHostUIHandlerDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDocHostUIHandlerDispatch_ShowContextMenu(This,dwID,x,y,pcmdtReserved,pdispReserved,dwRetVal)	\
    ( (This)->lpVtbl -> ShowContextMenu(This,dwID,x,y,pcmdtReserved,pdispReserved,dwRetVal) ) 

#define IDocHostUIHandlerDispatch_GetHostInfo(This,pdwFlags,pdwDoubleClick)	\
    ( (This)->lpVtbl -> GetHostInfo(This,pdwFlags,pdwDoubleClick) ) 

#define IDocHostUIHandlerDispatch_ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc,dwRetVal)	\
    ( (This)->lpVtbl -> ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc,dwRetVal) ) 

#define IDocHostUIHandlerDispatch_HideUI(This)	\
    ( (This)->lpVtbl -> HideUI(This) ) 

#define IDocHostUIHandlerDispatch_UpdateUI(This)	\
    ( (This)->lpVtbl -> UpdateUI(This) ) 

#define IDocHostUIHandlerDispatch_EnableModeless(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) ) 

#define IDocHostUIHandlerDispatch_OnDocWindowActivate(This,fActivate)	\
    ( (This)->lpVtbl -> OnDocWindowActivate(This,fActivate) ) 

#define IDocHostUIHandlerDispatch_OnFrameWindowActivate(This,fActivate)	\
    ( (This)->lpVtbl -> OnFrameWindowActivate(This,fActivate) ) 

#define IDocHostUIHandlerDispatch_ResizeBorder(This,left,top,right,bottom,pUIWindow,fFrameWindow)	\
    ( (This)->lpVtbl -> ResizeBorder(This,left,top,right,bottom,pUIWindow,fFrameWindow) ) 

#define IDocHostUIHandlerDispatch_TranslateAccelerator(This,hWnd,nMessage,wParam,lParam,bstrGuidCmdGroup,nCmdID,dwRetVal)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,hWnd,nMessage,wParam,lParam,bstrGuidCmdGroup,nCmdID,dwRetVal) ) 

#define IDocHostUIHandlerDispatch_GetOptionKeyPath(This,pbstrKey,dw)	\
    ( (This)->lpVtbl -> GetOptionKeyPath(This,pbstrKey,dw) ) 

#define IDocHostUIHandlerDispatch_GetDropTarget(This,pDropTarget,ppDropTarget)	\
    ( (This)->lpVtbl -> GetDropTarget(This,pDropTarget,ppDropTarget) ) 

#define IDocHostUIHandlerDispatch_GetExternal(This,ppDispatch)	\
    ( (This)->lpVtbl -> GetExternal(This,ppDispatch) ) 

#define IDocHostUIHandlerDispatch_TranslateUrl(This,dwTranslate,bstrURLIn,pbstrURLOut)	\
    ( (This)->lpVtbl -> TranslateUrl(This,dwTranslate,bstrURLIn,pbstrURLOut) ) 

#define IDocHostUIHandlerDispatch_FilterDataObject(This,pDO,ppDORet)	\
    ( (This)->lpVtbl -> FilterDataObject(This,pDO,ppDORet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDocHostUIHandlerDispatch_INTERFACE_DEFINED__ */


#ifndef __IAxWinHostWindow_INTERFACE_DEFINED__
#define __IAxWinHostWindow_INTERFACE_DEFINED__

/* interface IAxWinHostWindow */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IAxWinHostWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B6EA2050-048A-11d1-82B9-00C04FB9942E")
    IAxWinHostWindow : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateControl( 
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateControlEx( 
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream,
            /* [out] */ IUnknown **ppUnk,
            /* [in] */ REFIID riidAdvise,
            /* [in] */ IUnknown *punkAdvise) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AttachControl( 
            /* [in] */ IUnknown *pUnkControl,
            /* [in] */ HWND hWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryControl( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExternalDispatch( 
            /* [in] */ IDispatch *pDisp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExternalUIHandler( 
            /* [in] */ IDocHostUIHandlerDispatch *pDisp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxWinHostWindowVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxWinHostWindow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxWinHostWindow * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxWinHostWindow * This);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, CreateControl)
        HRESULT ( STDMETHODCALLTYPE *CreateControl )( 
            IAxWinHostWindow * This,
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, CreateControlEx)
        HRESULT ( STDMETHODCALLTYPE *CreateControlEx )( 
            IAxWinHostWindow * This,
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream,
            /* [out] */ IUnknown **ppUnk,
            /* [in] */ REFIID riidAdvise,
            /* [in] */ IUnknown *punkAdvise);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, AttachControl)
        HRESULT ( STDMETHODCALLTYPE *AttachControl )( 
            IAxWinHostWindow * This,
            /* [in] */ IUnknown *pUnkControl,
            /* [in] */ HWND hWnd);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, QueryControl)
        HRESULT ( STDMETHODCALLTYPE *QueryControl )( 
            IAxWinHostWindow * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, SetExternalDispatch)
        HRESULT ( STDMETHODCALLTYPE *SetExternalDispatch )( 
            IAxWinHostWindow * This,
            /* [in] */ IDispatch *pDisp);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, SetExternalUIHandler)
        HRESULT ( STDMETHODCALLTYPE *SetExternalUIHandler )( 
            IAxWinHostWindow * This,
            /* [in] */ IDocHostUIHandlerDispatch *pDisp);
        
        END_INTERFACE
    } IAxWinHostWindowVtbl;

    interface IAxWinHostWindow
    {
        CONST_VTBL struct IAxWinHostWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxWinHostWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxWinHostWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxWinHostWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxWinHostWindow_CreateControl(This,lpTricsData,hWnd,pStream)	\
    ( (This)->lpVtbl -> CreateControl(This,lpTricsData,hWnd,pStream) ) 

#define IAxWinHostWindow_CreateControlEx(This,lpTricsData,hWnd,pStream,ppUnk,riidAdvise,punkAdvise)	\
    ( (This)->lpVtbl -> CreateControlEx(This,lpTricsData,hWnd,pStream,ppUnk,riidAdvise,punkAdvise) ) 

#define IAxWinHostWindow_AttachControl(This,pUnkControl,hWnd)	\
    ( (This)->lpVtbl -> AttachControl(This,pUnkControl,hWnd) ) 

#define IAxWinHostWindow_QueryControl(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryControl(This,riid,ppvObject) ) 

#define IAxWinHostWindow_SetExternalDispatch(This,pDisp)	\
    ( (This)->lpVtbl -> SetExternalDispatch(This,pDisp) ) 

#define IAxWinHostWindow_SetExternalUIHandler(This,pDisp)	\
    ( (This)->lpVtbl -> SetExternalUIHandler(This,pDisp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxWinHostWindow_INTERFACE_DEFINED__ */


#ifndef __IAxWinHostWindowLic_INTERFACE_DEFINED__
#define __IAxWinHostWindowLic_INTERFACE_DEFINED__

/* interface IAxWinHostWindowLic */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IAxWinHostWindowLic;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3935BDA8-4ED9-495c-8650-E01FC1E38A4B")
    IAxWinHostWindowLic : public IAxWinHostWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateControlLic( 
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream,
            /* [in] */ BSTR bstrLic) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateControlLicEx( 
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream,
            /* [out] */ IUnknown **ppUnk,
            /* [in] */ REFIID riidAdvise,
            /* [in] */ IUnknown *punkAdvise,
            /* [in] */ BSTR bstrLic) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxWinHostWindowLicVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxWinHostWindowLic * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxWinHostWindowLic * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxWinHostWindowLic * This);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, CreateControl)
        HRESULT ( STDMETHODCALLTYPE *CreateControl )( 
            IAxWinHostWindowLic * This,
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, CreateControlEx)
        HRESULT ( STDMETHODCALLTYPE *CreateControlEx )( 
            IAxWinHostWindowLic * This,
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream,
            /* [out] */ IUnknown **ppUnk,
            /* [in] */ REFIID riidAdvise,
            /* [in] */ IUnknown *punkAdvise);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, AttachControl)
        HRESULT ( STDMETHODCALLTYPE *AttachControl )( 
            IAxWinHostWindowLic * This,
            /* [in] */ IUnknown *pUnkControl,
            /* [in] */ HWND hWnd);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, QueryControl)
        HRESULT ( STDMETHODCALLTYPE *QueryControl )( 
            IAxWinHostWindowLic * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, SetExternalDispatch)
        HRESULT ( STDMETHODCALLTYPE *SetExternalDispatch )( 
            IAxWinHostWindowLic * This,
            /* [in] */ IDispatch *pDisp);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindow, SetExternalUIHandler)
        HRESULT ( STDMETHODCALLTYPE *SetExternalUIHandler )( 
            IAxWinHostWindowLic * This,
            /* [in] */ IDocHostUIHandlerDispatch *pDisp);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindowLic, CreateControlLic)
        HRESULT ( STDMETHODCALLTYPE *CreateControlLic )( 
            IAxWinHostWindowLic * This,
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream,
            /* [in] */ BSTR bstrLic);
        
        DECLSPEC_XFGVIRT(IAxWinHostWindowLic, CreateControlLicEx)
        HRESULT ( STDMETHODCALLTYPE *CreateControlLicEx )( 
            IAxWinHostWindowLic * This,
            /* [in] */ LPCOLESTR lpTricsData,
            /* [in] */ HWND hWnd,
            /* [in] */ IStream *pStream,
            /* [out] */ IUnknown **ppUnk,
            /* [in] */ REFIID riidAdvise,
            /* [in] */ IUnknown *punkAdvise,
            /* [in] */ BSTR bstrLic);
        
        END_INTERFACE
    } IAxWinHostWindowLicVtbl;

    interface IAxWinHostWindowLic
    {
        CONST_VTBL struct IAxWinHostWindowLicVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxWinHostWindowLic_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxWinHostWindowLic_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxWinHostWindowLic_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxWinHostWindowLic_CreateControl(This,lpTricsData,hWnd,pStream)	\
    ( (This)->lpVtbl -> CreateControl(This,lpTricsData,hWnd,pStream) ) 

#define IAxWinHostWindowLic_CreateControlEx(This,lpTricsData,hWnd,pStream,ppUnk,riidAdvise,punkAdvise)	\
    ( (This)->lpVtbl -> CreateControlEx(This,lpTricsData,hWnd,pStream,ppUnk,riidAdvise,punkAdvise) ) 

#define IAxWinHostWindowLic_AttachControl(This,pUnkControl,hWnd)	\
    ( (This)->lpVtbl -> AttachControl(This,pUnkControl,hWnd) ) 

#define IAxWinHostWindowLic_QueryControl(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryControl(This,riid,ppvObject) ) 

#define IAxWinHostWindowLic_SetExternalDispatch(This,pDisp)	\
    ( (This)->lpVtbl -> SetExternalDispatch(This,pDisp) ) 

#define IAxWinHostWindowLic_SetExternalUIHandler(This,pDisp)	\
    ( (This)->lpVtbl -> SetExternalUIHandler(This,pDisp) ) 


#define IAxWinHostWindowLic_CreateControlLic(This,lpTricsData,hWnd,pStream,bstrLic)	\
    ( (This)->lpVtbl -> CreateControlLic(This,lpTricsData,hWnd,pStream,bstrLic) ) 

#define IAxWinHostWindowLic_CreateControlLicEx(This,lpTricsData,hWnd,pStream,ppUnk,riidAdvise,punkAdvise,bstrLic)	\
    ( (This)->lpVtbl -> CreateControlLicEx(This,lpTricsData,hWnd,pStream,ppUnk,riidAdvise,punkAdvise,bstrLic) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxWinHostWindowLic_INTERFACE_DEFINED__ */


#ifndef __IAxWinAmbientDispatch_INTERFACE_DEFINED__
#define __IAxWinAmbientDispatch_INTERFACE_DEFINED__

/* interface IAxWinAmbientDispatch */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IAxWinAmbientDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B6EA2051-048A-11d1-82B9-00C04FB9942E")
    IAxWinAmbientDispatch : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowWindowlessActivation( 
            /* [in] */ VARIANT_BOOL bCanWindowlessActivate) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowWindowlessActivation( 
            /* [retval][out] */ VARIANT_BOOL *pbCanWindowlessActivate) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BackColor( 
            /* [in] */ OLE_COLOR clrBackground) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BackColor( 
            /* [retval][out] */ OLE_COLOR *pclrBackground) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ForeColor( 
            /* [in] */ OLE_COLOR clrForeground) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ForeColor( 
            /* [retval][out] */ OLE_COLOR *pclrForeground) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LocaleID( 
            /* [in] */ LCID lcidLocaleID) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LocaleID( 
            /* [retval][out] */ LCID *plcidLocaleID) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UserMode( 
            /* [in] */ VARIANT_BOOL bUserMode) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UserMode( 
            /* [retval][out] */ VARIANT_BOOL *pbUserMode) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayAsDefault( 
            /* [in] */ VARIANT_BOOL bDisplayAsDefault) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayAsDefault( 
            /* [retval][out] */ VARIANT_BOOL *pbDisplayAsDefault) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Font( 
            /* [in] */ IFontDisp *pFont) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ IFontDisp **pFont) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MessageReflect( 
            /* [in] */ VARIANT_BOOL bMsgReflect) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MessageReflect( 
            /* [retval][out] */ VARIANT_BOOL *pbMsgReflect) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShowGrabHandles( 
            /* [retval][out] */ VARIANT_BOOL *pbShowGrabHandles) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShowHatching( 
            /* [retval][out] */ VARIANT_BOOL *pbShowHatching) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DocHostFlags( 
            /* [in] */ DWORD dwDocHostFlags) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DocHostFlags( 
            /* [retval][out] */ DWORD *pdwDocHostFlags) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DocHostDoubleClickFlags( 
            /* [in] */ DWORD dwDocHostDoubleClickFlags) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DocHostDoubleClickFlags( 
            /* [retval][out] */ DWORD *pdwDocHostDoubleClickFlags) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowContextMenu( 
            /* [in] */ VARIANT_BOOL bAllowContextMenu) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowContextMenu( 
            /* [retval][out] */ VARIANT_BOOL *pbAllowContextMenu) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowShowUI( 
            /* [in] */ VARIANT_BOOL bAllowShowUI) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowShowUI( 
            /* [retval][out] */ VARIANT_BOOL *pbAllowShowUI) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OptionKeyPath( 
            /* [in] */ BSTR bstrOptionKeyPath) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OptionKeyPath( 
            /* [retval][out] */ BSTR *pbstrOptionKeyPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxWinAmbientDispatchVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxWinAmbientDispatch * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxWinAmbientDispatch * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAxWinAmbientDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAxWinAmbientDispatch * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_AllowWindowlessActivation)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowWindowlessActivation )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ VARIANT_BOOL bCanWindowlessActivate);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_AllowWindowlessActivation)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowWindowlessActivation )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbCanWindowlessActivate);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_BackColor)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackColor )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ OLE_COLOR clrBackground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_BackColor)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackColor )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ OLE_COLOR *pclrBackground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_ForeColor)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForeColor )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ OLE_COLOR clrForeground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_ForeColor)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForeColor )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ OLE_COLOR *pclrForeground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_LocaleID)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocaleID )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ LCID lcidLocaleID);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_LocaleID)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleID )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ LCID *plcidLocaleID);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_UserMode)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserMode )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ VARIANT_BOOL bUserMode);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_UserMode)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserMode )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbUserMode);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_DisplayAsDefault)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayAsDefault )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ VARIANT_BOOL bDisplayAsDefault);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_DisplayAsDefault)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayAsDefault )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbDisplayAsDefault);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_Font)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Font )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ IFontDisp *pFont);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_Font)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ IFontDisp **pFont);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_MessageReflect)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageReflect )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ VARIANT_BOOL bMsgReflect);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_MessageReflect)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageReflect )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbMsgReflect);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_ShowGrabHandles)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowGrabHandles )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbShowGrabHandles);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_ShowHatching)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowHatching )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbShowHatching);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_DocHostFlags)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DocHostFlags )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ DWORD dwDocHostFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_DocHostFlags)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocHostFlags )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ DWORD *pdwDocHostFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_DocHostDoubleClickFlags)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DocHostDoubleClickFlags )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ DWORD dwDocHostDoubleClickFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_DocHostDoubleClickFlags)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocHostDoubleClickFlags )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ DWORD *pdwDocHostDoubleClickFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_AllowContextMenu)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowContextMenu )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ VARIANT_BOOL bAllowContextMenu);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_AllowContextMenu)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowContextMenu )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbAllowContextMenu);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_AllowShowUI)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowShowUI )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ VARIANT_BOOL bAllowShowUI);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_AllowShowUI)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowShowUI )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ VARIANT_BOOL *pbAllowShowUI);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_OptionKeyPath)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OptionKeyPath )( 
            IAxWinAmbientDispatch * This,
            /* [in] */ BSTR bstrOptionKeyPath);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_OptionKeyPath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OptionKeyPath )( 
            IAxWinAmbientDispatch * This,
            /* [retval][out] */ BSTR *pbstrOptionKeyPath);
        
        END_INTERFACE
    } IAxWinAmbientDispatchVtbl;

    interface IAxWinAmbientDispatch
    {
        CONST_VTBL struct IAxWinAmbientDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxWinAmbientDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxWinAmbientDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxWinAmbientDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxWinAmbientDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAxWinAmbientDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAxWinAmbientDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAxWinAmbientDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAxWinAmbientDispatch_put_AllowWindowlessActivation(This,bCanWindowlessActivate)	\
    ( (This)->lpVtbl -> put_AllowWindowlessActivation(This,bCanWindowlessActivate) ) 

#define IAxWinAmbientDispatch_get_AllowWindowlessActivation(This,pbCanWindowlessActivate)	\
    ( (This)->lpVtbl -> get_AllowWindowlessActivation(This,pbCanWindowlessActivate) ) 

#define IAxWinAmbientDispatch_put_BackColor(This,clrBackground)	\
    ( (This)->lpVtbl -> put_BackColor(This,clrBackground) ) 

#define IAxWinAmbientDispatch_get_BackColor(This,pclrBackground)	\
    ( (This)->lpVtbl -> get_BackColor(This,pclrBackground) ) 

#define IAxWinAmbientDispatch_put_ForeColor(This,clrForeground)	\
    ( (This)->lpVtbl -> put_ForeColor(This,clrForeground) ) 

#define IAxWinAmbientDispatch_get_ForeColor(This,pclrForeground)	\
    ( (This)->lpVtbl -> get_ForeColor(This,pclrForeground) ) 

#define IAxWinAmbientDispatch_put_LocaleID(This,lcidLocaleID)	\
    ( (This)->lpVtbl -> put_LocaleID(This,lcidLocaleID) ) 

#define IAxWinAmbientDispatch_get_LocaleID(This,plcidLocaleID)	\
    ( (This)->lpVtbl -> get_LocaleID(This,plcidLocaleID) ) 

#define IAxWinAmbientDispatch_put_UserMode(This,bUserMode)	\
    ( (This)->lpVtbl -> put_UserMode(This,bUserMode) ) 

#define IAxWinAmbientDispatch_get_UserMode(This,pbUserMode)	\
    ( (This)->lpVtbl -> get_UserMode(This,pbUserMode) ) 

#define IAxWinAmbientDispatch_put_DisplayAsDefault(This,bDisplayAsDefault)	\
    ( (This)->lpVtbl -> put_DisplayAsDefault(This,bDisplayAsDefault) ) 

#define IAxWinAmbientDispatch_get_DisplayAsDefault(This,pbDisplayAsDefault)	\
    ( (This)->lpVtbl -> get_DisplayAsDefault(This,pbDisplayAsDefault) ) 

#define IAxWinAmbientDispatch_put_Font(This,pFont)	\
    ( (This)->lpVtbl -> put_Font(This,pFont) ) 

#define IAxWinAmbientDispatch_get_Font(This,pFont)	\
    ( (This)->lpVtbl -> get_Font(This,pFont) ) 

#define IAxWinAmbientDispatch_put_MessageReflect(This,bMsgReflect)	\
    ( (This)->lpVtbl -> put_MessageReflect(This,bMsgReflect) ) 

#define IAxWinAmbientDispatch_get_MessageReflect(This,pbMsgReflect)	\
    ( (This)->lpVtbl -> get_MessageReflect(This,pbMsgReflect) ) 

#define IAxWinAmbientDispatch_get_ShowGrabHandles(This,pbShowGrabHandles)	\
    ( (This)->lpVtbl -> get_ShowGrabHandles(This,pbShowGrabHandles) ) 

#define IAxWinAmbientDispatch_get_ShowHatching(This,pbShowHatching)	\
    ( (This)->lpVtbl -> get_ShowHatching(This,pbShowHatching) ) 

#define IAxWinAmbientDispatch_put_DocHostFlags(This,dwDocHostFlags)	\
    ( (This)->lpVtbl -> put_DocHostFlags(This,dwDocHostFlags) ) 

#define IAxWinAmbientDispatch_get_DocHostFlags(This,pdwDocHostFlags)	\
    ( (This)->lpVtbl -> get_DocHostFlags(This,pdwDocHostFlags) ) 

#define IAxWinAmbientDispatch_put_DocHostDoubleClickFlags(This,dwDocHostDoubleClickFlags)	\
    ( (This)->lpVtbl -> put_DocHostDoubleClickFlags(This,dwDocHostDoubleClickFlags) ) 

#define IAxWinAmbientDispatch_get_DocHostDoubleClickFlags(This,pdwDocHostDoubleClickFlags)	\
    ( (This)->lpVtbl -> get_DocHostDoubleClickFlags(This,pdwDocHostDoubleClickFlags) ) 

#define IAxWinAmbientDispatch_put_AllowContextMenu(This,bAllowContextMenu)	\
    ( (This)->lpVtbl -> put_AllowContextMenu(This,bAllowContextMenu) ) 

#define IAxWinAmbientDispatch_get_AllowContextMenu(This,pbAllowContextMenu)	\
    ( (This)->lpVtbl -> get_AllowContextMenu(This,pbAllowContextMenu) ) 

#define IAxWinAmbientDispatch_put_AllowShowUI(This,bAllowShowUI)	\
    ( (This)->lpVtbl -> put_AllowShowUI(This,bAllowShowUI) ) 

#define IAxWinAmbientDispatch_get_AllowShowUI(This,pbAllowShowUI)	\
    ( (This)->lpVtbl -> get_AllowShowUI(This,pbAllowShowUI) ) 

#define IAxWinAmbientDispatch_put_OptionKeyPath(This,bstrOptionKeyPath)	\
    ( (This)->lpVtbl -> put_OptionKeyPath(This,bstrOptionKeyPath) ) 

#define IAxWinAmbientDispatch_get_OptionKeyPath(This,pbstrOptionKeyPath)	\
    ( (This)->lpVtbl -> get_OptionKeyPath(This,pbstrOptionKeyPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxWinAmbientDispatch_INTERFACE_DEFINED__ */


#ifndef __IAxWinAmbientDispatchEx_INTERFACE_DEFINED__
#define __IAxWinAmbientDispatchEx_INTERFACE_DEFINED__

/* interface IAxWinAmbientDispatchEx */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IAxWinAmbientDispatchEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2D0778B-AC99-4c58-A5C8-E7724E5316B5")
    IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetAmbientDispatch( 
            /* [in] */ IDispatch *pDispatch) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxWinAmbientDispatchExVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxWinAmbientDispatchEx * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxWinAmbientDispatchEx * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAxWinAmbientDispatchEx * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAxWinAmbientDispatchEx * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_AllowWindowlessActivation)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowWindowlessActivation )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ VARIANT_BOOL bCanWindowlessActivate);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_AllowWindowlessActivation)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowWindowlessActivation )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbCanWindowlessActivate);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_BackColor)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackColor )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ OLE_COLOR clrBackground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_BackColor)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackColor )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ OLE_COLOR *pclrBackground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_ForeColor)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForeColor )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ OLE_COLOR clrForeground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_ForeColor)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForeColor )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ OLE_COLOR *pclrForeground);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_LocaleID)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocaleID )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ LCID lcidLocaleID);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_LocaleID)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleID )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ LCID *plcidLocaleID);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_UserMode)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserMode )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ VARIANT_BOOL bUserMode);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_UserMode)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserMode )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbUserMode);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_DisplayAsDefault)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayAsDefault )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ VARIANT_BOOL bDisplayAsDefault);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_DisplayAsDefault)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayAsDefault )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbDisplayAsDefault);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_Font)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Font )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ IFontDisp *pFont);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_Font)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ IFontDisp **pFont);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_MessageReflect)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageReflect )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ VARIANT_BOOL bMsgReflect);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_MessageReflect)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageReflect )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbMsgReflect);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_ShowGrabHandles)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowGrabHandles )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbShowGrabHandles);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_ShowHatching)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowHatching )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbShowHatching);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_DocHostFlags)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DocHostFlags )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ DWORD dwDocHostFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_DocHostFlags)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocHostFlags )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ DWORD *pdwDocHostFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_DocHostDoubleClickFlags)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DocHostDoubleClickFlags )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ DWORD dwDocHostDoubleClickFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_DocHostDoubleClickFlags)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocHostDoubleClickFlags )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ DWORD *pdwDocHostDoubleClickFlags);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_AllowContextMenu)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowContextMenu )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ VARIANT_BOOL bAllowContextMenu);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_AllowContextMenu)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowContextMenu )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbAllowContextMenu);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_AllowShowUI)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowShowUI )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ VARIANT_BOOL bAllowShowUI);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_AllowShowUI)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowShowUI )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ VARIANT_BOOL *pbAllowShowUI);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, put_OptionKeyPath)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OptionKeyPath )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ BSTR bstrOptionKeyPath);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatch, get_OptionKeyPath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OptionKeyPath )( 
            IAxWinAmbientDispatchEx * This,
            /* [retval][out] */ BSTR *pbstrOptionKeyPath);
        
        DECLSPEC_XFGVIRT(IAxWinAmbientDispatchEx, SetAmbientDispatch)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetAmbientDispatch )( 
            IAxWinAmbientDispatchEx * This,
            /* [in] */ IDispatch *pDispatch);
        
        END_INTERFACE
    } IAxWinAmbientDispatchExVtbl;

    interface IAxWinAmbientDispatchEx
    {
        CONST_VTBL struct IAxWinAmbientDispatchExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxWinAmbientDispatchEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxWinAmbientDispatchEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxWinAmbientDispatchEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxWinAmbientDispatchEx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAxWinAmbientDispatchEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAxWinAmbientDispatchEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAxWinAmbientDispatchEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAxWinAmbientDispatchEx_put_AllowWindowlessActivation(This,bCanWindowlessActivate)	\
    ( (This)->lpVtbl -> put_AllowWindowlessActivation(This,bCanWindowlessActivate) ) 

#define IAxWinAmbientDispatchEx_get_AllowWindowlessActivation(This,pbCanWindowlessActivate)	\
    ( (This)->lpVtbl -> get_AllowWindowlessActivation(This,pbCanWindowlessActivate) ) 

#define IAxWinAmbientDispatchEx_put_BackColor(This,clrBackground)	\
    ( (This)->lpVtbl -> put_BackColor(This,clrBackground) ) 

#define IAxWinAmbientDispatchEx_get_BackColor(This,pclrBackground)	\
    ( (This)->lpVtbl -> get_BackColor(This,pclrBackground) ) 

#define IAxWinAmbientDispatchEx_put_ForeColor(This,clrForeground)	\
    ( (This)->lpVtbl -> put_ForeColor(This,clrForeground) ) 

#define IAxWinAmbientDispatchEx_get_ForeColor(This,pclrForeground)	\
    ( (This)->lpVtbl -> get_ForeColor(This,pclrForeground) ) 

#define IAxWinAmbientDispatchEx_put_LocaleID(This,lcidLocaleID)	\
    ( (This)->lpVtbl -> put_LocaleID(This,lcidLocaleID) ) 

#define IAxWinAmbientDispatchEx_get_LocaleID(This,plcidLocaleID)	\
    ( (This)->lpVtbl -> get_LocaleID(This,plcidLocaleID) ) 

#define IAxWinAmbientDispatchEx_put_UserMode(This,bUserMode)	\
    ( (This)->lpVtbl -> put_UserMode(This,bUserMode) ) 

#define IAxWinAmbientDispatchEx_get_UserMode(This,pbUserMode)	\
    ( (This)->lpVtbl -> get_UserMode(This,pbUserMode) ) 

#define IAxWinAmbientDispatchEx_put_DisplayAsDefault(This,bDisplayAsDefault)	\
    ( (This)->lpVtbl -> put_DisplayAsDefault(This,bDisplayAsDefault) ) 

#define IAxWinAmbientDispatchEx_get_DisplayAsDefault(This,pbDisplayAsDefault)	\
    ( (This)->lpVtbl -> get_DisplayAsDefault(This,pbDisplayAsDefault) ) 

#define IAxWinAmbientDispatchEx_put_Font(This,pFont)	\
    ( (This)->lpVtbl -> put_Font(This,pFont) ) 

#define IAxWinAmbientDispatchEx_get_Font(This,pFont)	\
    ( (This)->lpVtbl -> get_Font(This,pFont) ) 

#define IAxWinAmbientDispatchEx_put_MessageReflect(This,bMsgReflect)	\
    ( (This)->lpVtbl -> put_MessageReflect(This,bMsgReflect) ) 

#define IAxWinAmbientDispatchEx_get_MessageReflect(This,pbMsgReflect)	\
    ( (This)->lpVtbl -> get_MessageReflect(This,pbMsgReflect) ) 

#define IAxWinAmbientDispatchEx_get_ShowGrabHandles(This,pbShowGrabHandles)	\
    ( (This)->lpVtbl -> get_ShowGrabHandles(This,pbShowGrabHandles) ) 

#define IAxWinAmbientDispatchEx_get_ShowHatching(This,pbShowHatching)	\
    ( (This)->lpVtbl -> get_ShowHatching(This,pbShowHatching) ) 

#define IAxWinAmbientDispatchEx_put_DocHostFlags(This,dwDocHostFlags)	\
    ( (This)->lpVtbl -> put_DocHostFlags(This,dwDocHostFlags) ) 

#define IAxWinAmbientDispatchEx_get_DocHostFlags(This,pdwDocHostFlags)	\
    ( (This)->lpVtbl -> get_DocHostFlags(This,pdwDocHostFlags) ) 

#define IAxWinAmbientDispatchEx_put_DocHostDoubleClickFlags(This,dwDocHostDoubleClickFlags)	\
    ( (This)->lpVtbl -> put_DocHostDoubleClickFlags(This,dwDocHostDoubleClickFlags) ) 

#define IAxWinAmbientDispatchEx_get_DocHostDoubleClickFlags(This,pdwDocHostDoubleClickFlags)	\
    ( (This)->lpVtbl -> get_DocHostDoubleClickFlags(This,pdwDocHostDoubleClickFlags) ) 

#define IAxWinAmbientDispatchEx_put_AllowContextMenu(This,bAllowContextMenu)	\
    ( (This)->lpVtbl -> put_AllowContextMenu(This,bAllowContextMenu) ) 

#define IAxWinAmbientDispatchEx_get_AllowContextMenu(This,pbAllowContextMenu)	\
    ( (This)->lpVtbl -> get_AllowContextMenu(This,pbAllowContextMenu) ) 

#define IAxWinAmbientDispatchEx_put_AllowShowUI(This,bAllowShowUI)	\
    ( (This)->lpVtbl -> put_AllowShowUI(This,bAllowShowUI) ) 

#define IAxWinAmbientDispatchEx_get_AllowShowUI(This,pbAllowShowUI)	\
    ( (This)->lpVtbl -> get_AllowShowUI(This,pbAllowShowUI) ) 

#define IAxWinAmbientDispatchEx_put_OptionKeyPath(This,bstrOptionKeyPath)	\
    ( (This)->lpVtbl -> put_OptionKeyPath(This,bstrOptionKeyPath) ) 

#define IAxWinAmbientDispatchEx_get_OptionKeyPath(This,pbstrOptionKeyPath)	\
    ( (This)->lpVtbl -> get_OptionKeyPath(This,pbstrOptionKeyPath) ) 


#define IAxWinAmbientDispatchEx_SetAmbientDispatch(This,pDispatch)	\
    ( (This)->lpVtbl -> SetAmbientDispatch(This,pDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxWinAmbientDispatchEx_INTERFACE_DEFINED__ */


#ifndef __IInternalConnection_INTERFACE_DEFINED__
#define __IInternalConnection_INTERFACE_DEFINED__

/* interface IInternalConnection */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IInternalConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72AD0770-6A9F-11d1-BCEC-0060088F444E")
    IInternalConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddConnection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseConnection( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInternalConnectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInternalConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInternalConnection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInternalConnection * This);
        
        DECLSPEC_XFGVIRT(IInternalConnection, AddConnection)
        HRESULT ( STDMETHODCALLTYPE *AddConnection )( 
            IInternalConnection * This);
        
        DECLSPEC_XFGVIRT(IInternalConnection, ReleaseConnection)
        HRESULT ( STDMETHODCALLTYPE *ReleaseConnection )( 
            IInternalConnection * This);
        
        END_INTERFACE
    } IInternalConnectionVtbl;

    interface IInternalConnection
    {
        CONST_VTBL struct IInternalConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInternalConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInternalConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInternalConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInternalConnection_AddConnection(This)	\
    ( (This)->lpVtbl -> AddConnection(This) ) 

#define IInternalConnection_ReleaseConnection(This)	\
    ( (This)->lpVtbl -> ReleaseConnection(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInternalConnection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_atliface_0000_0008 */
/* [local] */ 

namespace ATL
{
#ifdef __cplusplus
#include <atldef.h>
#else
#define ATLAPI EXTERN_C HRESULT __declspec(dllimport) __stdcall
#define ATLAPI_(x) EXTERN_C __declspec(dllimport) x __stdcall
#define ATLINLINE
#endif	// __cplusplus

ATLAPI_(INT_PTR) AtlAxDialogBoxW(HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogProc, LPARAM dwInitParam);
ATLAPI_(INT_PTR) AtlAxDialogBoxA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogProc, LPARAM dwInitParam);
#ifdef UNICODE
#define AtlAxDialogBox AtlAxDialogBoxW
#else
#define AtlAxDialogBox AtlAxDialogBoxA
#endif

ATLAPI_(HWND) AtlAxCreateDialogW(HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogProc, LPARAM dwInitParam);
ATLAPI_(HWND) AtlAxCreateDialogA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogProc, LPARAM dwInitParam);
#ifdef UNICODE
#define AtlAxCreateDialog AtlAxCreateDialogW
#else
#define AtlAxCreateDialog AtlAxCreateDialogA
#endif

ATLAPI AtlAxCreateControl(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, IUnknown** ppUnkContainer);
#ifdef __cplusplus
ATLAPI AtlAxCreateControlEx(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, 
		IUnknown** ppUnkContainer, IUnknown** ppUnkControl, 
		REFIID iidSink=IID_NULL, IUnknown* punkSink=NULL);
ATLAPI AtlAxCreateControlLic(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, IUnknown** ppUnkContainer, BSTR bstrLic = NULL);
ATLAPI AtlAxCreateControlLicEx(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, 
		IUnknown** ppUnkContainer, IUnknown** ppUnkControl, 
		REFIID iidSink=IID_NULL, IUnknown* punkSink=NULL, BSTR bstrLic = NULL);
#else
ATLAPI AtlAxCreateControlEx(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, 
		IUnknown** ppUnkContainer, IUnknown** ppUnkControl, 
		REFIID iidSink, IUnknown* punkSink);
ATLAPI AtlAxCreateControlLic(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, IUnknown** ppUnkContainer, BSTR bstrLic);
ATLAPI AtlAxCreateControlLicEx(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, 
		IUnknown** ppUnkContainer, IUnknown** ppUnkControl, 
		REFIID iidSink, IUnknown* punkSink, BSTR bstrLic);
#endif	// __cplusplus
ATLAPI AtlAxAttachControl(IUnknown* pControl, HWND hWnd, IUnknown** ppUnkContainer);
ATLAPI_(BOOL) AtlAxWinInit();

ATLAPI AtlAxGetHost(HWND h, IUnknown** pp);
ATLAPI AtlAxGetControl(HWND h, IUnknown** pp);

}; //namespace ATL



extern RPC_IF_HANDLE __MIDL_itf_atliface_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_atliface_0000_0008_v0_0_s_ifspec;

#ifndef __IAccessibleProxy_INTERFACE_DEFINED__
#define __IAccessibleProxy_INTERFACE_DEFINED__

/* interface IAccessibleProxy */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAccessibleProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7A7D9DCF-B7A1-4019-9031-258268846980")
    IAccessibleProxy : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetServer( 
            /* [in] */ IAccessible *pAccessible,
            /* [in] */ IAccessibleServer *pServer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAccessibleProxyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAccessibleProxy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAccessibleProxy * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAccessibleProxy * This);
        
        DECLSPEC_XFGVIRT(IAccessibleProxy, SetServer)
        HRESULT ( STDMETHODCALLTYPE *SetServer )( 
            IAccessibleProxy * This,
            /* [in] */ IAccessible *pAccessible,
            /* [in] */ IAccessibleServer *pServer);
        
        END_INTERFACE
    } IAccessibleProxyVtbl;

    interface IAccessibleProxy
    {
        CONST_VTBL struct IAccessibleProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAccessibleProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAccessibleProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAccessibleProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAccessibleProxy_SetServer(This,pAccessible,pServer)	\
    ( (This)->lpVtbl -> SetServer(This,pAccessible,pServer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAccessibleProxy_INTERFACE_DEFINED__ */


#ifndef __IAccessibleServer_INTERFACE_DEFINED__
#define __IAccessibleServer_INTERFACE_DEFINED__

/* interface IAccessibleServer */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAccessibleServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52C8FB5E-D779-4e77-AE9F-F611FA7E9D7A")
    IAccessibleServer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProxy( 
            /* [in] */ IAccessibleProxy *pUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHWND( 
            /* [out] */ HWND *phWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumVariant( 
            /* [out] */ IEnumVARIANT **ppEnumVariant) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAccessibleServerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAccessibleServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAccessibleServer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAccessibleServer * This);
        
        DECLSPEC_XFGVIRT(IAccessibleServer, SetProxy)
        HRESULT ( STDMETHODCALLTYPE *SetProxy )( 
            IAccessibleServer * This,
            /* [in] */ IAccessibleProxy *pUnknown);
        
        DECLSPEC_XFGVIRT(IAccessibleServer, GetHWND)
        HRESULT ( STDMETHODCALLTYPE *GetHWND )( 
            IAccessibleServer * This,
            /* [out] */ HWND *phWnd);
        
        DECLSPEC_XFGVIRT(IAccessibleServer, GetEnumVariant)
        HRESULT ( STDMETHODCALLTYPE *GetEnumVariant )( 
            IAccessibleServer * This,
            /* [out] */ IEnumVARIANT **ppEnumVariant);
        
        END_INTERFACE
    } IAccessibleServerVtbl;

    interface IAccessibleServer
    {
        CONST_VTBL struct IAccessibleServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAccessibleServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAccessibleServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAccessibleServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAccessibleServer_SetProxy(This,pUnknown)	\
    ( (This)->lpVtbl -> SetProxy(This,pUnknown) ) 

#define IAccessibleServer_GetHWND(This,phWnd)	\
    ( (This)->lpVtbl -> GetHWND(This,phWnd) ) 

#define IAccessibleServer_GetEnumVariant(This,ppEnumVariant)	\
    ( (This)->lpVtbl -> GetEnumVariant(This,ppEnumVariant) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAccessibleServer_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


