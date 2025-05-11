#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"

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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTargetSelectorUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x18]; // 0x60            
            uint8_t _pad0078[0x4]; // 0x78
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPosition; // 0x7c            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x7e            
            bool m_bTargetPositionIsWorldSpace; // 0x80            
            bool m_bTargetFacePositionIsWorldSpace; // 0x81            
            bool m_bEnablePhaseMatching; // 0x82            
            uint8_t _pad0083[0x1]; // 0x83
            float m_flPhaseMatchingMaxRootMotionSkip; // 0x84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTargetSelectorUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTargetSelectorUpdateNode) == 0x88);
    };
};
