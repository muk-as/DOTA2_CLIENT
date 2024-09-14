#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x1c
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct NeutralCampStackPullAlarm_t
    {
    public:
        Vector m_vPosition; // 0x0        
        float m_flPullAlarmTime; // 0xc        
        float m_flStackAlarmTime; // 0x10        
        int32_t m_nCampIndex; // 0x14        
        int32_t m_nAlarmTypes; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NeutralCampStackPullAlarm_t, m_vPosition) == 0x0);
    static_assert(offsetof(NeutralCampStackPullAlarm_t, m_flPullAlarmTime) == 0xc);
    static_assert(offsetof(NeutralCampStackPullAlarm_t, m_flStackAlarmTime) == 0x10);
    static_assert(offsetof(NeutralCampStackPullAlarm_t, m_nCampIndex) == 0x14);
    static_assert(offsetof(NeutralCampStackPullAlarm_t, m_nAlarmTypes) == 0x18);
    
    static_assert(sizeof(NeutralCampStackPullAlarm_t) == 0x1c);
};
