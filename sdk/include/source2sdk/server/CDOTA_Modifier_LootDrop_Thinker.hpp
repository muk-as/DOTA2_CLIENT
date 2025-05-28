#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LootDrop_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAutoPickup; // 0x1888            
            bool m_bOnlyPlayerHeroPickup; // 0x1889            
            bool m_bCreepHeroPickup; // 0x188a            
            bool m_bAutoUse; // 0x188b            
            bool m_bFlying; // 0x188c            
            bool m_bUseSpawnAnim; // 0x188d            
            bool m_bAutoTeleport; // 0x188e            
            uint8_t _pad188f[0x1]; // 0x188f
            source2sdk::entity2::GameTime_t m_flKnockbackStartTime; // 0x1890            
            source2sdk::entity2::GameTime_t m_flKnockbackEndTime; // 0x1894            
            float m_flKnockbackHeight; // 0x1898            
            float m_flInitialHeight; // 0x189c            
            float m_flKnockbackDuration; // 0x18a0            
            float m_flEndHeight; // 0x18a4            
            Vector m_vStartPos; // 0x18a8            
            Vector m_vEndPos; // 0x18b4            
            float m_fPickupRadius; // 0x18c0            
            uint8_t _pad18c4[0x4]; // 0x18c4
            CUtlString m_strTransitionEffect; // 0x18c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LootDrop_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LootDrop_Thinker) == 0x18d0);
    };
};
