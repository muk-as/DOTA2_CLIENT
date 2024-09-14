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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFlexController
    {
    public:
        CUtlString m_szName; // 0x0        
        CUtlString m_szType; // 0x8        
        float min; // 0x10        
        float max; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFlexController, m_szName) == 0x0);
    static_assert(offsetof(CFlexController, m_szType) == 0x8);
    static_assert(offsetof(CFlexController, min) == 0x10);
    static_assert(offsetof(CFlexController, max) == 0x14);
    
    static_assert(sizeof(CFlexController) == 0x18);
};
