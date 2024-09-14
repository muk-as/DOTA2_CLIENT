#pragma once
#include "source2sdk/client/CBodyComponentSkeletonInstance.hpp"
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x470
    // Has VTable
    // Construct disallowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBodyComponentBaseModelEntity : public client::CBodyComponentSkeletonInstance
    {
    public:
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->GetStaticFields()[1]->m_pInstance);};
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CBodyComponentBaseModelEntity) == 0x470);
};
