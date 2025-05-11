#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Ability_Kez_BaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Kez_RaptorDance : public source2sdk::client::C_DOTA_Ability_Kez_BaseAbility
        {
        public:
            float radius; // 0x5b8            
            std::int32_t invulnerable; // 0x5bc            
            std::int32_t strikes; // 0x5c0            
            float strike_interval; // 0x5c4            
            std::int32_t m_nStrikesLeft; // 0x5c8            
            bool m_bChannelFinished; // 0x5cc            
            bool m_bHitAnyTarget; // 0x5cd            
            uint8_t _pad05ce[0x2]; // 0x5ce
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x5d0            
            source2sdk::client::ParticleIndex_t m_nChannelParticle; // 0x5d4            
            uint8_t _pad05d8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Kez_RaptorDance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Kez_RaptorDance) == 0x5e0);
    };
};
