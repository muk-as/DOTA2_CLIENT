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
        // Size: 0x1868
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI11_CongaLine : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t NUM_SOUNDS; // 0x17f8            
            float dance_interval; // 0x17fc            
            float gesture_duration; // 0x1800            
            float catch_up_distance; // 0x1804            
            float slow_duration; // 0x1808            
            float slow_amount; // 0x180c            
            std::int32_t m_nGesture; // 0x1810            
            uint8_t _pad1814[0x4]; // 0x1814
            // m_vecDancers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_vecDancers;
            char m_vecDancers[0x18]; // 0x1818            
            uint8_t _pad1830[0x30]; // 0x1830
            bool m_bIsGesturing; // 0x1860            
            uint8_t _pad1861[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_CongaLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_TI11_CongaLine) == 0x1868);
    };
};
