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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_EmberSpirit_Activate_FireRemnant : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        int32_t m_nProjectileID; // 0x5b0        
        Vector m_vStartLocation; // 0x5b4        
        Vector m_vProjectileLocation; // 0x5c0        
        QAngle m_ProjectileAngles; // 0x5cc        
        // m_hRemnantToKill has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRemnantToKill;
        char m_hRemnantToKill[0x4]; // 0x5d8        
        bool m_bProjectileStarted; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5dd[0x3]; // 0x5dd
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x5e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EmberSpirit_Activate_FireRemnant because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EmberSpirit_Activate_FireRemnant) == 0x5f8);
};
