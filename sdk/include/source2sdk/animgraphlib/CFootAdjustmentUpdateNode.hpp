#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

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
        class CFootAdjustmentUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_clips has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::HSequence> m_clips;
            char m_clips[0x_]; // 0x_            
            source2sdk::animgraphlib::CPoseHandle m_hBasePoseCacheHandle; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_facingTarget; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTurnTimeMin; // 0x_            
            float m_flTurnTimeMax; // 0x_            
            float m_flStepHeightMax; // 0x_            
            float m_flStepHeightMaxAngle; // 0x_            
            bool m_bResetChild; // 0x_            
            bool m_bAnimationDriven; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootAdjustmentUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootAdjustmentUpdateNode) == 0x_);
    };
};
