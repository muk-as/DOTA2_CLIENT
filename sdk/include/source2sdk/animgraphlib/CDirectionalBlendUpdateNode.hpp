#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDirectionalBlendUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            uint8_t _pad0058[0x4]; // 0x58
            source2sdk::animationsystem::HSequence m_hSequences[8]; // 0x5c            
            uint8_t _pad007c[0x4]; // 0x7c
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x80            
            source2sdk::animgraphlib::AnimValueSource m_blendValueSource; // 0x90            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x94            
            uint8_t _pad0096[0x2]; // 0x96
            float m_playbackSpeed; // 0x98            
            float m_duration; // 0x9c            
            bool m_bLoop; // 0xa0            
            bool m_bLockBlendOnReset; // 0xa1            
            uint8_t _pad00a2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDirectionalBlendUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CDirectionalBlendUpdateNode) == 0xa8);
    };
};
