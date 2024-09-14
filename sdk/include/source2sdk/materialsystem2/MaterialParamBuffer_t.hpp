#pragma once
#include "source2sdk/materialsystem2/MaterialParam_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MaterialParamBuffer_t : public materialsystem2::MaterialParam_t
    {
    public:
        CUtlBinaryBlock m_value; // 0x8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in MaterialParamBuffer_t because it is not a standard-layout class
    static_assert(sizeof(MaterialParamBuffer_t) == 0x20);
};
