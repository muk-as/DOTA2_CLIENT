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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_TheBox_Buff : public client::CDOTA_Buff
    {
    public:
        int32_t leash_radius; // 0x1708        
        Vector m_vLeashLocation; // 0x170c        
        float transform_time; // 0x1718        
        float invis_duration; // 0x171c        
        int32_t radius; // 0x1720        
        int32_t move_speed; // 0x1724        
        int32_t magic_resist; // 0x1728        
        int32_t grant_flying; // 0x172c        
        int32_t grant_debuff_immunity; // 0x1730        
        float slow_resist; // 0x1734        
        float m_flDamageTaken; // 0x1738        
        entity2::GameTime_t m_flCancelTime; // 0x173c        
        client::ParticleIndex_t m_nCircleFXIndex; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_TheBox_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_TheBox_Buff) == 0x1748);
};
