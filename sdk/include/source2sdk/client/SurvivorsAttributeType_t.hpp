#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 76
        // Alignment: 4
        // Size: 0x_
        enum class SurvivorsAttributeType_t : std::uint32_t
        {
            k_eSurvivorsAttribute_Invalid = 0x0,
            k_eSurvivorsAttribute_MaxHP = 0x1,
            k_eSurvivorsAttribute_HPRegen = 0x2,
            k_eSurvivorsAttribute_LifeSteal = 0x3,
            k_eSurvivorsAttribute_Damage = 0x4,
            k_eSurvivorsAttribute_DamageMultiplier = 0x5,
            k_eSurvivorsAttribute_Damage_Physical = 0x6,
            k_eSurvivorsAttribute_DamageMultiplier_Physical = 0x7,
            k_eSurvivorsAttribute_Damage_Magical = 0x8,
            k_eSurvivorsAttribute_DamageMultiplier_Magical = 0x9,
            k_eSurvivorsAttribute_CriticalStrike_Physical_Chance = 0xa,
            k_eSurvivorsAttribute_CriticalStrike_Physical_DamageMultiplier = 0xb,
            k_eSurvivorsAttribute_MovementSpeed = 0xc,
            k_eSurvivorsAttribute_Cooldown = 0xd,
            k_eSurvivorsAttribute_CooldownReductionMultiplier = 0xe,
            k_eSurvivorsAttribute_Range = 0xf,
            k_eSurvivorsAttribute_Armor = 0x10,
            k_eSurvivorsAttribute_DamageReflection = 0x11,
            k_eSurvivorsAttribute_Dodge = 0x12,
            k_eSurvivorsAttribute_ExpMultiplier = 0x13,
            k_eSurvivorsAttribute_PickupRadius = 0x14,
            k_eSurvivorsAttribute_Luck = 0x15,
            k_eSurvivorsAttribute_Lives = 0x16,
            k_eSurvivorsAttribute_LimitBreak = 0x17,
            k_eSurvivorsAttribute_DashSpeed = 0x18,
            k_eSurvivorsAttribute_DashDuration = 0x19,
            k_eSurvivorsAttribute_DashCooldown = 0x1a,
            k_eSurvivorsAttribute_NumDashes = 0x1b,
            k_eSurvivorsAttribute_TargetCount = 0x1c,
            k_eSurvivorsAttribute_StunDuration = 0x1d,
            k_eSurvivorsAttribute_ProjectileRadius = 0x1e,
            k_eSurvivorsAttribute_ProjectileBounces = 0x1f,
            k_eSurvivorsAttribute_AoEIncrease = 0x20,
            k_eSurvivorsAttribute_KnockbackDistance = 0x21,
            k_eSurvivorsAttribute_FreezeDuration = 0x22,
            k_eSurvivorsAttribute_VulnerabilityDuration = 0x23,
            k_eSurvivorsAttribute_VulnerabilityDamagePercent = 0x24,
            k_eSurvivorsAttribute_VulnerabilityStunOnHitDuration = 0x25,
            k_eSurvivorsAttribute_ModifierDamagePerTick = 0x26,
            k_eSurvivorsAttribute_ProjectileSpeed = 0x27,
            k_eSurvivorsAttribute_ProjectileAttackInterval = 0x28,
            k_eSurvivorsAttribute_Width = 0x29,
            k_eSurvivorsAttribute_Length = 0x2a,
            k_eSurvivorsAttribute_Radius = 0x2b,
            k_eSurvivorsAttribute_InitialTickDelay = 0x2c,
            k_eSurvivorsAttribute_DamageTicks = 0x2d,
            k_eSurvivorsAttribute_TimeBetweenTicks = 0x2e,
            k_eSurvivorsAttribute_LifeTime = 0x2f,
            k_eSurvivorsAttribute_ArmingTime = 0x30,
            k_eSurvivorsAttribute_TriggerTime = 0x31,
            k_eSurvivorsAttribute_MaxRerolls = 0x32,
            k_eSurvivorsAttribute_ProjectileHitCount = 0x33,
            k_eSurvivorsAttribute_ProjectileHorizontalOffset = 0x34,
            k_eSurvivorsAttribute_SplashDamagePercentage = 0x35,
            k_eSurvivorsAttribute_Directions = 0x36,
            k_eSurvivorsAttribute_Duration = 0x37,
            k_eSurvivorsAttribute_DurationExtension = 0x38,
            k_eSurvivorsAttribute_StampedeMovementSpeed = 0x39,
            k_eSurvivorsAttribute_ActiveAbilitySlots = 0x3a,
            k_eSurvivorsAttribute_KnockbackDistanceMultiplier = 0x3b,
            k_eSurvivorsAttribute_FreezeSplashRadius = 0x3c,
            k_eSurvivorsAttribute_CriticalStrike_Projectile_Chance = 0x3d,
            k_eSurvivorsAttribute_CriticalStrike_Projectile_DamageMultiplier = 0x3e,
            k_eSurvivorsAttribute_Projectile_BonusMagicDamage = 0x3f,
            k_eSurvivorsAttribute_MagicDamageWeakensPhysicalDamageResistance_Duration = 0x40,
            k_eSurvivorsAttribute_MagicDamageWeakensPhysicalDamageResistance_Percentage = 0x41,
            k_eSurvivorsAttribute_BonusPhysicalDamage = 0x42,
            k_eSurvivorsAttribute_IncomingDamageAmplification = 0x43,
            k_eSurvivorsAttribute_IncomingDamageAmplificationDuration = 0x44,
            k_eSurvivorsAttribute_FreezeStrength = 0x45,
            k_eSurvivorsAttribute_ProjectileDamagePercent = 0x46,
            k_eSurvivorsAttribute_ProjectileAttack = 0x47,
            k_eSurvivorsAttribute_DurationEffect = 0x48,
            k_eSurvivorsAttribute_SlowStrength = 0x49,
            k_eSurvivorsAttribute_SlowDuration = 0x4a,
            k_eSurvivorsAttribute_Count = 0x4b,
        };
    };
};
