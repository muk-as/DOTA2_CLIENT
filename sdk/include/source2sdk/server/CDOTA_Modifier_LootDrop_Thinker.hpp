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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LootDrop_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAutoPickup; // 0x_            
            bool m_bOnlyPlayerHeroPickup; // 0x_            
            bool m_bCreepHeroPickup; // 0x_            
            bool m_bAutoUse; // 0x_            
            bool m_bFlying; // 0x_            
            bool m_bUseSpawnAnim; // 0x_            
            bool m_bAutoTeleport; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flKnockbackStartTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flKnockbackEndTime; // 0x_            
            float m_flKnockbackHeight; // 0x_            
            float m_flInitialHeight; // 0x_            
            float m_flKnockbackDuration; // 0x_            
            float m_flEndHeight; // 0x_            
            Vector m_vStartPos; // 0x_            
            Vector m_vEndPos; // 0x_            
            float m_fPickupRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strTransitionEffect; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LootDrop_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LootDrop_Thinker) == 0x_);
    };
};
