#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/LookAtOpFixedSettings_t.hpp"

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
        // Size: 0x160
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLookAtUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::LookAtOpFixedSettings_t m_opFixedSettings; // 0x70            
            uint8_t _pad0140[0x8]; // 0x140
            source2sdk::animgraphlib::AnimVectorSource m_target; // 0x148            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x14c            
            source2sdk::animgraphlib::CAnimParamHandle m_weightParamIndex; // 0x14e            
            bool m_bResetChild; // 0x150            
            bool m_bLockWhenWaning; // 0x151            
            uint8_t _pad0152[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLookAtUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CLookAtUpdateNode) == 0x160);
    };
};
