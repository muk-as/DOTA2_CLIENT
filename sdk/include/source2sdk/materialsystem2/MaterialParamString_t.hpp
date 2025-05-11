#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/materialsystem2/MaterialParam_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace materialsystem2
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct MaterialParamString_t : public source2sdk::materialsystem2::MaterialParam_t
        {
        public:
            CUtlString m_value; // 0x8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in MaterialParamString_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::materialsystem2::MaterialParamString_t) == 0x10);
    };
};
