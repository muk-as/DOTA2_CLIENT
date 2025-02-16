#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Razor_StaticLink : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_iLinkIndex; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        client::CountdownTimer m_ViewerTimer; // 0x608        
        float vision_duration; // 0x620        
        bool m_bIsAltCastState; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x625[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Razor_StaticLink because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Razor_StaticLink) == 0x628);
};
