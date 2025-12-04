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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructiblePart_DamageLevel
        {
        public:
            // metadata: MPropertyDescription "Name for this damage level."
            CUtlString m_sName; // 0x_            
            // metadata: MPropertyStartGroup "+Model Setup"
            // metadata: MPropertyDescription "Name of the breakable to trigger breaking on when health reaches zero."
            // metadata: MPropertyAttributeEditor "ModelDocPicker( MODELDOC_PICK_TYPE_BREAKPIECE )"
            CGlobalSymbol m_sBreakablePieceName; // 0x_            
            // metadata: MPropertyDescription "Value to set for the body group when the damage level is broken."
            std::int32_t m_nBodyGroupValue; // 0x_            
            // metadata: MPropertyStartGroup "+Damage"
            // metadata: MPropertyDescription "Total health of this damage level. When it reaches 0, the damage level is 'broken' using the breakable prop system."
            // metadata: MPropertySuppressExpr "m_nDamagePassthroughType == InvincibleAbsorb || m_nDamagePassthroughType == InvinciblePassthrough"
            source2sdk::client::CSkillInt m_nHealth; // 0x_            
            // metadata: MPropertyDescription "% chance (0-1) of dealing 'critical' damage, which destroys this damage level, regardless of damage pass through type."
            float m_flCriticalDamagePercent; // 0x_            
            // metadata: MPropertyDescription "How damage to this damage level is handled."
            source2sdk::client::EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x_            
            // metadata: MPropertyStartGroup "+Death"
            // metadata: MPropertyDescription "Should the entity die when this damage level is destroyed?"
            source2sdk::client::DestructiblePartDestructionDeathBehavior_t m_nDestructionDeathBehavior; // 0x_            
            // metadata: MPropertyDescription "Custom death handshake to set when this damage level is destroyed."
            // metadata: MPropertySuppressExpr "m_nDestructionDeathBehavior == eDoNotKill"
            CGlobalSymbol m_sCustomDeathHandshake; // 0x_            
            // metadata: MPropertyDescription "Whether the damage level should be destroyed when the entity dies."
            bool m_bShouldDestroyOnDeath; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Time after death the damage level should be destroyed"
            // metadata: MPropertySuppressExpr "m_bShouldDestroyOnDeath == false"
            source2sdk::tier2::CRangeFloat m_flDeathDestroyTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_sBreakablePieceName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_nBodyGroupValue) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_nHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_flCriticalDamagePercent) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_nDamagePassthroughType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_nDestructionDeathBehavior) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_sCustomDeathHandshake) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_bShouldDestroyOnDeath) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePart_DamageLevel, m_flDeathDestroyTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePart_DamageLevel) == 0x_);
    };
};
