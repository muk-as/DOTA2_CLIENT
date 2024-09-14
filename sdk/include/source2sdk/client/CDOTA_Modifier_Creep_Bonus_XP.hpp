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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Creep_Bonus_XP : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        int32_t hero_damage_penalty; // 0x16ec        
        int32_t bonus_gold; // 0x16f0        
        int32_t m_iGoldBounty; // 0x16f4        
        client::ParticleIndex_t iBannerEffect; // 0x16f8        
        client::ParticleIndex_t iRingEffect; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Creep_Bonus_XP because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Creep_Bonus_XP) == 0x1700);
};
