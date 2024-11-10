#pragma once
#include "source2sdk/client/C_DOTA_Ability_Kez_BaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Kez_RaptorDance : public client::C_DOTA_Ability_Kez_BaseAbility
    {
    public:
        int32_t radius; // 0x600        
        int32_t invulnerable; // 0x604        
        int32_t strikes; // 0x608        
        float strike_interval; // 0x60c        
        int32_t m_nStrikesLeft; // 0x610        
        bool m_bChannelFinished; // 0x614        
        [[maybe_unused]] std::uint8_t pad_0x615[0x3]; // 0x615
        entity2::GameTime_t m_NextStrikeTime; // 0x618        
        client::ParticleIndex_t m_nChannelParticle; // 0x61c        
        [[maybe_unused]] std::uint8_t pad_0x620[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Kez_RaptorDance because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Kez_RaptorDance) == 0x628);
};
