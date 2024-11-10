#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Ability_Kez_BaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Kez_RaptorDance : public server::CDOTA_Ability_Kez_BaseAbility
    {
    public:
        int32_t radius; // 0x5c8        
        int32_t invulnerable; // 0x5cc        
        int32_t strikes; // 0x5d0        
        float strike_interval; // 0x5d4        
        int32_t m_nStrikesLeft; // 0x5d8        
        bool m_bChannelFinished; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5dd[0x3]; // 0x5dd
        entity2::GameTime_t m_NextStrikeTime; // 0x5e0        
        client::ParticleIndex_t m_nChannelParticle; // 0x5e4        
        [[maybe_unused]] std::uint8_t pad_0x5e8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Kez_RaptorDance because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Kez_RaptorDance) == 0x5f0);
};
