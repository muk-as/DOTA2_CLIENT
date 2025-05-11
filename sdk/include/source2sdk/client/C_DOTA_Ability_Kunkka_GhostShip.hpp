#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Kunkka_GhostShip : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float buff_duration; // 0x5b0            
            float stun_duration; // 0x5b4            
            float ghostship_width; // 0x5b8            
            float ghostship_width_scepter; // 0x5bc            
            std::int32_t num_cannon_volleys; // 0x5c0            
            Vector m_vFinalDestination; // 0x5c4            
            Vector m_vStartingPoint; // 0x5d0            
            std::int32_t m_hProjectileID; // 0x5dc            
            uint8_t _pad05e0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Kunkka_GhostShip) == 0x5e8);
    };
};
