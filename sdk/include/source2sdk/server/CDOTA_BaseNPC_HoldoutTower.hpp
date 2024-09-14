#pragma once
#include "source2sdk/client/DOTA_HOLDOUT_TOWER_TYPE.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Tower.hpp"
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
    // Size: 0x1960
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_HoldoutTower : public server::CDOTA_BaseNPC_Tower
    {
    public:
        client::DOTA_HOLDOUT_TOWER_TYPE m_iTowerType; // 0x1958        
        [[maybe_unused]] std::uint8_t pad_0x195c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_HoldoutTower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_HoldoutTower) == 0x1960);
};
