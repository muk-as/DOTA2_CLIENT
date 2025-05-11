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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_GlobalScale : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "scale amount"
            float m_flScale; // 0x1c8            
            // metadata: MPropertyFriendlyName "scale control point number"
            std::int32_t m_nScaleControlPointNumber; // 0x1cc            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1d0            
            // metadata: MPropertyFriendlyName "scale radius"
            bool m_bScaleRadius; // 0x1d4            
            // metadata: MPropertyFriendlyName "scale position"
            bool m_bScalePosition; // 0x1d5            
            // metadata: MPropertyFriendlyName "scale velocity"
            bool m_bScaleVelocity; // 0x1d6            
            uint8_t _pad01d7[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_GlobalScale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_GlobalScale) == 0x1d8);
    };
};
