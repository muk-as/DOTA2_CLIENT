#pragma once
#include "source2sdk/client/CBaseAnimGraphController.hpp"
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
    // Size: 0x840
    // Has VTable
    // Construct disallowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CBaseAnimGraphController m_animationController"
    #pragma pack(push, 1)
    class CBodyComponentBaseAnimGraph : public client::CBodyComponentSkeletonInstance
    {
    public:
        // metadata: MNetworkEnable
        client::CBaseAnimGraphController m_animationController; // 0x470        
        [[maybe_unused]] std::uint8_t pad_0x838[0x8];
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentBaseAnimGraph) == 0x840);
};
