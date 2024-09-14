#pragma once
#include "source2sdk/entity2/EntComponentInfo_t.hpp"
#include "source2sdk/server/CBaseAnimatingOverlayController.hpp"
#include "source2sdk/server/CBodyComponentSkeletonInstance.hpp"
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
    // Size: 0x990
    // Has VTable
    // Construct disallowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CBaseAnimatingOverlayController m_animationController"
    #pragma pack(push, 1)
    class CBodyComponentBaseAnimatingOverlay : public server::CBodyComponentSkeletonInstance
    {
    public:
        // metadata: MNetworkEnable
        server::CBaseAnimatingOverlayController m_animationController; // 0x470        
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimatingOverlay")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentBaseAnimatingOverlay")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentBaseAnimatingOverlay because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentBaseAnimatingOverlay) == 0x990);
};
