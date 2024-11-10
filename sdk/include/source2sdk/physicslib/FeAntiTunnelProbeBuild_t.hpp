#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeAntiTunnelProbeBuild_t
    {
    public:
        float flWeight; // 0x0        
        float flActivationDistance; // 0x4        
        float flBias; // 0x8        
        float flCurvature; // 0xc        
        uint32_t nFlags; // 0x10        
        uint16_t nProbeNode; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2]; // 0x16
        // targetNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> targetNodes;
        char targetNodes[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeAntiTunnelProbeBuild_t, flWeight) == 0x0);
    static_assert(offsetof(FeAntiTunnelProbeBuild_t, flActivationDistance) == 0x4);
    static_assert(offsetof(FeAntiTunnelProbeBuild_t, flBias) == 0x8);
    static_assert(offsetof(FeAntiTunnelProbeBuild_t, flCurvature) == 0xc);
    static_assert(offsetof(FeAntiTunnelProbeBuild_t, nFlags) == 0x10);
    static_assert(offsetof(FeAntiTunnelProbeBuild_t, nProbeNode) == 0x14);
    static_assert(offsetof(FeAntiTunnelProbeBuild_t, targetNodes) == 0x18);
    
    static_assert(sizeof(FeAntiTunnelProbeBuild_t) == 0x30);
};
