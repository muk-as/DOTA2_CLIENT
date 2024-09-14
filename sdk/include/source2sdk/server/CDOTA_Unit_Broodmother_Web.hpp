#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    // Size: 0x1820
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Broodmother_Web : public server::CDOTA_BaseNPC_Additive
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1810        
        Vector m_vecOrigin; // 0x1814        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Broodmother_Web because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Broodmother_Web) == 0x1820);
};
