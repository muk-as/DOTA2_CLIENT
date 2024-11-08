#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lich_Chain_Frost_Frostbound : public client::CDOTA_Buff
    {
    public:
        float jump_range; // 0x1708        
        int32_t jumps_remaining; // 0x170c        
        int32_t damage_to_heroes; // 0x1710        
        int32_t heroes_killed; // 0x1714        
        bool m_bFoundTarget; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x1720[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Chain_Frost_Frostbound because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lich_Chain_Frost_Frostbound) == 0x1728);
};
