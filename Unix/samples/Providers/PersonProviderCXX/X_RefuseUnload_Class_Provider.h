/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

/* @migen@ */
#ifndef _X_RefuseUnload_Class_Provider_h
#define _X_RefuseUnload_Class_Provider_h

#include "X_RefuseUnload.h"
#ifdef __cplusplus
# include <micxx/micxx.h>
# include "module.h"

MI_BEGIN_NAMESPACE

/*
**==============================================================================
**
** X_RefuseUnload provider class declaration
**
**==============================================================================
*/

class X_RefuseUnload_Class_Provider
{
/* @MIGEN.BEGIN@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
private:
    Module* m_Module;
    Module* GetModule( void ) { return m_Module; };

public:
    X_RefuseUnload_Class_Provider(
        Module* module);

    ~X_RefuseUnload_Class_Provider();

    void Load(
        Context& context);

    void Unload(
        Context& context);

    void EnumerateInstances(
        Context& context,
        const String& nameSpace,
        const PropertySet& propertySet,
        bool keysOnly,
        const MI_Filter* filter);

    void GetInstance(
        Context& context,
        const String& nameSpace,
        const X_RefuseUnload_Class& instance,
        const PropertySet& propertySet);

    void CreateInstance(
        Context& context,
        const String& nameSpace,
        const X_RefuseUnload_Class& newInstance);

    void ModifyInstance(
        Context& context,
        const String& nameSpace,
        const X_RefuseUnload_Class& modifiedInstance,
        const PropertySet& propertySet);

    void DeleteInstance(
        Context& context,
        const String& nameSpace,
        const X_RefuseUnload_Class& instance);

    void Invoke_RequestUnload(
        Context& context,
        const String& nameSpace,
        const X_RefuseUnload_Class& instance,
        const X_RefuseUnload_RequestUnload_Class& in);

/* @MIGEN.END@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
};

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _X_RefuseUnload_Class_Provider_h */

