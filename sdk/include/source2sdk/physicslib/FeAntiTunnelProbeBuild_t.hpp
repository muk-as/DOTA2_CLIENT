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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeAntiTunnelProbeBuild_t
        {
        public:
            float flWeight; // 0x_            
            float flActivationDistance; // 0x_            
            float flBias; // 0x_            
            float flCurvature; // 0x_            
            std::uint32_t nFlags; // 0x_            
            std::uint16_t nProbeNode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // targetNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> targetNodes;
            char targetNodes[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t, flWeight) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t, flActivationDistance) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t, flBias) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t, flCurvature) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t, nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t, nProbeNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t, targetNodes) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeAntiTunnelProbeBuild_t) == 0x_);
    };
};
