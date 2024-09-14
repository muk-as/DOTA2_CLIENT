#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d8
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CGeneralSpin : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "spin rate degrees"
        int32_t m_nSpinRateDegrees; // 0x1c0        
        // metadata: MPropertyFriendlyName "spin rate min"
        int32_t m_nSpinRateMinDegrees; // 0x1c4        
        [[maybe_unused]] std::uint8_t pad_0x1c8[0x4]; // 0x1c8
        // metadata: MPropertyFriendlyName "spin stop time"
        float m_fSpinRateStopTime; // 0x1cc        
        [[maybe_unused]] std::uint8_t pad_0x1d0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGeneralSpin because it is not a standard-layout class
    static_assert(sizeof(CGeneralSpin) == 0x1d8);
};
