#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xd8
    // Has VTable
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CRenderComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x38[0x18]; // 0x38
        bool m_bIsRenderingWithViewModels; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        uint32_t m_nSplitscreenFlags; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x58[0x8]; // 0x58
        bool m_bEnableRendering; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x61[0x4f]; // 0x61
        bool m_bInterpolationReadyToDraw; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb1[0x27];
        
        // Static fields:
        static entity2::EntComponentInfo_t &Get_s_EntComponentInfo() {return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRenderComponent because it is not a standard-layout class
    static_assert(sizeof(CRenderComponent) == 0xd8);
};
