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
        class C_OP_DriveCPFromGlobalSoundFloat : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutputControlPoint; // 0x_            
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
            // metadata: MPropertyFriendlyName "sound stack name"
            CUtlString m_StackName; // 0x_            
            // metadata: MPropertyFriendlyName "sound operator name"
            CUtlString m_OperatorName; // 0x_            
            // metadata: MPropertyFriendlyName "sound field name"
            CUtlString m_FieldName; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DriveCPFromGlobalSoundFloat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DriveCPFromGlobalSoundFloat) == 0x_);
    };
};
