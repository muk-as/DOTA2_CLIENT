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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorLargoFrogling : public source2sdk::server::CDOTABehaviorCompanion
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flThreatLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_ThreatTimer; // 0x_            
            source2sdk::server::CountdownTimer m_StuckTimer; // 0x_            
            bool m_bHasVanished; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_VanishOnThreatTimer; // 0x_            
            Vector m_vecFleeCurrentTarget; // 0x_            
            Vector m_vecFleeDirection; // 0x_            
            Vector m_vecOldFleeDirection; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_FleePersistTimer; // 0x_            
            source2sdk::server::CountdownTimer m_CombatRepositionTimer; // 0x_            
            // m_hNearestEnemyHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hNearestEnemyHero;
            char m_hNearestEnemyHero[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastInWater; // 0x_            
            Vector m_vecHomeBasePosition; // 0x_            
            bool m_bReturnToBase; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_ReturnToBaseTimer; // 0x_            
            source2sdk::server::PetCoopStates_t m_nCoopTeleportState; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_CarryItemTimer; // 0x_            
            source2sdk::server::CountdownTimer m_PickupDelayTimer; // 0x_            
            source2sdk::server::CountdownTimer m_LevelupCheckTimer; // 0x_            
            bool m_bIsEmoting; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hEmoteTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hEmoteTarget;
            char m_hEmoteTarget[0x_]; // 0x_            
            source2sdk::server::CountdownTimer m_EmoteTimer; // 0x_            
            std::int32_t m_nEmoteActivity; // 0x_            
            // m_tempGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_tempGoalEntity;
            char m_tempGoalEntity[0x_]; // 0x_            
            bool m_bFollowingTempGoal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_event_dota_illusions_created; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABehaviorLargoFrogling because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorLargoFrogling) == 0x_);
    };
};
