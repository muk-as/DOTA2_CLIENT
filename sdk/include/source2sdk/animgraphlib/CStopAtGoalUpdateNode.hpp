#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

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
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStopAtGoalUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0070[0x4]; // 0x70
            float m_flOuterRadius; // 0x74            
            float m_flInnerRadius; // 0x78            
            float m_flMaxScale; // 0x7c            
            float m_flMinScale; // 0x80            
            uint8_t _pad0084[0x4]; // 0x84
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CStopAtGoalUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CStopAtGoalUpdateNode) == 0xa0);
    };
};
