#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_OgreBruiser_OgreSmash : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float radius; // 0x5c0            
            float hero_stun_duration; // 0x5c4            
            float damage; // 0x5c8            
            float damage_pct; // 0x5cc            
            source2sdk::entity2::GameTime_t flCooldown; // 0x5d0            
            uint8_t _pad05d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_OgreBruiser_OgreSmash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_OgreBruiser_OgreSmash) == 0x5d8);
    };
};
