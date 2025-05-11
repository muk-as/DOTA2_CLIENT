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
        // Size: 0x618
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon : public source2sdk::server::CDOTABaseAbility
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
            std::int32_t m_iHookParticle; // 0x608            
            std::int32_t m_nManaCost; // 0x60c            
            // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSourceCaster;
            char m_hSourceCaster[0x4]; // 0x610            
            source2sdk::client::ParticleIndex_t m_nPreviewFX; // 0x614            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon) == 0x618);
    };
};
