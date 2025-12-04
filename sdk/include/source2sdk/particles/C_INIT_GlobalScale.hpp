#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_GlobalScale : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "scale amount"
            float m_flScale; // 0x_            
            // metadata: MPropertyFriendlyName "scale control point number"
            std::int32_t m_nScaleControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "scale radius"
            bool m_bScaleRadius; // 0x_            
            // metadata: MPropertyFriendlyName "scale position"
            bool m_bScalePosition; // 0x_            
            // metadata: MPropertyFriendlyName "scale velocity"
            bool m_bScaleVelocity; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_GlobalScale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_GlobalScale) == 0x_);
    };
};
