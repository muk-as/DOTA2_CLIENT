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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        Vector m_vProjectileLocation; // 0x5b0        
        float hook_speed; // 0x5bc        
        int32_t hook_width; // 0x5c0        
        int32_t hook_distance; // 0x5c4        
        bool m_bRetracting; // 0x5c8        
        bool m_bDiedInHook; // 0x5c9        
        [[maybe_unused]] std::uint8_t pad_0x5ca[0x2]; // 0x5ca
        // m_hVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hVictim;
        char m_hVictim[0x4]; // 0x5cc        
        Vector m_vTargetPosition; // 0x5d0        
        Vector m_vCasterPosition; // 0x5dc        
        bool m_bChainDetached; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x3]; // 0x5e9
        client::ParticleIndex_t m_iChainParticle; // 0x5ec        
        int32_t m_iHookParticle; // 0x5f0        
        int32_t m_nManaCost; // 0x5f4        
        // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSourceCaster;
        char m_hSourceCaster[0x4]; // 0x5f8        
        client::ParticleIndex_t m_nPreviewFX; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon) == 0x600);
};
