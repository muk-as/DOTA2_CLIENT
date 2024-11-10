#pragma once
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
#include "source2sdk/server/CBodyComponent.hpp"
#include "source2sdk/server/CSkeletonInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x4d0
    // Has VTable
    // Construct disallowed
    // 
    // static metadata: MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
    #pragma pack(push, 1)
    class CBodyComponentSkeletonInstance : public server::CBodyComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x78[0x8]; // 0x78
        // metadata: MNetworkEnable
        server::CSkeletonInstance m_skeletonInstance; // 0x80        
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentSkeletonInstance because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentSkeletonInstance) == 0x4d0);
};
