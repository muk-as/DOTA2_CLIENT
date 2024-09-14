#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Skywrath_Mage_Arcane_Bolt : public server::CDOTABaseAbility
    {
    public:
        int32_t bolt_vision; // 0x5a0        
        float vision_duration; // 0x5a4        
        float m_flDamage; // 0x5a8        
        int32_t m_nFXIndex; // 0x5ac        
        [[maybe_unused]] std::uint8_t pad_0x5b0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Skywrath_Mage_Arcane_Bolt because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Skywrath_Mage_Arcane_Bolt) == 0x5b8);
};
