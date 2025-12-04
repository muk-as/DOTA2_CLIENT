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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Kunkka_GhostShip : public source2sdk::client::C_DOTABaseAbility
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
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Kunkka_GhostShip) == 0x_);
    };
};
