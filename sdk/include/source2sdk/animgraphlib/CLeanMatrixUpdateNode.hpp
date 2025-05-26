#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"

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
        // Size: 0xf0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLeanMatrixUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            uint8_t _pad0058[0x4]; // 0x58
            std::int32_t m_frameCorners[3][3]; // 0x5c            
            source2sdk::animgraphlib::CPoseHandle m_poses[9]; // 0x80            
            uint8_t _pad00a4[0x4]; // 0xa4
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0xa8            
            source2sdk::animgraphlib::AnimVectorSource m_blendSource; // 0xc0            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0xc4            
            uint8_t _pad00c6[0x2]; // 0xc6
            Vector m_verticalAxis; // 0xc8            
            Vector m_horizontalAxis; // 0xd4            
            source2sdk::animationsystem::HSequence m_hSequence; // 0xe0            
            float m_flMaxValue; // 0xe4            
            std::int32_t m_nSequenceMaxFrame; // 0xe8            
            uint8_t _pad00ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLeanMatrixUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CLeanMatrixUpdateNode) == 0xf0);
    };
};
