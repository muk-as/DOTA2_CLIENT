#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootDefinition
    {
    public:
        CUtlString m_name; // 0x0        
        CUtlString m_ankleBoneName; // 0x8        
        CUtlString m_toeBoneName; // 0x10        
        Vector m_vBallOffset; // 0x18        
        Vector m_vHeelOffset; // 0x24        
        float m_flFootLength; // 0x30        
        float m_flBindPoseDirectionMS; // 0x34        
        float m_flTraceHeight; // 0x38        
        float m_flTraceRadius; // 0x3c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFootDefinition, m_name) == 0x0);
    static_assert(offsetof(CFootDefinition, m_ankleBoneName) == 0x8);
    static_assert(offsetof(CFootDefinition, m_toeBoneName) == 0x10);
    static_assert(offsetof(CFootDefinition, m_vBallOffset) == 0x18);
    static_assert(offsetof(CFootDefinition, m_vHeelOffset) == 0x24);
    static_assert(offsetof(CFootDefinition, m_flFootLength) == 0x30);
    static_assert(offsetof(CFootDefinition, m_flBindPoseDirectionMS) == 0x34);
    static_assert(offsetof(CFootDefinition, m_flTraceHeight) == 0x38);
    static_assert(offsetof(CFootDefinition, m_flTraceRadius) == 0x3c);
    
    static_assert(sizeof(CFootDefinition) == 0x40);
};
