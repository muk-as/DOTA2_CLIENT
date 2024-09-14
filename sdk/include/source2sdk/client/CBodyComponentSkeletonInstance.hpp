#pragma once
#include "source2sdk/client/CBodyComponent.hpp"
#include "source2sdk/client/CSkeletonInstance.hpp"
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
    // 
    // static metadata: MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
    #pragma pack(push, 1)
    class CBodyComponentSkeletonInstance : public client::CBodyComponent
    {
    public:
        // metadata: MNetworkEnable
        client::CSkeletonInstance m_skeletonInstance; // 0x50        
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentSkeletonInstance because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentSkeletonInstance) == 0x470);
};
