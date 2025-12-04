#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
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
        class CMoverUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            source2sdk::animgraphlib::AnimValueSource m_facingTarget; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hMoveVecParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hMoveHeadingParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTurnToFaceParam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTurnToFaceOffset; // 0x_            
            float m_flTurnToFaceLimit; // 0x_            
            bool m_bAdditive; // 0x_            
            bool m_bApplyMovement; // 0x_            
            bool m_bOrientMovement; // 0x_            
            bool m_bApplyRotation; // 0x_            
            bool m_bLimitOnly; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMoverUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMoverUpdateNode) == 0x_);
    };
};
