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
    // Size: 0x660
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
    #pragma pack(push, 1)
    class CDOTA_Ability_Pudge_MeatHook : public server::CDOTABaseAbility
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
        client::ParticleIndex_t m_iSecondaryChainParticle; // 0x5f0        
        int32_t m_hHookProjectile; // 0x5f4        
        int32_t m_nManaCost; // 0x5f8        
        // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSourceCaster;
        char m_hSourceCaster[0x4]; // 0x5fc        
        int32_t m_nNextConsecutiveHitCount; // 0x600        
        Vector m_vEndpoint; // 0x604        
        // metadata: MNetworkEnable
        int32_t m_nConsecutiveHits; // 0x610        
        bool m_bIsVectorTargeted; // 0x614        
        [[maybe_unused]] std::uint8_t pad_0x615[0x3]; // 0x615
        Vector m_vTurnLocation; // 0x618        
        Vector m_vDirectionAfterTurn; // 0x624        
        bool m_bHasTurned; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x631[0x3]; // 0x631
        float m_flDistanceAfterTurn; // 0x634        
        Vector m_vFinalPosition; // 0x638        
        float reveal_duration; // 0x644        
        int32_t curve_hook; // 0x648        
        float curve_hook_turn_rate; // 0x64c        
        int32_t curve_hook_debug; // 0x650        
        float m_fTimeRemaining; // 0x654        
        float m_flFacingTarget; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x65c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Pudge_MeatHook) == 0x660);
};
