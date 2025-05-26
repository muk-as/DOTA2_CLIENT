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
        // Size: 0x620
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_TrapRoom_MeatHook : public source2sdk::server::CDOTABaseAbility
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
            std::int32_t m_iHookParticle; // 0x610            
            std::int32_t m_nManaCost; // 0x614            
            // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSourceCaster;
            char m_hSourceCaster[0x4]; // 0x618            
            std::int32_t m_nNextConsecutiveHitCount; // 0x61c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_TrapRoom_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_AghsFort_TrapRoom_MeatHook) == 0x620);
    };
};
