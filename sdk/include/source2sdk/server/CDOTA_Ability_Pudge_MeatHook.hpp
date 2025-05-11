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
        // Size: 0x678
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
        #pragma pack(push, 1)
        class CDOTA_Ability_Pudge_MeatHook : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05b8[0x10]; // 0x5b8
            Vector m_vProjectileLocation; // 0x5c8            
            float hook_speed; // 0x5d4            
            std::int32_t hook_width; // 0x5d8            
            std::int32_t hook_distance; // 0x5dc            
            bool m_bRetracting; // 0x5e0            
            bool m_bDiedInHook; // 0x5e1            
            uint8_t _pad05e2[0x2]; // 0x5e2
            // m_hVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVictim;
            char m_hVictim[0x4]; // 0x5e4            
            Vector m_vTargetPosition; // 0x5e8            
            Vector m_vCasterPosition; // 0x5f4            
            bool m_bChainDetached; // 0x600            
            uint8_t _pad0601[0x3]; // 0x601
            source2sdk::client::ParticleIndex_t m_iChainParticle; // 0x604            
            source2sdk::client::ParticleIndex_t m_iSecondaryChainParticle; // 0x608            
            std::int32_t m_hHookProjectile; // 0x60c            
            std::int32_t m_nManaCost; // 0x610            
            // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSourceCaster;
            char m_hSourceCaster[0x4]; // 0x614            
            std::int32_t m_nNextConsecutiveHitCount; // 0x618            
            Vector m_vEndpoint; // 0x61c            
            // metadata: MNetworkEnable
            std::int32_t m_nConsecutiveHits; // 0x628            
            bool m_bIsVectorTargeted; // 0x62c            
            uint8_t _pad062d[0x3]; // 0x62d
            Vector m_vTurnLocation; // 0x630            
            Vector m_vDirectionAfterTurn; // 0x63c            
            bool m_bHasTurned; // 0x648            
            uint8_t _pad0649[0x3]; // 0x649
            float m_flDistanceAfterTurn; // 0x64c            
            Vector m_vFinalPosition; // 0x650            
            float reveal_duration; // 0x65c            
            std::int32_t curve_hook; // 0x660            
            float curve_hook_turn_rate; // 0x664            
            std::int32_t curve_hook_debug; // 0x668            
            float m_fTimeRemaining; // 0x66c            
            float m_flFacingTarget; // 0x670            
            uint8_t _pad0674[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Pudge_MeatHook) == 0x678);
    };
};
