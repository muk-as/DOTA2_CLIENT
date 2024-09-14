#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDotaParticleRelay : public server::CBaseEntity
    {
    public:
        CUtlSymbolLarge m_particleSystemName; // 0x4b8        
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputStopImmediate; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDotaParticleRelay because it is not a standard-layout class
    static_assert(sizeof(CDotaParticleRelay) == 0x4c0);
};
