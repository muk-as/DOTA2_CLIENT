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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Razor_StaticLink : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iLinkIndex; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4]; // 0x5cc
        server::CountdownTimer m_ViewerTimer; // 0x5d0        
        float vision_duration; // 0x5e8        
        bool m_bIsAltCastState; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Razor_StaticLink because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Razor_StaticLink) == 0x5f0);
};
