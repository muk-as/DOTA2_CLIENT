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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class WeightList
        {
        public:
            CUtlString m_name; // 0x_            
            // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_weights;
            char m_weights[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::WeightList, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::WeightList, m_weights) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::WeightList) == 0x_);
    };
};
