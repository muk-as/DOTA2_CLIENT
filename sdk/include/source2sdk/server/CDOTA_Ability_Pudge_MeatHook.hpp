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
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
    #pragma pack(push, 1)
    class CDOTA_Ability_Pudge_MeatHook : public server::CDOTABaseAbility
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
        client::ParticleIndex_t m_iSecondaryChainParticle; // 0x618        
        int32_t m_hHookProjectile; // 0x61c        
        int32_t m_nManaCost; // 0x620        
        // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSourceCaster;
        char m_hSourceCaster[0x4]; // 0x624        
        int32_t m_nNextConsecutiveHitCount; // 0x628        
        Vector m_vEndpoint; // 0x62c        
        // metadata: MNetworkEnable
        int32_t m_nConsecutiveHits; // 0x638        
        bool m_bIsVectorTargeted; // 0x63c        
        [[maybe_unused]] std::uint8_t pad_0x63d[0x3]; // 0x63d
        Vector m_vTurnLocation; // 0x640        
        Vector m_vDirectionAfterTurn; // 0x64c        
        bool m_bHasTurned; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x659[0x3]; // 0x659
        float m_flDistanceAfterTurn; // 0x65c        
        Vector m_vFinalPosition; // 0x660        
        float reveal_duration; // 0x66c        
        int32_t curve_hook; // 0x670        
        float curve_hook_turn_rate; // 0x674        
        int32_t curve_hook_debug; // 0x678        
        float m_fTimeRemaining; // 0x67c        
        float m_flFacingTarget; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Pudge_MeatHook) == 0x688);
};
