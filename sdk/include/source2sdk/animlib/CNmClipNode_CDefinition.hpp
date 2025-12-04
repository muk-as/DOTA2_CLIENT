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
        class CNmClipNode_CDefinition : public source2sdk::animlib::CNmClipReferenceNode_CDefinition
        {
        public:
            std::int16_t m_nPlayInReverseValueNodeIdx; // 0x_            
            std::int16_t m_nResetTimeValueNodeIdx; // 0x_            
            float m_flSpeedMultiplier; // 0x_            
            std::int32_t m_nStartSyncEventOffset; // 0x_            
            bool m_bSampleRootMotion; // 0x_            
            bool m_bAllowLooping; // 0x_            
            std::int16_t m_nDataSlotIdx; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmClipNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmClipNode_CDefinition) == 0x_);
    };
};
