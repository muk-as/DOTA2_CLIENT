#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Creep.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1810
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Unit_Brewmaster_PrimalStorm : public client::C_DOTA_BaseNPC_Creep
    {
    public:
        client::ParticleIndex_t m_nFXStormAmbient1; // 0x1808        
        client::ParticleIndex_t m_nFXStormAmbient2; // 0x180c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Brewmaster_PrimalStorm because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Brewmaster_PrimalStorm) == 0x1810);
};
