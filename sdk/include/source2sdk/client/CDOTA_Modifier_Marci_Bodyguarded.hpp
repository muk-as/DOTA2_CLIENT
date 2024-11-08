#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Bodyguarded : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFxIndex; // 0x1708        
        int32_t bodyguard_attack_range_buffer; // 0x170c        
        int32_t bonus_armor; // 0x1710        
        float counter_cooldown; // 0x1714        
        entity2::GameTime_t m_flLastCounterTime; // 0x1718        
        bool bHasCountered; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguarded because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Bodyguarded) == 0x1720);
};
