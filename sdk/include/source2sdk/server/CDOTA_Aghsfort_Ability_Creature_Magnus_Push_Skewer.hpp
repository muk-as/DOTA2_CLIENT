#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer : public server::CDOTABaseAbility
    {
    public:
        float skewer_radius; // 0x5a0        
        float skewer_speed; // 0x5a4        
        float range; // 0x5a8        
        int32_t tree_radius; // 0x5ac        
        int32_t m_nProjectileID; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer) == 0x5b8);
};
