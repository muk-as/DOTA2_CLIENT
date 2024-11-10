#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x648
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_EmberSpirit_Activate_FireRemnant : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_nProjectileID; // 0x600        
        Vector m_vStartLocation; // 0x604        
        Vector m_vProjectileLocation; // 0x610        
        QAngle m_ProjectileAngles; // 0x61c        
        // m_hRemnantToKill has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRemnantToKill;
        char m_hRemnantToKill[0x4]; // 0x628        
        bool m_bProjectileStarted; // 0x62c        
        [[maybe_unused]] std::uint8_t pad_0x62d[0x3]; // 0x62d
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_EmberSpirit_Activate_FireRemnant because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_EmberSpirit_Activate_FireRemnant) == 0x648);
};
