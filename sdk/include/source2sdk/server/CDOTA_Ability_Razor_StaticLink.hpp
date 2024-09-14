#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Razor_StaticLink : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iLinkIndex; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        server::CountdownTimer m_ViewerTimer; // 0x5a8        
        float vision_duration; // 0x5c0        
        bool m_bIsAltCastState; // 0x5c4        
        [[maybe_unused]] std::uint8_t pad_0x5c5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Razor_StaticLink because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Razor_StaticLink) == 0x5c8);
};
