#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Veil_Of_Discord_Thinker : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        float debuff_radius; // 0x16ec        
        float resist_debuff_duration; // 0x16f0        
        int32_t m_nHeroesHit; // 0x16f4        
        bool m_bHitInvisibleHero; // 0x16f8        
        bool m_bFirstPulse; // 0x16f9        
        [[maybe_unused]] std::uint8_t pad_0x16fa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Veil_Of_Discord_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Veil_Of_Discord_Thinker) == 0x1700);
};
