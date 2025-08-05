#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSkillInt.hpp"
#include "source2sdk/client/DestructiblePartDestructionDeathBehavior_t.hpp"
#include "source2sdk/client/EDestructiblePartDamagePassThroughType.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Size: 0x48
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_DamageLevel
        {
        public:
            // metadata: MPropertyDescription "Name for this damage level."
            CUtlString m_sName; // 0x0            
            // metadata: MPropertyStartGroup "+Model Setup"
            // metadata: MPropertyDescription "Name of the breakable to trigger breaking on when health reaches zero."
            // metadata: MPropertyAttributeEditor "ModelDocPicker( 16 )"
            CGlobalSymbol m_sBreakablePieceName; // 0x8            
            // metadata: MPropertyDescription "Value to set for the body group when the damage level is broken."
            std::int32_t m_nBodyGroupValue; // 0x10            
            // metadata: MPropertyStartGroup "+Damage"
            // metadata: MPropertyDescription "Total health of this damage level. When it reaches 0, the damage level is 'broken' using the breakable prop system."
            source2sdk::client::CSkillInt m_nHealth; // 0x14            
            // metadata: MPropertyDescription "How damage to this damage level is handled."
            source2sdk::client::EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x24            
            // metadata: MPropertyStartGroup "+Death"
            // metadata: MPropertyDescription "Should the entity die when this damage level is destroyed?"
            source2sdk::client::DestructiblePartDestructionDeathBehavior_t m_nDestructionDeathBehavior; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // metadata: MPropertyDescription "Custom death handshake to set when this damage level is destroyed."
            // metadata: MPropertySuppressExpr "m_nDestructionDeathBehavior == eDoNotKill"
            CGlobalSymbol m_sCustomDeathHandshake; // 0x30            
            // metadata: MPropertyDescription "Whether the damage level should be destroyed when the entity dies."
            bool m_bShouldDestroyOnDeath; // 0x38            
            uint8_t _pad0039[0x3]; // 0x39
            // metadata: MPropertyDescription "Time after death the damage level should be destroyed"
            // metadata: MPropertySuppressExpr "m_bShouldDestroyOnDeath == false"
            source2sdk::tier2::CRangeFloat m_flDeathDestroyTime; // 0x3c            
            uint8_t _pad0044[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_sBreakablePieceName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_nBodyGroupValue) == 0x10);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_nHealth) == 0x14);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_nDamagePassthroughType) == 0x24);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_nDestructionDeathBehavior) == 0x28);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_sCustomDeathHandshake) == 0x30);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_bShouldDestroyOnDeath) == 0x38);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel, m_flDeathDestroyTime) == 0x3c);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_DamageLevel) == 0x48);
    };
};
