#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

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
    class CDOTA_Ability_Snapfire_FiresnapCookie : public client::C_DOTABaseAbility
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x8]; // 0x5dc
        int32_t projectile_speed; // 0x5e4        
        float pre_hop_duration; // 0x5e8        
        float cast_on_ally_gesture_time; // 0x5ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_FiresnapCookie because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Snapfire_FiresnapCookie) == 0x5f0);
};
