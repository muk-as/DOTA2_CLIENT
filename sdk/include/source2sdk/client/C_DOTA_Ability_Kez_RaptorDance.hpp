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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Kez_RaptorDance : public source2sdk::client::C_DOTA_Ability_Kez_BaseAbility
        {
        public:
            float radius; // 0x690            
            std::int32_t invulnerable; // 0x694            
            std::int32_t strikes; // 0x698            
            float strike_interval; // 0x69c            
            std::int32_t m_nStrikesLeft; // 0x6a0            
            bool m_bChannelFinished; // 0x6a4            
            bool m_bHitAnyTarget; // 0x6a5            
            uint8_t _pad06a6[0x2]; // 0x6a6
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x6a8            
            source2sdk::client::ParticleIndex_t m_nChannelParticle; // 0x6ac            
            uint8_t _pad06b0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Kez_RaptorDance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Kez_RaptorDance) == 0x6c8);
    };
};
