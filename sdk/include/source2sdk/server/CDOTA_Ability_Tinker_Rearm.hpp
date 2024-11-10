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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Tinker_Rearm : public server::CDOTABaseAbility
    {
    public:
        Vector m_vProjectileLocation; // 0x5c8        
        bool affects_items; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tinker_Rearm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tinker_Rearm) == 0x5d8);
};
