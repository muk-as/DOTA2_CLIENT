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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Kunkka_GhostShip : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float buff_duration; // 0x_            
            float stun_duration; // 0x_            
            float ghostship_width; // 0x_            
            float ghostship_width_scepter; // 0x_            
            std::int32_t num_cannon_volleys; // 0x_            
            Vector m_vFinalDestination; // 0x_            
            Vector m_vStartingPoint; // 0x_            
            std::int32_t m_hProjectileID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Kunkka_GhostShip) == 0x_);
    };
};
