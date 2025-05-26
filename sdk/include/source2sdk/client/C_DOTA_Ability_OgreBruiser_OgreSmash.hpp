#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_OgreBruiser_OgreSmash : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float radius; // 0x680            
            float hero_stun_duration; // 0x684            
            float damage; // 0x688            
            float damage_pct; // 0x68c            
            source2sdk::entity2::GameTime_t flCooldown; // 0x690            
            uint8_t _pad0694[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_OgreBruiser_OgreSmash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_OgreBruiser_OgreSmash) == 0x698);
    };
};
