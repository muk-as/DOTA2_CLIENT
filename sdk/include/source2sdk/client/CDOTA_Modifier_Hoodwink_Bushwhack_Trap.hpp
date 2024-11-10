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
    class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public client::CDOTA_Buff
    {
    public:
        int32_t visual_height; // 0x1708        
        float animation_rate; // 0x170c        
        client::ParticleIndex_t m_nFXIndex; // 0x1710        
        bool m_bPullComplete; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        uint32_t m_TreeId; // 0x1718        
        float m_flDamagePerTick; // 0x171c        
        int32_t m_nDamageTicks; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1728);
};
