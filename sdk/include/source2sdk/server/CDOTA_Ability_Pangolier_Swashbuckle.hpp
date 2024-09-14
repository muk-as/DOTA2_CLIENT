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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Pangolier_Swashbuckle : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        int32_t dash_speed; // 0x5b0        
        int32_t start_radius; // 0x5b4        
        int32_t end_radius; // 0x5b8        
        int32_t range; // 0x5bc        
        int32_t damage; // 0x5c0        
        int32_t attack_damage; // 0x5c4        
        int32_t procs_onhit_effects; // 0x5c8        
        Vector m_vDashPosition; // 0x5cc        
        Vector m_vFacePosition; // 0x5d8        
        Vector m_vEndpoint; // 0x5e4        
        Vector m_vSlashDir; // 0x5f0        
        int32_t m_nDashProjectileID; // 0x5fc        
        Vector m_vDashProjectileLocation; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Pangolier_Swashbuckle) == 0x610);
};
