#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmIDValueNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIDSwitchNode_CDefinition : public source2sdk::animlib::CNmIDValueNode_CDefinition
        {
        public:
            std::int16_t m_nSwitchValueNodeIdx; // 0x10            
            std::int16_t m_nTrueValueNodeIdx; // 0x12            
            std::int16_t m_nFalseValueNodeIdx; // 0x14            
            uint8_t _pad0016[0x2]; // 0x16
            CGlobalSymbol m_falseValue; // 0x18            
            CGlobalSymbol m_trueValue; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmIDSwitchNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmIDSwitchNode_CDefinition) == 0x28);
    };
};
