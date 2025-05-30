#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/AnimParamType_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParamSpan_t
        {
        public:
            // m_samples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::ParamSpanSample_t> m_samples;
            char m_samples[0x18]; // 0x0            
            source2sdk::animgraphlib::CAnimParamHandle m_hParam; // 0x18            
            source2sdk::animationsystem::AnimParamType_t m_eParamType; // 0x1a            
            uint8_t _pad001b[0x1]; // 0x1b
            float m_flStartCycle; // 0x1c            
            float m_flEndCycle; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_samples) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_hParam) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_eParamType) == 0x1a);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_flStartCycle) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpan_t, m_flEndCycle) == 0x20);
        
        static_assert(sizeof(source2sdk::animgraphlib::ParamSpan_t) == 0x28);
    };
};
