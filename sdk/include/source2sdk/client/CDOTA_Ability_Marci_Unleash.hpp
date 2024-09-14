#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Marci_Unleash : public client::C_DOTABaseAbility
    {
    public:
        float duration; // 0x5d8        
        int32_t pulse_radius; // 0x5dc        
        float pulse_debuff_duration; // 0x5e0        
        int32_t pulse_damage; // 0x5e4        
        float pulse_silence_duration; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Marci_Unleash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Marci_Unleash) == 0x5f0);
};
