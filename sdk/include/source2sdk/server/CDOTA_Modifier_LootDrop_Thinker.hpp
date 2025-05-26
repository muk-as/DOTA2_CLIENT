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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LootDrop_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAutoPickup; // 0x1878            
            bool m_bOnlyPlayerHeroPickup; // 0x1879            
            bool m_bCreepHeroPickup; // 0x187a            
            bool m_bAutoUse; // 0x187b            
            bool m_bFlying; // 0x187c            
            bool m_bUseSpawnAnim; // 0x187d            
            bool m_bAutoTeleport; // 0x187e            
            uint8_t _pad187f[0x1]; // 0x187f
            source2sdk::entity2::GameTime_t m_flKnockbackStartTime; // 0x1880            
            source2sdk::entity2::GameTime_t m_flKnockbackEndTime; // 0x1884            
            float m_flKnockbackHeight; // 0x1888            
            float m_flInitialHeight; // 0x188c            
            float m_flKnockbackDuration; // 0x1890            
            float m_flEndHeight; // 0x1894            
            Vector m_vStartPos; // 0x1898            
            Vector m_vEndPos; // 0x18a4            
            float m_fPickupRadius; // 0x18b0            
            uint8_t _pad18b4[0x4]; // 0x18b4
            CUtlString m_strTransitionEffect; // 0x18b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LootDrop_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LootDrop_Thinker) == 0x18c0);
    };
};
