#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABehaviorCompanion.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/PetCoopStates_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x300
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorPet : public source2sdk::server::CDOTABehaviorCompanion
        {
        public:
            uint8_t _pad0178[0x10]; // 0x178
            float m_flThreatLevel; // 0x188            
            uint8_t _pad018c[0x4]; // 0x18c
            source2sdk::server::CountdownTimer m_ThreatTimer; // 0x190            
            source2sdk::server::CountdownTimer m_StuckTimer; // 0x1a8            
            bool m_bHasVanished; // 0x1c0            
            uint8_t _pad01c1[0x7]; // 0x1c1
            source2sdk::server::CountdownTimer m_VanishOnThreatTimer; // 0x1c8            
            Vector m_vecFleeCurrentTarget; // 0x1e0            
            Vector m_vecFleeDirection; // 0x1ec            
            Vector m_vecOldFleeDirection; // 0x1f8            
            uint8_t _pad0204[0x4]; // 0x204
            source2sdk::server::CountdownTimer m_FleePersistTimer; // 0x208            
            source2sdk::server::CountdownTimer m_CombatRepositionTimer; // 0x220            
            // m_hNearestEnemyHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hNearestEnemyHero;
            char m_hNearestEnemyHero[0x4]; // 0x238            
            source2sdk::entity2::GameTime_t m_flLastInWater; // 0x23c            
            Vector m_vecHomeBasePosition; // 0x240            
            bool m_bReturnToBase; // 0x24c            
            uint8_t _pad024d[0x3]; // 0x24d
            source2sdk::server::CountdownTimer m_ReturnToBaseTimer; // 0x250            
            source2sdk::server::PetCoopStates_t m_nCoopTeleportState; // 0x268            
            uint8_t _pad026c[0x4]; // 0x26c
            source2sdk::server::CountdownTimer m_CarryItemTimer; // 0x270            
            source2sdk::server::CountdownTimer m_PickupDelayTimer; // 0x288            
            source2sdk::server::CountdownTimer m_LevelupCheckTimer; // 0x2a0            
            source2sdk::server::CountdownTimer m_RareIdleTimer; // 0x2b8            
            bool m_bIsEmoting; // 0x2d0            
            uint8_t _pad02d1[0x3]; // 0x2d1
            // m_hEmoteTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hEmoteTarget;
            char m_hEmoteTarget[0x4]; // 0x2d4            
            source2sdk::server::CountdownTimer m_EmoteTimer; // 0x2d8            
            std::int32_t m_nEmoteActivity; // 0x2f0            
            // m_tempGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_tempGoalEntity;
            char m_tempGoalEntity[0x4]; // 0x2f4            
            bool m_bFollowingTempGoal; // 0x2f8            
            uint8_t _pad02f9[0x3]; // 0x2f9
            std::int32_t m_event_dota_illusions_created; // 0x2fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABehaviorPet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorPet) == 0x300);
    };
};
