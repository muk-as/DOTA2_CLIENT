#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct NeutralCampStackPullAlarm_t
        {
        public:
            Vector m_vPosition; // 0x_            
            float m_flPullAlarmTime; // 0x_            
            float m_flStackAlarmTime; // 0x_            
            std::int32_t m_nCampIndex; // 0x_            
            std::int32_t m_nAlarmTypes; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::NeutralCampStackPullAlarm_t, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralCampStackPullAlarm_t, m_flPullAlarmTime) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralCampStackPullAlarm_t, m_flStackAlarmTime) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralCampStackPullAlarm_t, m_nCampIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralCampStackPullAlarm_t, m_nAlarmTypes) == 0x_);
        
        static_assert(sizeof(source2sdk::client::NeutralCampStackPullAlarm_t) == 0x_);
    };
};
