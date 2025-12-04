#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CTakeDamageInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vecDamageForce; // 0x_            
            Vector m_vecDamagePosition; // 0x_            
            Vector m_vecReportedPosition; // 0x_            
            Vector m_vecDamageDirection; // 0x_            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hInflictor;
            char m_hInflictor[0x_]; // 0x_            
            // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttacker;
            char m_hAttacker[0x_]; // 0x_            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAbility;
            char m_hAbility[0x_]; // 0x_            
            float m_flDamage; // 0x_            
            float m_flTotalledDamage; // 0x_            
            source2sdk::client::DamageTypes_t m_bitsDamageType; // 0x_            
            std::int32_t m_iDamageCustom; // 0x_            
            source2sdk::client::AmmoIndex_t m_iAmmoType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flOriginalDamage; // 0x_            
            bool m_bShouldBleed; // 0x_            
            bool m_bShouldSpark; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::TakeDamageFlags_t m_nDamageFlags; // 0x_            
            CGlobalSymbol m_sDamageSourceName; // 0x_            
            std::int32_t m_bitsDotaDamageType; // 0x_            
            std::int32_t m_nDotaDamageCategory; // 0x_            
            float m_flCombatLogCreditFactor; // 0x_            
            std::int16_t m_iRecord; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::HitGroup_t m_iHitGroupId; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bInTakeDamageFlow; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_hScriptInstance; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamageForce) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamagePosition) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecReportedPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamageDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hInflictor) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hAttacker) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hAbility) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flTotalledDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bitsDamageType) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iDamageCustom) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iAmmoType) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flOriginalDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bShouldBleed) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bShouldSpark) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nDamageFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_sDamageSourceName) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bitsDotaDamageType) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nDotaDamageCategory) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flCombatLogCreditFactor) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iRecord) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iHitGroupId) == 0x_);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bInTakeDamageFlow) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageInfo) == 0x_);
    };
};
