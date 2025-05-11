#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmParameterizedBlendNode_BlendRange_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmParameterizedBlendNode_Parameterization_t
        {
        public:
            // m_blendRanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmParameterizedBlendNode_BlendRange_t,5> m_blendRanges;
            char m_blendRanges[0x48]; // 0x0            
            Range_t m_parameterRange; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmParameterizedBlendNode_Parameterization_t, m_blendRanges) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmParameterizedBlendNode_Parameterization_t, m_parameterRange) == 0x48);
        
        static_assert(sizeof(source2sdk::animlib::CNmParameterizedBlendNode_Parameterization_t) == 0x50);
    };
};
