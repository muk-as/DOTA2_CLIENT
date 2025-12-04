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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTargetSelectorUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::TargetSelectorAngleMode_t m_eAngleMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPosition; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hMoveHeadingParameter; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hDesiredMoveHeadingParameter; // 0x_            
            bool m_bTargetPositionIsWorldSpace; // 0x_            
            bool m_bTargetFacePositionIsWorldSpace; // 0x_            
            bool m_bEnablePhaseMatching; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flPhaseMatchingMaxRootMotionSkip; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTargetSelectorUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTargetSelectorUpdateNode) == 0x_);
    };
};
