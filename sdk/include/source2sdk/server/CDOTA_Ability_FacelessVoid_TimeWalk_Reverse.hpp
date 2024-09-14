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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_FacelessVoid_TimeWalk_Reverse : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        int32_t speed; // 0x5b0        
        int32_t m_nProjectileID; // 0x5b4        
        Vector m_vProjectileLocation; // 0x5b8        
        Vector m_vStartLocation; // 0x5c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_FacelessVoid_TimeWalk_Reverse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_FacelessVoid_TimeWalk_Reverse) == 0x5d0);
};
