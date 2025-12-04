#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CBlendCurve.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStateNodeTransitionData
        {
        public:
            source2sdk::animgraphlib::CBlendCurve m_curve; // 0x_            
            // m_blendDuration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimValue<float> m_blendDuration;
            char m_blendDuration[0x_]; // 0x_            
            // m_resetCycleValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimValue<float> m_resetCycleValue;
            char m_resetCycleValue[0x_]; // 0x_            
            // start of bitfield block
            uint8_t m_bReset: 1;
            uint8_t m_resetCycleOption: 3;
            // end of bitfield block// 4 bits
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CStateNodeTransitionData, m_curve) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStateNodeTransitionData, m_blendDuration) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStateNodeTransitionData, m_resetCycleValue) == 0x_);
        // Cannot assert offset of bitfield CStateNodeTransitionData::m_bReset
        // Cannot assert offset of bitfield CStateNodeTransitionData::m_resetCycleOption
        
        static_assert(sizeof(source2sdk::animgraphlib::CStateNodeTransitionData) == 0x_);
    };
};
