#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EPlayerTrackedStatImpl.hpp"
#include "source2sdk/client/TrackedStatCombatQueryData_t.hpp"
#include "source2sdk/client/TrackedStatExpressionData_t.hpp"
#include "source2sdk/client/TrackedStatHeroAdjectiveData_t.hpp"
#include "source2sdk/client/TrackedStatID_t.hpp"
#include "source2sdk/client/TrackedStatKillEaterData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CPlayerTrackedStatDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "unique integer ID of this stat"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_player_stat_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::TrackedStatID_t m_unStatID; // 0x8            
            // metadata: MPropertyDescription "how this stat is implemented"
            source2sdk::client::EPlayerTrackedStatImpl m_eStatImpl; // 0xc            
            // metadata: MPropertyDescription "For k_ePlayerTrackedStatImpl_KillEater, what is the kill eater information."
            // metadata: MPropertySuppressExpr "m_eStatImpl != k_ePlayerTrackedStatImpl_KillEater"
            source2sdk::client::TrackedStatKillEaterData_t m_killEaterData; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            // metadata: MPropertyDescription "For k_ePlayerTrackedStatImpl_CombatQuery, what is the combat query information."
            // metadata: MPropertySuppressExpr "m_eStatImpl != k_ePlayerTrackedStatImpl_CombatQuery"
            source2sdk::client::TrackedStatCombatQueryData_t m_combatQueryData; // 0x18            
            // metadata: MPropertyDescription "For k_ePlayerTrackedStatImpl_Expression, what is the expression information."
            // metadata: MPropertySuppressExpr "m_eStatImpl != k_ePlayerTrackedStatImpl_Expression"
            source2sdk::client::TrackedStatExpressionData_t m_expressionData; // 0x20            
            // metadata: MPropertyDescription "For k_ePlayerTrackedStatImpl_HeroAdjective, what is the adjective information."
            // metadata: MPropertySuppressExpr "m_eStatImpl != k_ePlayerTrackedStatImpl_HeroAdjective"
            source2sdk::client::TrackedStatHeroAdjectiveData_t m_heroAdjectiveData; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CPlayerTrackedStatDefinition, m_unStatID) == 0x8);
        static_assert(offsetof(source2sdk::client::CPlayerTrackedStatDefinition, m_eStatImpl) == 0xc);
        static_assert(offsetof(source2sdk::client::CPlayerTrackedStatDefinition, m_killEaterData) == 0x10);
        static_assert(offsetof(source2sdk::client::CPlayerTrackedStatDefinition, m_combatQueryData) == 0x18);
        static_assert(offsetof(source2sdk::client::CPlayerTrackedStatDefinition, m_expressionData) == 0x20);
        static_assert(offsetof(source2sdk::client::CPlayerTrackedStatDefinition, m_heroAdjectiveData) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CPlayerTrackedStatDefinition) == 0x38);
    };
};
