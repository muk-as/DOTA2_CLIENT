#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"

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
        class C_OP_ParentVortices : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "amount of force"
            float m_flForceScale; // 0x_            
            // metadata: MPropertyFriendlyName "twist axis"
            // metadata: MVectorIsCoordinate
            Vector m_vecTwistAxis; // 0x_            
            // metadata: MPropertyFriendlyName "flip twist axis with yaw"
            bool m_bFlipBasedOnYaw; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ParentVortices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ParentVortices) == 0x_);
    };
};
