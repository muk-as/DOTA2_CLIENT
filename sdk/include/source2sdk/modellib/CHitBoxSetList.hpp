#pragma once
#include "source2sdk/modellib/CHitBoxSet.hpp"
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
    class CHitBoxSetList
    {
    public:
        // m_HitBoxSets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CHitBoxSet> m_HitBoxSets;
        char m_HitBoxSets[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CHitBoxSetList, m_HitBoxSets) == 0x0);
    
    static_assert(sizeof(CHitBoxSetList) == 0x18);
};
