#pragma once
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xa0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorAbilityPhase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x60]; // 0x0
        server::CountdownTimer m_abilityTimer; // 0x60        
        server::CountdownTimer m_backSwingTimer; // 0x78        
        bool m_bBackswinging; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x91[0x3]; // 0x91
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbility;
        char m_hAbility[0x4]; // 0x94        
        bool m_bActionLocked; // 0x98        
        bool m_bTargetTeleported; // 0x99        
        bool m_bOriginalTargetTeleported; // 0x9a        
        [[maybe_unused]] std::uint8_t pad_0x9b[0x5];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorAbilityPhase, m_abilityTimer) == 0x60);
    static_assert(offsetof(CDOTABehaviorAbilityPhase, m_backSwingTimer) == 0x78);
    static_assert(offsetof(CDOTABehaviorAbilityPhase, m_bBackswinging) == 0x90);
    static_assert(offsetof(CDOTABehaviorAbilityPhase, m_hAbility) == 0x94);
    static_assert(offsetof(CDOTABehaviorAbilityPhase, m_bActionLocked) == 0x98);
    static_assert(offsetof(CDOTABehaviorAbilityPhase, m_bTargetTeleported) == 0x99);
    static_assert(offsetof(CDOTABehaviorAbilityPhase, m_bOriginalTargetTeleported) == 0x9a);
    
    static_assert(sizeof(CDOTABehaviorAbilityPhase) == 0xa0);
};
