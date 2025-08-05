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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Razor_StaticLink : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_iLinkIndex; // 0x688            
            uint8_t _pad068c[0x4]; // 0x68c
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x690            
            float vision_duration; // 0x6a8            
            bool m_bIsAltCastState; // 0x6ac            
            uint8_t _pad06ad[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Razor_StaticLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Razor_StaticLink) == 0x6b0);
    };
};
