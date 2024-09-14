#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Tower.hpp"
#include "source2sdk/client/DOTA_HOLDOUT_TOWER_TYPE.hpp"
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
    // Size: 0x18e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_HoldoutTower : public client::C_DOTA_BaseNPC_Tower
    {
    public:
        client::DOTA_HOLDOUT_TOWER_TYPE m_iTowerType; // 0x18e0        
        [[maybe_unused]] std::uint8_t pad_0x18e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_HoldoutTower because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_HoldoutTower) == 0x18e8);
};
