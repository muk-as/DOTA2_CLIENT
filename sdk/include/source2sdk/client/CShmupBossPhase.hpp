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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupBossPhase
    {
    public:
        CUtlString m_strName; // 0x0        
        float m_flChargeTime; // 0x8        
        float m_flDuration; // 0xc        
        Vector2D m_vPosition; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupBossPhase, m_strName) == 0x0);
    static_assert(offsetof(CShmupBossPhase, m_flChargeTime) == 0x8);
    static_assert(offsetof(CShmupBossPhase, m_flDuration) == 0xc);
    static_assert(offsetof(CShmupBossPhase, m_vPosition) == 0x10);
    
    static_assert(sizeof(CShmupBossPhase) == 0x18);
};
