#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimParamType_t.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/ParamSpanSample_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParamSpan_t
        {
        public:
            // m_samples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::ParamSpanSample_t> m_samples;
            char m_samples[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hParam; // 0x_            
            source2sdk::animgraphlib::AnimParamType_t m_eParamType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flStartCycle; // 0x_            
            float m_flEndCycle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_samples) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_hParam) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_eParamType) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_flStartCycle) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_flEndCycle) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::ParamSpan_t) == 0x_);
    };
};
