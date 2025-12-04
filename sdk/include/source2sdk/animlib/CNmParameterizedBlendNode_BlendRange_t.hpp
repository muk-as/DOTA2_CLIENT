#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
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
        struct CNmParameterizedBlendNode_BlendRange_t
        {
        public:
            std::int16_t m_nInputIdx0; // 0x_            
            std::int16_t m_nInputIdx1; // 0x_            
            Range_t m_parameterValueRange; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmParameterizedBlendNode_BlendRange_t, m_nInputIdx0) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmParameterizedBlendNode_BlendRange_t, m_nInputIdx1) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmParameterizedBlendNode_BlendRange_t, m_parameterValueRange) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmParameterizedBlendNode_BlendRange_t) == 0x_);
    };
};
