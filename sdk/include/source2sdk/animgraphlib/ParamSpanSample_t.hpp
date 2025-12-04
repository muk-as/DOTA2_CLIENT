#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        struct ParamSpanSample_t
        {
        public:
            CAnimVariant m_value; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flCycle; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpanSample_t, m_value) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::ParamSpanSample_t, m_flCycle) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::ParamSpanSample_t) == 0x_);
    };
};
