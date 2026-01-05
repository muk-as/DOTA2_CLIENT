#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmClipReferenceNode_CDefinition.hpp"

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
        class CNmTargetSelectorNode_CDefinition : public source2sdk::animlib::CNmClipReferenceNode_CDefinition
        {
        public:
            // m_optionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<std::int16_t,5> m_optionNodeIndices;
            char m_optionNodeIndices[0x_]; // 0x_            
            float m_flOrientationScoreWeight; // 0x_            
            float m_flPositionScoreWeight; // 0x_            
            std::int16_t m_parameterNodeIdx; // 0x_            
            bool m_bIgnoreInvalidOptions; // 0x_            
            bool m_bIsWorldSpaceTarget; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTargetSelectorNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTargetSelectorNode_CDefinition) == 0x_);
    };
};
