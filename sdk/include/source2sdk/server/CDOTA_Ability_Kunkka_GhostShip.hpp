#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x618
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Kunkka_GhostShip : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float buff_duration; // 0x5b8            
            float stun_duration; // 0x5bc            
            float ghostship_width; // 0x5c0            
            float ghostship_width_scepter; // 0x5c4            
            std::int32_t num_cannon_volleys; // 0x5c8            
            Vector m_vFinalDestination; // 0x5cc            
            Vector m_vStartingPoint; // 0x5d8            
            std::int32_t m_hProjectileID; // 0x5e4            
            uint8_t _pad05e8[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Kunkka_GhostShip) == 0x618);
    };
};
