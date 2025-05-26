#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/TargetSelectorAngleMode_t.hpp"

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
        // Size: 0x98
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTargetSelectorUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            source2sdk::animgraphlib::TargetSelectorAngleMode_t m_eAngleMode; // 0x60            
            uint8_t _pad0064[0x4]; // 0x64
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x18]; // 0x68            
            uint8_t _pad0080[0x4]; // 0x80
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPosition; // 0x84            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x86            
            source2sdk::animgraphlib::CAnimParamHandle m_hMoveHeadingParameter; // 0x88            
            source2sdk::animgraphlib::CAnimParamHandle m_hDesiredMoveHeadingParameter; // 0x8a            
            bool m_bTargetPositionIsWorldSpace; // 0x8c            
            bool m_bTargetFacePositionIsWorldSpace; // 0x8d            
            bool m_bEnablePhaseMatching; // 0x8e            
            uint8_t _pad008f[0x1]; // 0x8f
            float m_flPhaseMatchingMaxRootMotionSkip; // 0x90            
            uint8_t _pad0094[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTargetSelectorUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTargetSelectorUpdateNode) == 0x98);
    };
};
