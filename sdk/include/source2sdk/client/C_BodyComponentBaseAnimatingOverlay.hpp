#pragma once
#include "source2sdk/client/CBodyComponentSkeletonInstance.hpp"
#include "source2sdk/client/C_BaseAnimatingOverlayController.hpp"
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
    // Size: 0xac0
    // Has VTable
    // Construct disallowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CBaseAnimatingOverlayController m_animationController"
    #pragma pack(push, 1)
    class C_BodyComponentBaseAnimatingOverlay : public client::CBodyComponentSkeletonInstance
    {
    public:
        // metadata: MNetworkEnable
        client::C_BaseAnimatingOverlayController m_animationController; // 0x470        
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BodyComponentBaseAnimatingOverlay")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BodyComponentBaseAnimatingOverlay because it is not a standard-layout class
    static_assert(sizeof(C_BodyComponentBaseAnimatingOverlay) == 0xac0);
};
