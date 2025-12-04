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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI11_CongaLine : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t NUM_SOUNDS; // 0x_            
            float dance_interval; // 0x_            
            float gesture_duration; // 0x_            
            float catch_up_distance; // 0x_            
            float slow_duration; // 0x_            
            float slow_amount; // 0x_            
            std::int32_t m_nGesture; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecDancers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_vecDancers;
            char m_vecDancers[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bIsGesturing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_CongaLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_TI11_CongaLine) == 0x_);
    };
};
