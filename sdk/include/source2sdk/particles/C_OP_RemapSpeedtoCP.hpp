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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapSpeedtoCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "input control point"
            std::int32_t m_nInControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "Output field 0-2 X/Y/Z"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nField; // 0x_            
            // metadata: MPropertyFriendlyName "input minimum"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input maximum"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "use delta of velocity instead of constant speed"
            bool m_bUseDeltaV; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapSpeedtoCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapSpeedtoCP) == 0x_);
    };
};
