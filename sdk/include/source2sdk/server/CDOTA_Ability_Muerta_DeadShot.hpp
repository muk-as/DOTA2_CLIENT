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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Muerta_DeadShot : public server::CDOTABaseAbility
    {
    public:
        int32_t radius; // 0x5c8        
        int32_t ricochet_radius_start; // 0x5cc        
        int32_t ricochet_radius_end; // 0x5d0        
        int32_t speed; // 0x5d4        
        Vector m_vTargetPos; // 0x5d8        
        Vector m_vEndpoint; // 0x5e4        
        // m_hTreeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTreeTarget;
        char m_hTreeTarget[0x4]; // 0x5f0        
        Vector m_vRicochetDir; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x600[0x8]; // 0x600
        // m_vEnemyHeroVisibilityOnCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vEnemyHeroVisibilityOnCast;
        char m_vEnemyHeroVisibilityOnCast[0x18]; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Muerta_DeadShot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Muerta_DeadShot) == 0x620);
};
