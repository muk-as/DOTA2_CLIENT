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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Razor_StaticLink : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iLinkIndex; // 0x5b8            
            uint8_t _pad05bc[0x4]; // 0x5bc
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x5c0            
            float vision_duration; // 0x5d8            
            bool m_bIsAltCastState; // 0x5dc            
            uint8_t _pad05dd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Razor_StaticLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Razor_StaticLink) == 0x5e0);
    };
};
