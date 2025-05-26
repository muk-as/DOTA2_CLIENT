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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x180
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAimMatrixUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70            
            uint8_t _pad0160[0x8]; // 0x160
            source2sdk::animgraphlib::AnimVectorSource m_target; // 0x168            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x16c            
            uint8_t _pad016e[0x2]; // 0x16e
            source2sdk::animationsystem::HSequence m_hSequence; // 0x170            
            bool m_bResetChild; // 0x174            
            bool m_bLockWhenWaning; // 0x175            
            uint8_t _pad0176[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAimMatrixUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CAimMatrixUpdateNode) == 0x180);
    };
};
