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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter : public client::CDOTA_Buff
    {
    public:
        int32_t scepter_drag_speed; // 0x1708        
        float scepter_pull_rotate_speed; // 0x170c        
        float aura_origin_x; // 0x1710        
        float aura_origin_y; // 0x1714        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        Vector m_vCenter; // 0x171c        
        entity2::GameTime_t m_flLastThinkTime; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter) == 0x1730);
};
