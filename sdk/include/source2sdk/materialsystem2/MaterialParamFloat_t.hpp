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
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MaterialParamFloat_t : public materialsystem2::MaterialParam_t
    {
    public:
        float m_flValue; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in MaterialParamFloat_t because it is not a standard-layout class
    static_assert(sizeof(MaterialParamFloat_t) == 0x10);
};
