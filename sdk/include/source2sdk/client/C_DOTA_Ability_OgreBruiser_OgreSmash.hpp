#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_OgreBruiser_OgreSmash : public client::C_DOTABaseAbility
    {
    public:
        int32_t radius; // 0x5d8        
        float hero_stun_duration; // 0x5dc        
        int32_t damage; // 0x5e0        
        float damage_pct; // 0x5e4        
        entity2::GameTime_t flCooldown; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_OgreBruiser_OgreSmash because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_OgreBruiser_OgreSmash) == 0x5f0);
};
