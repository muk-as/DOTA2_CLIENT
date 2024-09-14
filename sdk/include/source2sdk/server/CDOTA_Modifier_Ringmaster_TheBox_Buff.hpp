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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_TheBox_Buff : public client::CDOTA_Buff
    {
    public:
        int32_t leash_radius; // 0x16e8        
        Vector vLeashLocation; // 0x16ec        
        float transform_time; // 0x16f8        
        float invis_duration; // 0x16fc        
        int32_t radius; // 0x1700        
        int32_t move_speed; // 0x1704        
        int32_t magic_resist; // 0x1708        
        int32_t grant_flying; // 0x170c        
        int32_t grant_debuff_immunity; // 0x1710        
        float slow_resist; // 0x1714        
        float m_flDamageTaken; // 0x1718        
        entity2::GameTime_t m_flCancelTime; // 0x171c        
        client::ParticleIndex_t m_nCircleFXIndex; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_TheBox_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_TheBox_Buff) == 0x1728);
};
