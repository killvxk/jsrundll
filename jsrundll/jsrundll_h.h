

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jan 16 22:24:41 2014
 */
/* Compiler settings for jsrundll.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __jsrundll_h_h__
#define __jsrundll_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IObjectDebug_FWD_DEFINED__
#define __IObjectDebug_FWD_DEFINED__
typedef interface IObjectDebug IObjectDebug;

#endif 	/* __IObjectDebug_FWD_DEFINED__ */


#ifndef __IObjectMs_FWD_DEFINED__
#define __IObjectMs_FWD_DEFINED__
typedef interface IObjectMs IObjectMs;

#endif 	/* __IObjectMs_FWD_DEFINED__ */


#ifndef __IObjectDebug_FWD_DEFINED__
#define __IObjectDebug_FWD_DEFINED__
typedef interface IObjectDebug IObjectDebug;

#endif 	/* __IObjectDebug_FWD_DEFINED__ */


#ifndef __IObjectMs_FWD_DEFINED__
#define __IObjectMs_FWD_DEFINED__
typedef interface IObjectMs IObjectMs;

#endif 	/* __IObjectMs_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IObjectDebug_INTERFACE_DEFINED__
#define __IObjectDebug_INTERFACE_DEFINED__

/* interface IObjectDebug */
/* [helpstring][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjectDebug;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5E7D07E-C72B-4BAC-B151-04C26E19FFB7")
    IObjectDebug : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE alert( 
            /* [in] */ VARIANT txt) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE print( 
            /* [in] */ VARIANT txt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectDebugVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectDebug * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectDebug * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectDebug * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObjectDebug * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObjectDebug * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObjectDebug * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectDebug * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *alert )( 
            IObjectDebug * This,
            /* [in] */ VARIANT txt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *print )( 
            IObjectDebug * This,
            /* [in] */ VARIANT txt);
        
        END_INTERFACE
    } IObjectDebugVtbl;

    interface IObjectDebug
    {
        CONST_VTBL struct IObjectDebugVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectDebug_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectDebug_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectDebug_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectDebug_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectDebug_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectDebug_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectDebug_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectDebug_alert(This,txt)	\
    ( (This)->lpVtbl -> alert(This,txt) ) 

#define IObjectDebug_print(This,txt)	\
    ( (This)->lpVtbl -> print(This,txt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectDebug_INTERFACE_DEFINED__ */


#ifndef __IObjectMs_INTERFACE_DEFINED__
#define __IObjectMs_INTERFACE_DEFINED__

/* interface IObjectMs */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjectMs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3119CFD4-2AA6-4E5A-8A37-E026AAE142D0")
    IObjectMs : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XMLHttpRequest( 
            /* [retval][out] */ VARIANT *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XMLDOMDocument( 
            /* [retval][out] */ VARIANT *v) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Guid( 
            /* [retval][out] */ VARIANT *guid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectMsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectMs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectMs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectMs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObjectMs * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObjectMs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObjectMs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectMs * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XMLHttpRequest )( 
            IObjectMs * This,
            /* [retval][out] */ VARIANT *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XMLDOMDocument )( 
            IObjectMs * This,
            /* [retval][out] */ VARIANT *v);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Guid )( 
            IObjectMs * This,
            /* [retval][out] */ VARIANT *guid);
        
        END_INTERFACE
    } IObjectMsVtbl;

    interface IObjectMs
    {
        CONST_VTBL struct IObjectMsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectMs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectMs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectMs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectMs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectMs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectMs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectMs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectMs_XMLHttpRequest(This,v)	\
    ( (This)->lpVtbl -> XMLHttpRequest(This,v) ) 

#define IObjectMs_XMLDOMDocument(This,v)	\
    ( (This)->lpVtbl -> XMLDOMDocument(This,v) ) 

#define IObjectMs_Guid(This,guid)	\
    ( (This)->lpVtbl -> Guid(This,guid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectMs_INTERFACE_DEFINED__ */



#ifndef __BrokerServer_LIBRARY_DEFINED__
#define __BrokerServer_LIBRARY_DEFINED__

/* library BrokerServer */
/* [uuid] */ 




EXTERN_C const IID LIBID_BrokerServer;
#endif /* __BrokerServer_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


