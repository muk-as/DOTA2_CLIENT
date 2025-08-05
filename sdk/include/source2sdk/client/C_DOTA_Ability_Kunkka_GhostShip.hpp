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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Kunkka_GhostShip : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float buff_duration; // 0x688            
            float stun_duration; // 0x68c            
            float ghostship_width; // 0x690            
            float ghostship_width_scepter; // 0x694            
            std::int32_t num_cannon_volleys; // 0x698            
            Vector m_vFinalDestination; // 0x69c            
            Vector m_vStartingPoint; // 0x6a8            
            std::int32_t m_hProjectileID; // 0x6b4            
            uint8_t _pad06b8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Kunkka_GhostShip) == 0x6d0);
    };
};
