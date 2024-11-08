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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Marci_Unleash : public client::C_DOTABaseAbility
    {
    public:
        float duration; // 0x600        
        int32_t pulse_radius; // 0x604        
        float pulse_debuff_duration; // 0x608        
        int32_t pulse_damage; // 0x60c        
        float pulse_silence_duration; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Marci_Unleash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Marci_Unleash) == 0x618);
};
