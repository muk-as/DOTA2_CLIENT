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
    // Size: 0x58
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PermModelInfo_t
    {
    public:
        uint32_t m_nFlags; // 0x0        
        Vector m_vHullMin; // 0x4        
        Vector m_vHullMax; // 0x10        
        Vector m_vViewMin; // 0x1c        
        Vector m_vViewMax; // 0x28        
        float m_flMass; // 0x34        
        Vector m_vEyePosition; // 0x38        
        float m_flMaxEyeDeflection; // 0x44        
        CUtlString m_sSurfaceProperty; // 0x48        
        CUtlString m_keyValueText; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PermModelInfo_t, m_nFlags) == 0x0);
    static_assert(offsetof(PermModelInfo_t, m_vHullMin) == 0x4);
    static_assert(offsetof(PermModelInfo_t, m_vHullMax) == 0x10);
    static_assert(offsetof(PermModelInfo_t, m_vViewMin) == 0x1c);
    static_assert(offsetof(PermModelInfo_t, m_vViewMax) == 0x28);
    static_assert(offsetof(PermModelInfo_t, m_flMass) == 0x34);
    static_assert(offsetof(PermModelInfo_t, m_vEyePosition) == 0x38);
    static_assert(offsetof(PermModelInfo_t, m_flMaxEyeDeflection) == 0x44);
    static_assert(offsetof(PermModelInfo_t, m_sSurfaceProperty) == 0x48);
    static_assert(offsetof(PermModelInfo_t, m_keyValueText) == 0x50);
    
    static_assert(sizeof(PermModelInfo_t) == 0x58);
};
