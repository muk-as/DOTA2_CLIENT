#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        class CDOTA_Ability_Creature_Fire_Breath : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t speed; // 0x_            
            std::int32_t projectile_count; // 0x_            
            float rotation_angle; // 0x_            
            float damage; // 0x_            
            float radius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer ctTimer; // 0x_            
            Vector m_vecStartRot; // 0x_            
            Vector m_vecEndRot; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Creature_Fire_Breath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Creature_Fire_Breath) == 0x_);
    };
};
