#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Creature_Ice_Breath : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t speed; // 0x5b0            
            std::int32_t projectile_count; // 0x5b4            
            float rotation_angle; // 0x5b8            
            float damage; // 0x5bc            
            float radius; // 0x5c0            
            float slow_duration; // 0x5c4            
            source2sdk::client::CountdownTimer ctTimer; // 0x5c8            
            Vector m_vecStartRot; // 0x5e0            
            Vector m_vecEndRot; // 0x5ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Creature_Ice_Breath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Creature_Ice_Breath) == 0x5f8);
    };
};
