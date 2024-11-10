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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Pangolier_Swashbuckle : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x10]; // 0x5c8
        int32_t dash_speed; // 0x5d8        
        int32_t start_radius; // 0x5dc        
        int32_t end_radius; // 0x5e0        
        int32_t range; // 0x5e4        
        int32_t damage; // 0x5e8        
        int32_t attack_damage; // 0x5ec        
        int32_t procs_onhit_effects; // 0x5f0        
        Vector m_vDashPosition; // 0x5f4        
        Vector m_vFacePosition; // 0x600        
        Vector m_vEndpoint; // 0x60c        
        Vector m_vSlashDir; // 0x618        
        int32_t m_nDashProjectileID; // 0x624        
        Vector m_vDashProjectileLocation; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Pangolier_Swashbuckle) == 0x638);
};
