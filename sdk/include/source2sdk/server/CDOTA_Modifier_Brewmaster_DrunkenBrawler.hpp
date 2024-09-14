#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Brewmaster_DrunkenBrawler : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        client::ParticleIndex_t m_nFXIndexB; // 0x16ec        
        int32_t min_movement; // 0x16f0        
        int32_t max_movement; // 0x16f4        
        int32_t m_iMovementBonus; // 0x16f8        
        entity2::GameTime_t m_flNextUpdateTime; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Brewmaster_DrunkenBrawler) == 0x1700);
};
