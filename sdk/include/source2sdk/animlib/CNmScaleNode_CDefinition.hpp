#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"

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
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmScaleNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            std::int16_t m_nMaskNodeIdx; // 0x18            
            std::int16_t m_nEnableNodeIdx; // 0x1a            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmScaleNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmScaleNode_CDefinition) == 0x20);
    };
};
