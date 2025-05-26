#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x680
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
        #pragma pack(push, 1)
        class CDOTA_Ability_Pudge_MeatHook : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            Vector m_vProjectileLocation; // 0x5d0            
            float hook_speed; // 0x5dc            
            std::int32_t hook_width; // 0x5e0            
            std::int32_t hook_distance; // 0x5e4            
            bool m_bRetracting; // 0x5e8            
            bool m_bDiedInHook; // 0x5e9            
            uint8_t _pad05ea[0x2]; // 0x5ea
            // m_hVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVictim;
            char m_hVictim[0x4]; // 0x5ec            
            Vector m_vTargetPosition; // 0x5f0            
            Vector m_vCasterPosition; // 0x5fc            
            bool m_bChainDetached; // 0x608            
            uint8_t _pad0609[0x3]; // 0x609
            source2sdk::client::ParticleIndex_t m_iChainParticle; // 0x60c            
            source2sdk::client::ParticleIndex_t m_iSecondaryChainParticle; // 0x610            
            std::int32_t m_hHookProjectile; // 0x614            
            std::int32_t m_nManaCost; // 0x618            
            // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSourceCaster;
            char m_hSourceCaster[0x4]; // 0x61c            
            std::int32_t m_nNextConsecutiveHitCount; // 0x620            
            Vector m_vEndpoint; // 0x624            
            // metadata: MNetworkEnable
            std::int32_t m_nConsecutiveHits; // 0x630            
            bool m_bIsVectorTargeted; // 0x634            
            uint8_t _pad0635[0x3]; // 0x635
            Vector m_vTurnLocation; // 0x638            
            Vector m_vDirectionAfterTurn; // 0x644            
            bool m_bHasTurned; // 0x650            
            uint8_t _pad0651[0x3]; // 0x651
            float m_flDistanceAfterTurn; // 0x654            
            Vector m_vFinalPosition; // 0x658            
            float reveal_duration; // 0x664            
            std::int32_t curve_hook; // 0x668            
            float curve_hook_turn_rate; // 0x66c            
            std::int32_t curve_hook_debug; // 0x670            
            float m_fTimeRemaining; // 0x674            
            float m_flFacingTarget; // 0x678            
            uint8_t _pad067c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Pudge_MeatHook) == 0x680);
    };
};
