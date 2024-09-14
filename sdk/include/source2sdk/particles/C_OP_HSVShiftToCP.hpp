#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    class C_OP_HSVShiftToCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "Target color control point number"
        int32_t m_nColorCP; // 0x1c8        
        // metadata: MPropertyFriendlyName "Color Gem Enable control point number"
        int32_t m_nColorGemEnableCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "output control point number"
        int32_t m_nOutputCP; // 0x1d0        
        // metadata: MPropertyFriendlyName "Default HSV Color"
        Color m_DefaultHSVColor; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d8[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_HSVShiftToCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_HSVShiftToCP) == 0x1e8);
};
