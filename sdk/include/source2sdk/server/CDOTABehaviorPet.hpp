#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABehaviorCompanion.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/PetCoopStates_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x2e8
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorPet : public server::CDOTABehaviorCompanion
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x178[0x10]; // 0x178
        float m_flThreatLevel; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x18c[0x4]; // 0x18c
        server::CountdownTimer m_ThreatTimer; // 0x190        
        server::CountdownTimer m_StuckTimer; // 0x1a8        
        bool m_bHasVanished; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c1[0x7]; // 0x1c1
        server::CountdownTimer m_VanishOnThreatTimer; // 0x1c8        
        Vector m_vecFleeCurrentTarget; // 0x1e0        
        Vector m_vecFleeDirection; // 0x1ec        
        Vector m_vecOldFleeDirection; // 0x1f8        
        [[maybe_unused]] std::uint8_t pad_0x204[0x4]; // 0x204
        server::CountdownTimer m_FleePersistTimer; // 0x208        
        server::CountdownTimer m_CombatRepositionTimer; // 0x220        
        // m_hNearestEnemyHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hNearestEnemyHero;
        char m_hNearestEnemyHero[0x4]; // 0x238        
        entity2::GameTime_t m_flLastInWater; // 0x23c        
        Vector m_vecHomeBasePosition; // 0x240        
        bool m_bReturnToBase; // 0x24c        
        [[maybe_unused]] std::uint8_t pad_0x24d[0x3]; // 0x24d
        server::CountdownTimer m_ReturnToBaseTimer; // 0x250        
        server::PetCoopStates_t m_nCoopTeleportState; // 0x268        
        [[maybe_unused]] std::uint8_t pad_0x26c[0x4]; // 0x26c
        server::CountdownTimer m_CarryItemTimer; // 0x270        
        server::CountdownTimer m_PickupDelayTimer; // 0x288        
        server::CountdownTimer m_LevelupCheckTimer; // 0x2a0        
        bool m_bIsEmoting; // 0x2b8        
        [[maybe_unused]] std::uint8_t pad_0x2b9[0x3]; // 0x2b9
        // m_hEmoteTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hEmoteTarget;
        char m_hEmoteTarget[0x4]; // 0x2bc        
        server::CountdownTimer m_EmoteTimer; // 0x2c0        
        int32_t m_nEmoteActivity; // 0x2d8        
        // m_tempGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_tempGoalEntity;
        char m_tempGoalEntity[0x4]; // 0x2dc        
        bool m_bFollowingTempGoal; // 0x2e0        
        [[maybe_unused]] std::uint8_t pad_0x2e1[0x3]; // 0x2e1
        int32_t m_event_dota_illusions_created; // 0x2e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTABehaviorPet because it is not a standard-layout class
    static_assert(sizeof(CDOTABehaviorPet) == 0x2e8);
};
