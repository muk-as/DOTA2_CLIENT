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
        class C_INIT_ChaoticAttractor : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "pickover A parameter"
            float m_flAParm; // 0x_            
            // metadata: MPropertyFriendlyName "pickover B parameter"
            float m_flBParm; // 0x_            
            // metadata: MPropertyFriendlyName "pickover C parameter"
            float m_flCParm; // 0x_            
            // metadata: MPropertyFriendlyName "pickover D parameter"
            float m_flDParm; // 0x_            
            // metadata: MPropertyFriendlyName "scale"
            float m_flScale; // 0x_            
            // metadata: MPropertyFriendlyName "speed min"
            float m_flSpeedMin; // 0x_            
            // metadata: MPropertyFriendlyName "speed max"
            float m_flSpeedMax; // 0x_            
            // metadata: MPropertyFriendlyName "relative control point number"
            std::int32_t m_nBaseCP; // 0x_            
            // metadata: MPropertyFriendlyName "uniform speed"
            bool m_bUniformSpeed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_ChaoticAttractor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_ChaoticAttractor) == 0x_);
    };
};
