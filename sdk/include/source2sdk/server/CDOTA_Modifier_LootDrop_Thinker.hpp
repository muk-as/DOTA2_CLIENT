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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LootDrop_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAutoPickup; // 0x17f8            
            bool m_bOnlyPlayerHeroPickup; // 0x17f9            
            bool m_bCreepHeroPickup; // 0x17fa            
            bool m_bAutoUse; // 0x17fb            
            bool m_bFlying; // 0x17fc            
            bool m_bUseSpawnAnim; // 0x17fd            
            bool m_bAutoTeleport; // 0x17fe            
            uint8_t _pad17ff[0x1]; // 0x17ff
            source2sdk::entity2::GameTime_t m_flKnockbackStartTime; // 0x1800            
            source2sdk::entity2::GameTime_t m_flKnockbackEndTime; // 0x1804            
            float m_flKnockbackHeight; // 0x1808            
            float m_flInitialHeight; // 0x180c            
            float m_flKnockbackDuration; // 0x1810            
            float m_flEndHeight; // 0x1814            
            Vector m_vStartPos; // 0x1818            
            Vector m_vEndPos; // 0x1824            
            float m_fPickupRadius; // 0x1830            
            uint8_t _pad1834[0x4]; // 0x1834
            CUtlString m_strTransitionEffect; // 0x1838            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LootDrop_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LootDrop_Thinker) == 0x1840);
    };
};
