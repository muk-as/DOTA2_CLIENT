#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeAntiTunnelProbe_t
        {
        public:
            float flWeight; // 0x_            
            std::uint32_t nFlags; // 0x_            
            std::uint16_t nProbeNode; // 0x_            
            std::uint16_t nCount; // 0x_            
            std::uint32_t nBegin; // 0x_            
            float flActivationDistance; // 0x_            
            float flCurvatureRadius; // 0x_            
            float flBias; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, flWeight) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, nProbeNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, nCount) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, nBegin) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, flActivationDistance) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, flCurvatureRadius) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbe_t, flBias) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeAntiTunnelProbe_t) == 0x_);
    };
};
