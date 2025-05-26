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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Kez_Echo_Slash : public source2sdk::server::CDOTA_Ability_Kez_BaseAbility
        {
        public:
            Vector m_vInitialDirection; // 0x5c8            
            Vector m_vStartPos; // 0x5d4            
            CTransform m_InitialTransform; // 0x5e0            
            float katana_radius; // 0x600            
            float katana_distance; // 0x604            
            float travel_distance; // 0x608            
            std::int32_t katana_strikes; // 0x60c            
            float katana_echo_damage; // 0x610            
            float strike_interval; // 0x614            
            float effect_duration; // 0x618            
            std::int32_t m_nStrikesLeft; // 0x61c            
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x620            
            bool m_bFlutter; // 0x624            
            uint8_t _pad0625[0x3]; // 0x625
            source2sdk::client::ParticleIndex_t m_nFXCast; // 0x628            
            uint8_t _pad062c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Kez_Echo_Slash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Kez_Echo_Slash) == 0x630);
    };
};
