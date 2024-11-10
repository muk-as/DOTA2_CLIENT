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
    class CDOTA_Modifier_CrystalMaiden_IceRink_Movement : public client::CDOTA_Buff
    {
    public:
        bool m_bHitFirstUpdate; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float flMovementSpeed; // 0x170c        
        float m_flTurnBoostProgress; // 0x1710        
        float m_flFacingTarget; // 0x1714        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        entity2::GameTime_t m_flHitEndTime; // 0x171c        
        float hit_recover_time; // 0x1720        
        Vector m_vDirection; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_IceRink_Movement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CrystalMaiden_IceRink_Movement) == 0x1730);
};
