#pragma once
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
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
    // Standard-layout class: false
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmIDEventConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        int16_t m_nSourceStateNodeIdx; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x12[0x2]; // 0x12
        animlib::CNmBitFlags m_eventConditionRules; // 0x14        
        // m_eventIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CGlobalSymbol,5> m_eventIDs;
        char m_eventIDs[0x40]; // 0x18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmIDEventConditionNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmIDEventConditionNode__CDefinition) == 0x58);
};
