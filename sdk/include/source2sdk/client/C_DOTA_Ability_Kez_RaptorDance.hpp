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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Kez_RaptorDance : public source2sdk::client::C_DOTA_Ability_Kez_BaseAbility
        {
        public:
            float radius; // 0x_            
            std::int32_t invulnerable; // 0x_            
            std::int32_t strikes; // 0x_            
            float strike_interval; // 0x_            
            std::int32_t m_nStrikesLeft; // 0x_            
            bool m_bChannelFinished; // 0x_            
            bool m_bHitAnyTarget; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x_            
            source2sdk::client::ParticleIndex_t m_nChannelParticle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Kez_RaptorDance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Kez_RaptorDance) == 0x_);
    };
};
