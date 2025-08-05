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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmChainLookatNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            CGlobalSymbol m_chainEndBoneID; // 0x18            
            std::int16_t m_nLookatTargetNodeIdx; // 0x20            
            std::int16_t m_nEnabledNodeIdx; // 0x22            
            float m_flBlendTimeSeconds; // 0x24            
            std::uint8_t m_nChainLength; // 0x28            
            bool m_bIsTargetInWorldSpace; // 0x29            
            uint8_t _pad002a[0x2]; // 0x2a
            Vector m_chainForwardDir; // 0x2c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmChainLookatNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmChainLookatNode_CDefinition) == 0x38);
    };
};
