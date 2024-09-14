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
    class C_OP_RemapSpeedtoCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "input control point"
        int32_t m_nInControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutControlPointNumber; // 0x1cc        
        // metadata: MPropertyFriendlyName "Output field 0-2 X/Y/Z"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nField; // 0x1d0        
        // metadata: MPropertyFriendlyName "input minimum"
        float m_flInputMin; // 0x1d4        
        // metadata: MPropertyFriendlyName "input maximum"
        float m_flInputMax; // 0x1d8        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1dc        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1e0        
        // metadata: MPropertyFriendlyName "use delta of velocity instead of constant speed"
        bool m_bUseDeltaV; // 0x1e4        
        [[maybe_unused]] std::uint8_t pad_0x1e5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapSpeedtoCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapSpeedtoCP) == 0x1e8);
};
