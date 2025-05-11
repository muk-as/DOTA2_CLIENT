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
        // Size: 0x1d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ForceControlPointStub : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_ControlPoint; // 0x1c8            
            uint8_t _pad01cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ForceControlPointStub because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ForceControlPointStub) == 0x1d0);
    };
};
