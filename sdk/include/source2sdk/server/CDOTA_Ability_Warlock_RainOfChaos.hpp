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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Warlock_RainOfChaos : public server::CDOTABaseAbility
    {
    public:
        int32_t aoe; // 0x5c8        
        bool m_bHasScepter; // 0x5cc        
        [[maybe_unused]] std::uint8_t pad_0x5cd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Warlock_RainOfChaos because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Warlock_RainOfChaos) == 0x5d0);
};
