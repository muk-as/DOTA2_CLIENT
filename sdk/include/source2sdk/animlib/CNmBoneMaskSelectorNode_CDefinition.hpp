#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoneMaskValueNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmBoneMaskSelectorNode_CDefinition : public source2sdk::animlib::CNmBoneMaskValueNode_CDefinition
        {
        public:
            std::int16_t m_defaultMaskNodeIdx; // 0x_            
            std::int16_t m_parameterValueNodeIdx; // 0x_            
            bool m_switchDynamically; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_maskNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::int16_t,7> m_maskNodeIndices;
            char m_maskNodeIndices[0x_]; // 0x_            
            // m_parameterValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<CGlobalSymbol,7> m_parameterValues;
            char m_parameterValues[0x_]; // 0x_            
            float m_flBlendTimeSeconds; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBoneMaskSelectorNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBoneMaskSelectorNode_CDefinition) == 0x_);
    };
};
