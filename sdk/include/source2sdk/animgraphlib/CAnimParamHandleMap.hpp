#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimParamHandleMap
    {
    public:
        // m_list has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlHashtable<uint16_t,int16_t> m_list;
        char m_list[0x20]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimParamHandleMap, m_list) == 0x0);
    
    static_assert(sizeof(CAnimParamHandleMap) == 0x20);
};
