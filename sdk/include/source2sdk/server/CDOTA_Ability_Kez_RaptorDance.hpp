#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Ability_Kez_BaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Kez_RaptorDance : public source2sdk::server::CDOTA_Ability_Kez_BaseAbility
        {
        public:
            float radius; // 0x5c8            
            std::int32_t invulnerable; // 0x5cc            
            std::int32_t strikes; // 0x5d0            
            float strike_interval; // 0x5d4            
            std::int32_t m_nStrikesLeft; // 0x5d8            
            bool m_bChannelFinished; // 0x5dc            
            bool m_bHitAnyTarget; // 0x5dd            
            uint8_t _pad05de[0x2]; // 0x5de
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x5e0            
            source2sdk::client::ParticleIndex_t m_nChannelParticle; // 0x5e4            
            uint8_t _pad05e8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Kez_RaptorDance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Kez_RaptorDance) == 0x600);
    };
};
