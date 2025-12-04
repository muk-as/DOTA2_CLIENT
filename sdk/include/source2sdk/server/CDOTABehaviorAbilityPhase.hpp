#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorAbilityPhase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_abilityTimer; // 0x_            
            source2sdk::server::CountdownTimer m_backSwingTimer; // 0x_            
            bool m_bBackswinging; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAbility;
            char m_hAbility[0x_]; // 0x_            
            bool m_bActionLocked; // 0x_            
            bool m_bTargetTeleported; // 0x_            
            bool m_bOriginalTargetTeleported; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAbilityPhase, m_abilityTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAbilityPhase, m_backSwingTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAbilityPhase, m_bBackswinging) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAbilityPhase, m_hAbility) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAbilityPhase, m_bActionLocked) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAbilityPhase, m_bTargetTeleported) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAbilityPhase, m_bOriginalTargetTeleported) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorAbilityPhase) == 0x_);
    };
};
