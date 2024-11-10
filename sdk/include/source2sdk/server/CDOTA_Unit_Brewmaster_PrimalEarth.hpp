#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
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
    // Size: 0x1868
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_Brewmaster_PrimalEarth : public server::CDOTA_BaseNPC_Creep
    {
    public:
        client::ParticleIndex_t m_nFXEarthAmbient1; // 0x1860        
        client::ParticleIndex_t m_nFXEarthAmbient2; // 0x1864        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Brewmaster_PrimalEarth because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Brewmaster_PrimalEarth) == 0x1868);
};
