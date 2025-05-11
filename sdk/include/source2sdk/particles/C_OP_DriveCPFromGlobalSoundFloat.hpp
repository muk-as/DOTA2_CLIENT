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
        // Size: 0x200
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DriveCPFromGlobalSoundFloat : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutputControlPoint; // 0x1c8            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nOutputField; // 0x1cc            
            // metadata: MPropertyFriendlyName "input minimum"
            float m_flInputMin; // 0x1d0            
            // metadata: MPropertyFriendlyName "input maximum"
            float m_flInputMax; // 0x1d4            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1d8            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1dc            
            // metadata: MPropertyFriendlyName "sound stack name"
            CUtlString m_StackName; // 0x1e0            
            // metadata: MPropertyFriendlyName "sound operator name"
            CUtlString m_OperatorName; // 0x1e8            
            // metadata: MPropertyFriendlyName "sound field name"
            CUtlString m_FieldName; // 0x1f0            
            uint8_t _pad01f8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DriveCPFromGlobalSoundFloat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DriveCPFromGlobalSoundFloat) == 0x200);
    };
};
