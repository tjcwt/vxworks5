/* opccomn_ps.cpp generated by WIDL Version 2.2.1 on 06-Dec-01 at 11:55:06 AM */

#define __WIDL_PROXY_STUB 0x0200
#include "dcomProxy.h"
#include "opccomn.h"
#include <string.h>

extern "C" int include_opccomn () {return 0;}

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

NdrTypeDesc StructDesc__GUID(NDRTYPES&);

HRESULT STDMETHODCALLTYPE IOPCShutdown_ShutdownRequest_vxproxy (IOPCShutdown* pThis, LPCWSTR szReason)
    {
    RPC_PROXY_MSG	msg (IID_IOPCShutdown, RpcMode::OBJECT, 3, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&szReason, pms, ndrtypes.refptr_t(ndrtypes.wstring_t ())); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCShutdown_ShutdownRequest_vxstub (IOPCShutdown* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    LPCWSTR szReason;
    hr=widlUnmarshal (&szReason, pus, ndrtypes.refptr_t(ndrtypes.wstring_t ())); if (FAILED(hr)) return hr;
    hrMethod = pitf->ShutdownRequest (szReason);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

COM_VTABLE(IOPCShutdown) IOPCShutdown_vxproxy_vtbl = {
    COM_VTBL_HEADER
    COM_VTBL_METHOD(&IUnknown_QueryInterface_vxproxy),
    COM_VTBL_METHOD(&IUnknown_AddRef_vxproxy),
    COM_VTBL_METHOD(&IUnknown_Release_vxproxy),
    COM_VTBL_METHOD(&IOPCShutdown_ShutdownRequest_vxproxy),
    };

const PFN_ORPC_STUB stub_functbl_IOPCShutdown [] =
    {
    0,0,0,
    (PFN_ORPC_STUB) IOPCShutdown_ShutdownRequest_vxstub,
    };

EXTERN_C const VXDCOM_STUB_DISPTBL IOPCShutdown_vxstub_disptbl =
    {
    4,
    stub_functbl_IOPCShutdown
    };

VXDCOM_PS_AUTOREGISTER(IOPCShutdown);

HRESULT STDMETHODCALLTYPE IOPCCommon_SetLocaleID_vxproxy (IOPCCommon* pThis, LCID dwLcid)
    {
    RPC_PROXY_MSG	msg (IID_IOPCCommon, RpcMode::OBJECT, 3, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&dwLcid, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_SetLocaleID_vxstub (IOPCCommon* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    LCID dwLcid;
    hr=widlUnmarshal (&dwLcid, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hrMethod = pitf->SetLocaleID (dwLcid);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_GetLocaleID_vxproxy (IOPCCommon* pThis, LCID* pdwLcid)
    {
    RPC_PROXY_MSG	msg (IID_IOPCCommon, RpcMode::OBJECT, 4, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&pdwLcid, pus, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_GetLocaleID_vxstub (IOPCCommon* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    LCID pdwLcid_tmp;
    LCID* pdwLcid = &pdwLcid_tmp;
    hrMethod = pitf->GetLocaleID (pdwLcid);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&pdwLcid, pms, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_QueryAvailableLocaleIDs_vxproxy (IOPCCommon* pThis, DWORD* pdwCount, LCID** pdwLcid)
    {
    RPC_PROXY_MSG	msg (IID_IOPCCommon, RpcMode::OBJECT, 5, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&pdwCount, pus, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr=widlUnmarshal (&pdwLcid, pus, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.carray_t(ndrtypes.ulong_t (), NDR_SIZEOF(LCID))))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_QueryAvailableLocaleIDs_vxstub (IOPCCommon* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    DWORD pdwCount_tmp;
    DWORD* pdwCount = &pdwCount_tmp;
    LCID* pdwLcid_tmp;
    LCID** pdwLcid = &pdwLcid_tmp;
    hrMethod = pitf->QueryAvailableLocaleIDs (pdwCount, pdwLcid);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&pdwCount, pms, ndrtypes.refptr_t(ndrtypes.ulong_t ())); if (FAILED(hr)) return hr;
    hr=widlMarshal (&pdwLcid, pms, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.carray_t(ndrtypes.ulong_t (), NDR_SIZEOF(LCID), *pdwCount)))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    if ((*pdwLcid)) {CoTaskMemFree ((*pdwLcid));};
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_GetErrorString_vxproxy (IOPCCommon* pThis, HRESULT dwError, LPWSTR* ppString)
    {
    RPC_PROXY_MSG	msg (IID_IOPCCommon, RpcMode::OBJECT, 6, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&dwError, pms, ndrtypes.long_t ()); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&ppString, pus, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_GetErrorString_vxstub (IOPCCommon* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    HRESULT dwError;
    hr=widlUnmarshal (&dwError, pus, ndrtypes.long_t ()); if (FAILED(hr)) return hr;
    LPWSTR ppString_tmp;
    LPWSTR* ppString = &ppString_tmp;
    hrMethod = pitf->GetErrorString (dwError, ppString);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&ppString, pms, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    if ((*ppString)) {CoTaskMemFree ((*ppString));};
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_SetClientName_vxproxy (IOPCCommon* pThis, LPCWSTR szName)
    {
    RPC_PROXY_MSG	msg (IID_IOPCCommon, RpcMode::OBJECT, 7, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&szName, pms, ndrtypes.refptr_t(ndrtypes.wstring_t ())); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCCommon_SetClientName_vxstub (IOPCCommon* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    LPCWSTR szName;
    hr=widlUnmarshal (&szName, pus, ndrtypes.refptr_t(ndrtypes.wstring_t ())); if (FAILED(hr)) return hr;
    hrMethod = pitf->SetClientName (szName);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

COM_VTABLE(IOPCCommon) IOPCCommon_vxproxy_vtbl = {
    COM_VTBL_HEADER
    COM_VTBL_METHOD(&IUnknown_QueryInterface_vxproxy),
    COM_VTBL_METHOD(&IUnknown_AddRef_vxproxy),
    COM_VTBL_METHOD(&IUnknown_Release_vxproxy),
    COM_VTBL_METHOD(&IOPCCommon_SetLocaleID_vxproxy),
    COM_VTBL_METHOD(&IOPCCommon_GetLocaleID_vxproxy),
    COM_VTBL_METHOD(&IOPCCommon_QueryAvailableLocaleIDs_vxproxy),
    COM_VTBL_METHOD(&IOPCCommon_GetErrorString_vxproxy),
    COM_VTBL_METHOD(&IOPCCommon_SetClientName_vxproxy),
    };

const PFN_ORPC_STUB stub_functbl_IOPCCommon [] =
    {
    0,0,0,
    (PFN_ORPC_STUB) IOPCCommon_SetLocaleID_vxstub,
    (PFN_ORPC_STUB) IOPCCommon_GetLocaleID_vxstub,
    (PFN_ORPC_STUB) IOPCCommon_QueryAvailableLocaleIDs_vxstub,
    (PFN_ORPC_STUB) IOPCCommon_GetErrorString_vxstub,
    (PFN_ORPC_STUB) IOPCCommon_SetClientName_vxstub,
    };

EXTERN_C const VXDCOM_STUB_DISPTBL IOPCCommon_vxstub_disptbl =
    {
    8,
    stub_functbl_IOPCCommon
    };

VXDCOM_PS_AUTOREGISTER(IOPCCommon);

HRESULT STDMETHODCALLTYPE IOPCServerList_EnumClassesOfCategories_vxproxy (IOPCServerList* pThis, ULONG cImplemented, CATID* rgcatidImpl, ULONG cRequired, CATID* rgcatidReq, IEnumGUID** ppenumClsid)
    {
    RPC_PROXY_MSG	msg (IID_IOPCServerList, RpcMode::OBJECT, 3, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&cImplemented, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr=widlMarshal (&rgcatidImpl, pms, ndrtypes.refptr_t(ndrtypes.carray_t(StructDesc__GUID (ndrtypes), NDR_SIZEOF(CATID), cImplemented))); if (FAILED(hr)) return hr;
    hr=widlMarshal (&cRequired, pms, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    hr=widlMarshal (&rgcatidReq, pms, ndrtypes.refptr_t(ndrtypes.carray_t(StructDesc__GUID (ndrtypes), NDR_SIZEOF(CATID), cRequired))); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&ppenumClsid, pus, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumGUID))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCServerList_EnumClassesOfCategories_vxstub (IOPCServerList* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    ULONG cImplemented;
    hr=widlUnmarshal (&cImplemented, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    CATID* rgcatidImpl;
    hr=widlUnmarshal (&rgcatidImpl, pus, ndrtypes.refptr_t(ndrtypes.carray_t(StructDesc__GUID (ndrtypes), NDR_SIZEOF(CATID)))); if (FAILED(hr)) return hr;
    ULONG cRequired;
    hr=widlUnmarshal (&cRequired, pus, ndrtypes.ulong_t ()); if (FAILED(hr)) return hr;
    CATID* rgcatidReq;
    hr=widlUnmarshal (&rgcatidReq, pus, ndrtypes.refptr_t(ndrtypes.carray_t(StructDesc__GUID (ndrtypes), NDR_SIZEOF(CATID)))); if (FAILED(hr)) return hr;
    IEnumGUID* ppenumClsid_tmp = 0;
    IEnumGUID** ppenumClsid = &ppenumClsid_tmp;
    hrMethod = pitf->EnumClassesOfCategories (cImplemented, rgcatidImpl, cRequired, rgcatidReq, ppenumClsid);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&ppenumClsid, pms, ndrtypes.refptr_t(ndrtypes.interfaceptr_t (IID_IEnumGUID))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    if ((*ppenumClsid)) {((*ppenumClsid))->Release ();};
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IOPCServerList_GetClassDetails_vxproxy (IOPCServerList* pThis, REFCLSID clsid, LPOLESTR* ppszProgID, LPOLESTR* ppszUserType)
    {
    RPC_PROXY_MSG	msg (IID_IOPCServerList, RpcMode::OBJECT, 4, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&clsid, pms, StructDesc__GUID (ndrtypes)); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&ppszProgID, pus, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()))); if (FAILED(hr)) return hr;
    hr=widlUnmarshal (&ppszUserType, pus, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCServerList_GetClassDetails_vxstub (IOPCServerList* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    CLSID clsid;
    hr=widlUnmarshal (&clsid, pus, StructDesc__GUID (ndrtypes)); if (FAILED(hr)) return hr;
    LPOLESTR ppszProgID_tmp;
    LPOLESTR* ppszProgID = &ppszProgID_tmp;
    LPOLESTR ppszUserType_tmp;
    LPOLESTR* ppszUserType = &ppszUserType_tmp;
    hrMethod = pitf->GetClassDetails (clsid, ppszProgID, ppszUserType);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&ppszProgID, pms, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()))); if (FAILED(hr)) return hr;
    hr=widlMarshal (&ppszUserType, pms, ndrtypes.refptr_t(ndrtypes.pointer_t(ndrtypes.wstring_t ()))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    if ((*ppszProgID)) {CoTaskMemFree ((*ppszProgID));}if ((*ppszUserType)) {CoTaskMemFree ((*ppszUserType));};
    return S_OK;
    }

HRESULT STDMETHODCALLTYPE IOPCServerList_CLSIDFromProgID_vxproxy (IOPCServerList* pThis, LPCOLESTR szProgId, LPCLSID clsid)
    {
    RPC_PROXY_MSG	msg (IID_IOPCServerList, RpcMode::OBJECT, 5, pThis);
    NDRTYPES		ndrtypes;
    HRESULT		hrMethod;
    HRESULT		hr;

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&szProgId, pms, ndrtypes.refptr_t(ndrtypes.wstring_t ())); if (FAILED(hr)) return hr;
    hr = msg.SendReceive (); if (FAILED (hr)) return hr;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    hr=widlUnmarshal (&clsid, pus, ndrtypes.refptr_t(StructDesc__GUID (ndrtypes))); if (FAILED(hr)) return hr;
    hr = widlUnmarshal (&hrMethod, pus, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return hrMethod;
    }

HRESULT STDMETHODCALLTYPE IOPCServerList_CLSIDFromProgID_vxstub (IOPCServerList* pitf, RPC_STUB_MSG& msg)
    {
    NDRTYPES	ndrtypes;
    HRESULT	hr;
    HRESULT	hrMethod;
    NdrUnmarshalStream* pus = msg.unmarshalStreamGet ();
    LPCOLESTR szProgId;
    hr=widlUnmarshal (&szProgId, pus, ndrtypes.refptr_t(ndrtypes.wstring_t ())); if (FAILED(hr)) return hr;
    CLSID clsid_tmp;
    LPCLSID clsid = &clsid_tmp;
    hrMethod = pitf->CLSIDFromProgID (szProgId, clsid);

    NdrMarshalStream* pms = msg.marshalStreamGet ();
    hr=widlMarshal (&clsid, pms, ndrtypes.refptr_t(StructDesc__GUID (ndrtypes))); if (FAILED(hr)) return hr;
    hr = widlMarshal (&hrMethod, pms, ndrtypes.hresult_t());
    if (FAILED(hr))
        return hr;
    return S_OK;
    }

COM_VTABLE(IOPCServerList) IOPCServerList_vxproxy_vtbl = {
    COM_VTBL_HEADER
    COM_VTBL_METHOD(&IUnknown_QueryInterface_vxproxy),
    COM_VTBL_METHOD(&IUnknown_AddRef_vxproxy),
    COM_VTBL_METHOD(&IUnknown_Release_vxproxy),
    COM_VTBL_METHOD(&IOPCServerList_EnumClassesOfCategories_vxproxy),
    COM_VTBL_METHOD(&IOPCServerList_GetClassDetails_vxproxy),
    COM_VTBL_METHOD(&IOPCServerList_CLSIDFromProgID_vxproxy),
    };

const PFN_ORPC_STUB stub_functbl_IOPCServerList [] =
    {
    0,0,0,
    (PFN_ORPC_STUB) IOPCServerList_EnumClassesOfCategories_vxstub,
    (PFN_ORPC_STUB) IOPCServerList_GetClassDetails_vxstub,
    (PFN_ORPC_STUB) IOPCServerList_CLSIDFromProgID_vxstub,
    };

EXTERN_C const VXDCOM_STUB_DISPTBL IOPCServerList_vxstub_disptbl =
    {
    6,
    stub_functbl_IOPCServerList
    };

VXDCOM_PS_AUTOREGISTER(IOPCServerList);



