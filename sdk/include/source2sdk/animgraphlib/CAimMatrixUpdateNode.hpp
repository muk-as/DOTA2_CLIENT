#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AimMatrixOpFixedSettings_t.hpp"
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
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
        class CAimMatrixUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::AnimVectorSource m_target; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            bool m_bResetChild; // 0x_            
            bool m_bLockWhenWaning; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAimMatrixUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CAimMatrixUpdateNode) == 0x_);
    };
};
