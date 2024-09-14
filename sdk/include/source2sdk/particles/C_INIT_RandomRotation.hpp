#pragma once
#include "source2sdk/particles/CGeneralRandomRotation.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1e8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RandomRotation : public particles::CGeneralRandomRotation
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_INIT_RandomRotation) == 0x1e8);
};
