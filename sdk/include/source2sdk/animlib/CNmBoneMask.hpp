#pragma once
#include "source2sdk/animlib/CNmBoneMask__WeightInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmBoneMask
    {
    public:
        CGlobalSymbol m_ID; // 0x0        
        animlib::CNmBoneMask__WeightInfo_t m_weightInfo; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0xf]; // 0x9
        // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_weights;
        char m_weights[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmBoneMask, m_ID) == 0x0);
    static_assert(offsetof(CNmBoneMask, m_weightInfo) == 0x8);
    static_assert(offsetof(CNmBoneMask, m_weights) == 0x18);
    
    static_assert(sizeof(CNmBoneMask) == 0x30);
};
