#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c00
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV1"
    // static metadata: MNetworkVarNames "Vector m_stolenAbilityColorHSV2"
    // static metadata: MNetworkVarNames "Vector m_stolenAbilityFXColorHSV"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Rubick : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
        Vector m_stolenAbilityColorHSV1; // 0x1b88        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
        Vector m_stolenAbilityColorHSV2; // 0x1b94        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityColorChanged"
        Vector m_stolenAbilityFXColorHSV; // 0x1ba0        
        // metadata: MNetworkDisable
        bool m_bHasInitializedAbilityColors; // 0x1bac        
        [[maybe_unused]] std::uint8_t pad_0x1bad[0x3]; // 0x1bad
        Vector m_startAbilityColorHSV1; // 0x1bb0        
        Vector m_startAbilityColorHSV2; // 0x1bbc        
        Vector m_startAbilityFXColorHSV; // 0x1bc8        
        Vector m_currAbilityColorHSV1; // 0x1bd4        
        Vector m_currAbilityColorHSV2; // 0x1be0        
        Vector m_currAbilityFXColorHSV; // 0x1bec        
        entity2::GameTime_t m_flStartTime; // 0x1bf8        
        [[maybe_unused]] std::uint8_t pad_0x1bfc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Rubick because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Rubick) == 0x1c00);
};
