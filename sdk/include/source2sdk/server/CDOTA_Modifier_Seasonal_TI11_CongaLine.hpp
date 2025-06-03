#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18e8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI11_CongaLine : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t NUM_SOUNDS; // 0x1878            
            float dance_interval; // 0x187c            
            float gesture_duration; // 0x1880            
            float catch_up_distance; // 0x1884            
            float slow_duration; // 0x1888            
            float slow_amount; // 0x188c            
            std::int32_t m_nGesture; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            // m_vecDancers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_vecDancers;
            char m_vecDancers[0x18]; // 0x1898            
            uint8_t _pad18b0[0x30]; // 0x18b0
            bool m_bIsGesturing; // 0x18e0            
            uint8_t _pad18e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_CongaLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_TI11_CongaLine) == 0x18e8);
    };
};
