#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Tower.hpp"
#include "source2sdk/client/DOTA_HOLDOUT_TOWER_TYPE.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ae8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_HoldoutTower : public source2sdk::client::C_DOTA_BaseNPC_Tower
        {
        public:
            source2sdk::client::DOTA_HOLDOUT_TOWER_TYPE m_iTowerType; // 0x1ae0            
            uint8_t _pad1ae4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_HoldoutTower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_HoldoutTower) == 0x1ae8);
    };
};
