#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunction.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CParticleFunctionEmitter : public source2sdk::particles::CParticleFunction
        {
        public:
            // metadata: MPropertyFriendlyName "Emitter Index"
            std::int32_t m_nEmitterIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleFunctionEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CParticleFunctionEmitter) == 0x_);
    };
};
