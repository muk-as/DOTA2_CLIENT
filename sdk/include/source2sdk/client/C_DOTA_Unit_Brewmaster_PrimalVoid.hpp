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
    class C_DOTA_Unit_Brewmaster_PrimalVoid : public client::C_DOTA_BaseNPC_Creep
    {
    public:
        client::ParticleIndex_t m_nFXAmbient; // 0x1808        
        [[maybe_unused]] std::uint8_t pad_0x180c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Brewmaster_PrimalVoid because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Brewmaster_PrimalVoid) == 0x1810);
};
