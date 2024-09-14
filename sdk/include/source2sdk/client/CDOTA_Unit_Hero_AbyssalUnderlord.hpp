#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1b90
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_AbyssalUnderlord : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_iRangeFX; // 0x1b88        
        [[maybe_unused]] std::uint8_t pad_0x1b8c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_AbyssalUnderlord because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_AbyssalUnderlord) == 0x1b90);
};
