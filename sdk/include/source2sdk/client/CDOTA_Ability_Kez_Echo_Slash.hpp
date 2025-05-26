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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x6f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Kez_Echo_Slash : public source2sdk::client::C_DOTA_Ability_Kez_BaseAbility
        {
        public:
            Vector m_vInitialDirection; // 0x688            
            Vector m_vStartPos; // 0x694            
            CTransform m_InitialTransform; // 0x6a0            
            float katana_radius; // 0x6c0            
            float katana_distance; // 0x6c4            
            float travel_distance; // 0x6c8            
            std::int32_t katana_strikes; // 0x6cc            
            float katana_echo_damage; // 0x6d0            
            float strike_interval; // 0x6d4            
            float effect_duration; // 0x6d8            
            std::int32_t m_nStrikesLeft; // 0x6dc            
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x6e0            
            bool m_bFlutter; // 0x6e4            
            uint8_t _pad06e5[0x3]; // 0x6e5
            source2sdk::client::ParticleIndex_t m_nFXCast; // 0x6e8            
            uint8_t _pad06ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Kez_Echo_Slash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Kez_Echo_Slash) == 0x6f0);
    };
};
