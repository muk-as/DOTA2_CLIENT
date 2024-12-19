#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1ed0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Skywrath_Mage : public server::CDOTA_BaseNPC_Hero
    {
    public:
        bool m_bArcanaEquipped; // 0x1ec8        
        [[maybe_unused]] std::uint8_t pad_0x1ec9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Skywrath_Mage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Skywrath_Mage) == 0x1ed0);
};
