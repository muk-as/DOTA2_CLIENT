#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x10]; // 0x5c8
        Vector m_vProjectileLocation; // 0x5d8        
        float hook_speed; // 0x5e4        
        int32_t hook_width; // 0x5e8        
        int32_t hook_distance; // 0x5ec        
        bool m_bRetracting; // 0x5f0        
        bool m_bDiedInHook; // 0x5f1        
        [[maybe_unused]] std::uint8_t pad_0x5f2[0x2]; // 0x5f2
        // m_hVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hVictim;
        char m_hVictim[0x4]; // 0x5f4        
        Vector m_vTargetPosition; // 0x5f8        
        Vector m_vCasterPosition; // 0x604        
        bool m_bChainDetached; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x611[0x3]; // 0x611
        client::ParticleIndex_t m_iChainParticle; // 0x614        
        int32_t m_iHookParticle; // 0x618        
        int32_t m_nManaCost; // 0x61c        
        // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSourceCaster;
        char m_hSourceCaster[0x4]; // 0x620        
        client::ParticleIndex_t m_nPreviewFX; // 0x624        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon) == 0x628);
};
