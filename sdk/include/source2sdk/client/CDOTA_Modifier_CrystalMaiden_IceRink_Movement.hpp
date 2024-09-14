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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_CrystalMaiden_IceRink_Movement : public client::CDOTA_Buff
    {
    public:
        bool m_bHitFirstUpdate; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        float flMovementSpeed; // 0x16ec        
        float m_flTurnBoostProgress; // 0x16f0        
        float m_flFacingTarget; // 0x16f4        
        client::ParticleIndex_t m_nFXIndex; // 0x16f8        
        entity2::GameTime_t m_flHitEndTime; // 0x16fc        
        float hit_recover_time; // 0x1700        
        Vector m_vDirection; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_IceRink_Movement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CrystalMaiden_IceRink_Movement) == 0x1710);
};
