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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Creature_Fire_Breath : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t speed; // 0x5b8            
            std::int32_t projectile_count; // 0x5bc            
            float rotation_angle; // 0x5c0            
            float damage; // 0x5c4            
            float radius; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            source2sdk::server::CountdownTimer ctTimer; // 0x5d0            
            Vector m_vecStartRot; // 0x5e8            
            Vector m_vecEndRot; // 0x5f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Creature_Fire_Breath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Creature_Fire_Breath) == 0x600);
    };
};
