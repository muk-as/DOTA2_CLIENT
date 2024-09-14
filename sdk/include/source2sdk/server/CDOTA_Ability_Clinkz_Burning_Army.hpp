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
    class CDOTA_Ability_Clinkz_Burning_Army : public server::CDOTABaseAbility
    {
    public:
        int32_t range; // 0x5a0        
        Vector m_vEndpoint; // 0x5a4        
        Vector m_vSlashDir; // 0x5b0        
        int32_t m_nDashProjectileID; // 0x5bc        
        Vector m_vDashProjectileLocation; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Clinkz_Burning_Army because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Clinkz_Burning_Army) == 0x5d0);
};
