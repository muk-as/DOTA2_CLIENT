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
        class C_OP_RemapCPtoCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "input control point number"
            std::int32_t m_nInputControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "output control point number"
            std::int32_t m_nOutputControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "input field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nInputField; // 0x_            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nOutputField; // 0x_            
            // metadata: MPropertyFriendlyName "input minimum"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input maximum"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "use the derivative"
            bool m_bDerivative; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "interpolation"
            float m_flInterpRate; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapCPtoCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapCPtoCP) == 0x_);
    };
};
