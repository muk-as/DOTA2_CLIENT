#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
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
        class C_OP_RampCPLinearRandom : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutControlPointNumber; // 0x1c8            
            // metadata: MPropertyFriendlyName "ramp rate min"
            Vector m_vecRateMin; // 0x1cc            
            // metadata: MPropertyFriendlyName "ramp rate max"
            Vector m_vecRateMax; // 0x1d8            
            uint8_t _pad01e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RampCPLinearRandom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RampCPLinearRandom) == 0x1e8);
    };
};
