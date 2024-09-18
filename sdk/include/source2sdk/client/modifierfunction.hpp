#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 355
    // Alignment: 4
    // Size: 0x4
    enum class modifierfunction : std::uint32_t
    {
        // MScriptDescription "@èè´¯ GetModifierPreAttack_BonusDamage"
        MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE = 0x0,
        // MScriptDescription "GetModifierPreAttack_BonusDamage_Proc GetModifierPreAttack_BonusDamage_Target"
        MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_TARGET = 0x1,
        // MScriptDescription "GetModifierPreAttack_BonusDamagePostCrit GetModifierPreAttack_BonusDamage_Proc"
        MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_PROC = 0x2,
        // MScriptDescription "GetModifierBaseAttack_BonusDamage GetModifierPreAttack_BonusDamagePostCrit"
        MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_POST_CRIT = 0x3,
        // MScriptDescription "GetModifierProcAttack_BonusDamage_Physical GetModifierBaseAttack_BonusDamage"
        MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE = 0x4,
        // MScriptDescription "GetModifierProcAttack_ConvertPhysicalToMagical GetModifierProcAttack_BonusDamage_Physical"
        MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PHYSICAL = 0x5,
        // MScriptDescription "GetModifierProcAttack_BonusDamage_Magical GetModifierProcAttack_ConvertPhysicalToMagical"
        MODIFIER_PROPERTY_PROCATTACK_CONVERT_PHYSICAL_TO_MAGICAL = 0x6,
        // MScriptDescription "GetModifierProcAttack_BonusDamage_Pure GetModifierProcAttack_BonusDamage_Magical"
        MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_MAGICAL = 0x7,
        // MScriptDescription "GetModifierProcAttack_BonusDamage_Magical_Target GetModifierProcAttack_BonusDamage_Pure"
        MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PURE = 0x8,
        // MScriptDescription "GetModifierProcAttack_Feedback GetModifierProcAttack_BonusDamage_Magical_Target"
        MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_MAGICAL_TARGET = 0x9,
        // MScriptDescription "GetModifierOverrideAttackDamage GetModifierProcAttack_Feedback"
        MODIFIER_PROPERTY_PROCATTACK_FEEDBACK = 0xa,
        // MScriptDescription "GetModifierPreAttack GetModifierOverrideAttackDamage"
        MODIFIER_PROPERTY_OVERRIDE_ATTACK_DAMAGE = 0xb,
        // MScriptDescription "GetModifierInvisibilityLevel GetModifierPreAttack"
        MODIFIER_PROPERTY_PRE_ATTACK = 0xc,
        // MScriptDescription "GetModifierInvisibilityAttackBehaviorException GetModifierInvisibilityLevel"
        MODIFIER_PROPERTY_INVISIBILITY_LEVEL = 0xd,
        // MScriptDescription "GetModifierPersistentInvisibility GetModifierInvisibilityAttackBehaviorException"
        MODIFIER_PROPERTY_INVISIBILITY_ATTACK_BEHAVIOR_EXCEPTION = 0xe,
        // MScriptDescription "GetModifierPersistentInvisibility"
        MODIFIER_PROPERTY_PERSISTENT_INVISIBILITY = 0xf,
        // MScriptDescription "GetModifierMoveSpeedOverride GetModifierMoveSpeedBonus_Constant"
        MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT = 0x10,
        // MScriptDescription "GetModifierMoveSpeedOverride"
        MODIFIER_PROPERTY_MOVESPEED_BASE_OVERRIDE = 0x11,
        // MScriptDescription "GetModifierMoveSpeedBonus_Percentage_Unique GetModifierMoveSpeedBonus_Percentage"
        MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE = 0x12,
        // MScriptDescription "GetModifierMoveSpeedBonus_Special_Boots GetModifierMoveSpeedBonus_Percentage_Unique"
        MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE = 0x13,
        // MScriptDescription "GetModifierMoveSpeedBonus_Special_Boots_2 GetModifierMoveSpeedBonus_Special_Boots"
        MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE = 0x14,
        // MScriptDescription "∞êè´¯ GetModifierMoveSpeedBonus_Special_Boots_2"
        MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE_2 = 0x15,
        // MScriptDescription "GetModifierMoveSpeedBonus_Constant_Unique_2 GetModifierMoveSpeedBonus_Constant_Unique"
        MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT_UNIQUE = 0x16,
        // MScriptDescription "GetModifierMoveSpeed_Absolute GetModifierMoveSpeedBonus_Constant_Unique_2"
        MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT_UNIQUE_2 = 0x17,
        // MScriptDescription "GetModifierMoveSpeed_AbsoluteMin GetModifierMoveSpeed_Absolute"
        MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE = 0x18,
        // MScriptDescription "GetModifierMoveSpeed_AbsoluteMax GetModifierMoveSpeed_AbsoluteMin"
        MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE_MIN = 0x19,
        // MScriptDescription "GetModifierIgnoreMovespeedLimit GetModifierMoveSpeed_AbsoluteMax"
        MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE_MAX = 0x1a,
        // MScriptDescription "GetModifierMoveSpeed_Limit GetModifierIgnoreMovespeedLimit"
        MODIFIER_PROPERTY_IGNORE_MOVESPEED_LIMIT = 0x1b,
        // MScriptDescription "GetModifierAttackSpeedBaseOverride GetModifierMoveSpeed_Limit"
        MODIFIER_PROPERTY_MOVESPEED_LIMIT = 0x1c,
        // MScriptDescription "GetModifierFixedAttackRate GetModifierAttackSpeedBaseOverride"
        MODIFIER_PROPERTY_ATTACKSPEED_BASE_OVERRIDE = 0x1d,
        // MScriptDescription "GetModifierAttackSpeedBonus_Constant GetModifierFixedAttackRate"
        MODIFIER_PROPERTY_FIXED_ATTACK_RATE = 0x1e,
        // MScriptDescription "GetModifierAttackSpeed_Limit GetModifierAttackSpeedBonus_Constant"
        MODIFIER_PROPERTY_ATTACKSPEED_BONUS_CONSTANT = 0x1f,
        // MScriptDescription "GetModifierAttackSpeed_Limit"
        MODIFIER_PROPERTY_IGNORE_ATTACKSPEED_LIMIT = 0x20,
        // MScriptDescription "GetModifierManacostReduction_Constant GetModifierCooldownReduction_Constant"
        MODIFIER_PROPERTY_COOLDOWN_REDUCTION_CONSTANT = 0x21,
        // MScriptDescription "GetModifierHealthcostReduction_Constant GetModifierManacostReduction_Constant"
        MODIFIER_PROPERTY_MANACOST_REDUCTION_CONSTANT = 0x22,
        // MScriptDescription "GetModifierBaseAttackTimeConstant GetModifierHealthcostReduction_Constant"
        MODIFIER_PROPERTY_HEALTHCOST_REDUCTION_CONSTANT = 0x23,
        // MScriptDescription "GetModifierBaseAttackTimeConstant"
        MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT = 0x24,
        // MScriptDescription "GetModifierBaseAttackTimePercentage GetModifierBaseAttackTimeConstant_Adjust"
        MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT_ADJUST = 0x25,
        // MScriptDescription "GetModifierAttackPointConstant GetModifierBaseAttackTimePercentage"
        MODIFIER_PROPERTY_BASE_ATTACK_TIME_PERCENTAGE = 0x26,
        // MScriptDescription "GetModifierBonusDamageOutgoing_Percentage GetModifierAttackPointConstant"
        MODIFIER_PROPERTY_ATTACK_POINT_CONSTANT = 0x27,
        // MScriptDescription "GetModifierDamageOutgoing_Percentage GetModifierBonusDamageOutgoing_Percentage"
        MODIFIER_PROPERTY_BONUSDAMAGEOUTGOING_PERCENTAGE = 0x28,
        // MScriptDescription "GetModifierDamageOutgoing_Percentage_Illusion GetModifierDamageOutgoing_Percentage"
        MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE = 0x29,
        // MScriptDescription "GetModifierDamageOutgoing_Percentage_Illusion_Amplify GetModifierDamageOutgoing_Percentage_Illusion"
        MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION = 0x2a,
        // MScriptDescription "GetModifierTotalDamageOutgoing_Percentage GetModifierDamageOutgoing_Percentage_Illusion_Amplify"
        MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION_AMPLIFY = 0x2b,
        // MScriptDescription "GetModifierSpellAmplify_PercentageCreep GetModifierTotalDamageOutgoing_Percentage"
        MODIFIER_PROPERTY_TOTALDAMAGEOUTGOING_PERCENTAGE = 0x2c,
        // MScriptDescription "GetModifierSpellAmplify_PercentageCreep"
        MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE_CREEP = 0x2d,
        // MScriptDescription "GetModifierSpellAmplify_PercentageUnique GetModifierSpellAmplify_Percentage"
        MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE = 0x2e,
        // MScriptDescription "GetModifierSpellAmplify_PercentageTarget GetModifierSpellAmplify_PercentageUnique"
        MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE_UNIQUE = 0x2f,
        // MScriptDescription "GetModifierHealAmplify_PercentageSource GetModifierSpellAmplify_PercentageTarget"
        MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE_TARGET = 0x30,
        // MScriptDescription "GetModifierHealAmplify_PercentageSource"
        MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE_SOURCE = 0x31,
        // MScriptDescription "GetModifierHPRegen_CanBeNegative GetModifierHealAmplify_PercentageTarget"
        MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE_TARGET = 0x32,
        // MScriptDescription "GetModifierHPRegenAmplify_Percentage GetModifierHPRegen_CanBeNegative"
        MODIFIER_PROPERTY_HP_REGEN_CAN_BE_NEGATIVE = 0x33,
        // MScriptDescription "GetModifierLifestealRegenAmplify_Percentage GetModifierHPRegenAmplify_Percentage"
        MODIFIER_PROPERTY_HP_REGEN_AMPLIFY_PERCENTAGE = 0x34,
        // MScriptDescription "GetModifierSpellLifestealRegenAmplify_Percentage GetModifierLifestealRegenAmplify_Percentage"
        MODIFIER_PROPERTY_LIFESTEAL_AMPLIFY_PERCENTAGE = 0x35,
        // MScriptDescription "GetModifierSpellLifestealRegenAmplify_Percentage_Unique GetModifierSpellLifestealRegenAmplify_Percentage"
        MODIFIER_PROPERTY_SPELL_LIFESTEAL_AMPLIFY_PERCENTAGE = 0x36,
        // MScriptDescription "GetModifierMPRegenAmplify_Percentage GetModifierSpellLifestealRegenAmplify_Percentage_Unique"
        MODIFIER_PROPERTY_SPELL_LIFESTEAL_AMPLIFY_PERCENTAGE_UNIQUE = 0x37,
        // MScriptDescription "GetModifierMPRegenAmplify_Percentage_Unique GetModifierMPRegenAmplify_Percentage"
        MODIFIER_PROPERTY_MP_REGEN_AMPLIFY_PERCENTAGE = 0x38,
        // MScriptDescription "GetModifierMPRegenAmplify_Percentage_Unique"
        MODIFIER_PROPERTY_MP_REGEN_AMPLIFY_PERCENTAGE_UNIQUE = 0x39,
        // MScriptDescription "GetModifierMPRestoreAmplify_Percentage GetModifierManaDrainAmplify_Percentage"
        MODIFIER_PROPERTY_MANA_DRAIN_AMPLIFY_PERCENTAGE = 0x3a,
        // MScriptDescription "GetModifierBaseDamageOutgoing_Percentage GetModifierMPRestoreAmplify_Percentage"
        MODIFIER_PROPERTY_MP_RESTORE_AMPLIFY_PERCENTAGE = 0x3b,
        // MScriptDescription "GetModifierBaseDamageOutgoing_PercentageUnique GetModifierBaseDamageOutgoing_Percentage"
        MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE = 0x3c,
        // MScriptDescription "Äìè´¯ GetModifierBaseDamageOutgoing_PercentageUnique"
        MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE_UNIQUE = 0x3d,
        // MScriptDescription "GetModifierIncomingPhysicalDamage_Percentage GetModifierIncomingDamage_Percentage"
        MODIFIER_PROPERTY_INCOMING_DAMAGE_PERCENTAGE = 0x3e,
        // MScriptDescription "GetModifierIncomingPhysicalDamageConstant GetModifierIncomingPhysicalDamage_Percentage"
        MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_PERCENTAGE = 0x3f,
        // MScriptDescription "GetModifierIncomingSpellDamageConstant GetModifierIncomingPhysicalDamageConstant"
        MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_CONSTANT = 0x40,
        // MScriptDescription "GetModifierEvasion_Constant GetModifierIncomingSpellDamageConstant"
        MODIFIER_PROPERTY_INCOMING_SPELL_DAMAGE_CONSTANT = 0x41,
        // MScriptDescription "GetModifierNegativeEvasion_Constant GetModifierEvasion_Constant"
        MODIFIER_PROPERTY_EVASION_CONSTANT = 0x42,
        // MScriptDescription "GetModifierStatusResistance GetModifierNegativeEvasion_Constant"
        MODIFIER_PROPERTY_NEGATIVE_EVASION_CONSTANT = 0x43,
        // MScriptDescription "GetModifierStatusResistanceStacking GetModifierStatusResistance"
        MODIFIER_PROPERTY_STATUS_RESISTANCE = 0x44,
        // MScriptDescription "GetModifierStatusResistanceCaster GetModifierStatusResistanceStacking"
        MODIFIER_PROPERTY_STATUS_RESISTANCE_STACKING = 0x45,
        // MScriptDescription "GetModifierStatusResistanceCaster"
        MODIFIER_PROPERTY_STATUS_RESISTANCE_CASTER = 0x46,
        // MScriptDescription "GetModifierAvoidSpell GetModifierAvoidDamage"
        MODIFIER_PROPERTY_AVOID_DAMAGE = 0x47,
        // MScriptDescription "GetModifierMiss_Percentage GetModifierAvoidSpell"
        MODIFIER_PROPERTY_AVOID_SPELL = 0x48,
        // MScriptDescription "GetModifierPhysicalArmorBase_Percentage GetModifierMiss_Percentage"
        MODIFIER_PROPERTY_MISS_PERCENTAGE = 0x49,
        // MScriptDescription "GetModifierPhysicalArmorBase_Percentage"
        MODIFIER_PROPERTY_PHYSICAL_ARMOR_BASE_PERCENTAGE = 0x4a,
        // MScriptDescription "GetModifierPhysicalArmorBonus GetModifierPhysicalArmorTotal_Percentage"
        MODIFIER_PROPERTY_PHYSICAL_ARMOR_TOTAL_PERCENTAGE = 0x4b,
        // MScriptDescription "GetModifierPhysicalArmorBonusUnique GetModifierPhysicalArmorBonus"
        MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS = 0x4c,
        // MScriptDescription "GetModifierPhysicalArmorBonusUniqueActive GetModifierPhysicalArmorBonusUnique"
        MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE = 0x4d,
        // MScriptDescription "GetModifierPhysicalArmorBonusPost GetModifierPhysicalArmorBonusUniqueActive"
        MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE_ACTIVE = 0x4e,
        // MScriptDescription "GetModifierMinPhysicalArmor GetModifierPhysicalArmorBonusPost"
        MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_POST = 0x4f,
        // MScriptDescription "GetModifierIgnorePhysicalArmor GetModifierMinPhysicalArmor"
        MODIFIER_PROPERTY_MIN_PHYSICAL_ARMOR = 0x50,
        // MScriptDescription "GetModifierMagicalResistanceBaseReduction GetModifierIgnorePhysicalArmor"
        MODIFIER_PROPERTY_IGNORE_PHYSICAL_ARMOR = 0x51,
        // MScriptDescription "GetModifierMagicalResistanceDirectModification GetModifierMagicalResistanceBaseReduction"
        MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BASE_REDUCTION = 0x52,
        // MScriptDescription "GetModifierMagicalResistanceBonus GetModifierMagicalResistanceDirectModification"
        MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DIRECT_MODIFICATION = 0x53,
        // MScriptDescription "GetModifierMagicalResistanceBonusIllusions GetModifierMagicalResistanceBonus"
        MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS = 0x54,
        // MScriptDescription "GetModifierMagicalResistanceBonusUnique GetModifierMagicalResistanceBonusIllusions"
        MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS_ILLUSIONS = 0x55,
        // MScriptDescription "m_bFacePlayer GetModifierMagicalResistanceBonusUnique"
        MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS_UNIQUE = 0x56,
        // MScriptDescription "GetModifierMagicalResistanceDecrepifyUnique"
        MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DECREPIFY_UNIQUE = 0x57,
        // MScriptDescription "GetModifierConstantManaRegen GetModifierBaseRegen"
        MODIFIER_PROPERTY_BASE_MANA_REGEN = 0x58,
        // MScriptDescription "GetModifierConstantManaRegenUnique GetModifierConstantManaRegen"
        MODIFIER_PROPERTY_MANA_REGEN_CONSTANT = 0x59,
        // MScriptDescription "GetModifierTotalPercentageManaRegen GetModifierConstantManaRegenUnique"
        MODIFIER_PROPERTY_MANA_REGEN_CONSTANT_UNIQUE = 0x5a,
        // MScriptDescription "GetModifierTotalPercentageManaRegen"
        MODIFIER_PROPERTY_MANA_REGEN_TOTAL_PERCENTAGE = 0x5b,
        // MScriptDescription "GetModifierHealthRegenPercentage GetModifierConstantHealthRegen"
        MODIFIER_PROPERTY_HEALTH_REGEN_CONSTANT = 0x5c,
        // MScriptDescription "GetModifierHealthRegenPercentageUnique GetModifierHealthRegenPercentage"
        MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE = 0x5d,
        // MScriptDescription "GetModifierHealthBonus GetModifierHealthRegenPercentageUnique"
        MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE_UNIQUE = 0x5e,
        // MScriptDescription "GetModifierManaBonus GetModifierHealthBonus"
        MODIFIER_PROPERTY_HEALTH_BONUS = 0x5f,
        // MScriptDescription "GetModifierExtraStrengthBonus GetModifierManaBonus"
        MODIFIER_PROPERTY_MANA_BONUS = 0x60,
        // MScriptDescription "GetModifierExtraHealthBonus GetModifierExtraStrengthBonus"
        MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS = 0x61,
        // MScriptDescription "GetModifierExtraManaBonus GetModifierExtraHealthBonus"
        MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS = 0x62,
        // MScriptDescription "GetModifierExtraManaBonusPercentage GetModifierExtraManaBonus"
        MODIFIER_PROPERTY_EXTRA_MANA_BONUS = 0x63,
        // MScriptDescription "GetModifierExtraHealthPercentage GetModifierExtraManaBonusPercentage"
        MODIFIER_PROPERTY_EXTRA_MANA_BONUS_PERCENTAGE = 0x64,
        // MScriptDescription "GetModifierExtraManaPercentage GetModifierExtraHealthPercentage"
        MODIFIER_PROPERTY_EXTRA_HEALTH_PERCENTAGE = 0x65,
        // MScriptDescription "GetModifierBonusStats_Strength GetModifierExtraManaPercentage"
        MODIFIER_PROPERTY_EXTRA_MANA_PERCENTAGE = 0x66,
        // MScriptDescription "GetModifierBonusStats_Agility GetModifierBonusStats_Strength"
        MODIFIER_PROPERTY_STATS_STRENGTH_BONUS = 0x67,
        // MScriptDescription "GetModifierBonusStats_Intellect GetModifierBonusStats_Agility"
        MODIFIER_PROPERTY_STATS_AGILITY_BONUS = 0x68,
        // MScriptDescription "m_nActivity GetModifierBonusStats_Intellect"
        MODIFIER_PROPERTY_STATS_INTELLECT_BONUS = 0x69,
        // MScriptDescription "GetModifierBonusStats_Agility_Percentage GetModifierBonusStats_Strength_Percentage"
        MODIFIER_PROPERTY_STATS_STRENGTH_BONUS_PERCENTAGE = 0x6a,
        // MScriptDescription "GetModifierBonusStats_Agility_Percentage"
        MODIFIER_PROPERTY_STATS_AGILITY_BONUS_PERCENTAGE = 0x6b,
        // MScriptDescription "GetModifierCastRangeBonus GetModifierBonusStats_Intellect_Percentage"
        MODIFIER_PROPERTY_STATS_INTELLECT_BONUS_PERCENTAGE = 0x6c,
        // MScriptDescription "GetModifierCastRangeBonusPercentage GetModifierCastRangeBonus"
        MODIFIER_PROPERTY_CAST_RANGE_BONUS = 0x6d,
        // MScriptDescription "GetModifierCastRangeBonusTarget GetModifierCastRangeBonusPercentage"
        MODIFIER_PROPERTY_CAST_RANGE_BONUS_PERCENTAGE = 0x6e,
        // MScriptDescription " óè´¯ GetModifierCastRangeBonusTarget"
        MODIFIER_PROPERTY_CAST_RANGE_BONUS_TARGET = 0x6f,
        // MScriptDescription "GetModifierAttackRangeOverride GetModifierCastRangeBonusStacking"
        MODIFIER_PROPERTY_CAST_RANGE_BONUS_STACKING = 0x70,
        // MScriptDescription "GetModifierAttackRangeBonus GetModifierAttackRangeOverride"
        MODIFIER_PROPERTY_ATTACK_RANGE_BASE_OVERRIDE = 0x71,
        // MScriptDescription "GetModifierAttackRangeBonusUnique GetModifierAttackRangeBonus"
        MODIFIER_PROPERTY_ATTACK_RANGE_BONUS = 0x72,
        // MScriptDescription "GetModifierAttackRangeBonusPercentage GetModifierAttackRangeBonusUnique"
        MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE = 0x73,
        // MScriptDescription "GetModifierMaxAttackRange GetModifierAttackRangeBonusPercentage"
        MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_PERCENTAGE = 0x74,
        // MScriptDescription "GetModifierProjectileSpeedBonus GetModifierMaxAttackRange"
        MODIFIER_PROPERTY_MAX_ATTACK_RANGE = 0x75,
        // MScriptDescription "GetModifierProjectileSpeedBonusPercentage GetModifierProjectileSpeedBonus"
        MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS = 0x76,
        // MScriptDescription "GetModifierProjectileName GetModifierProjectileSpeedBonusPercentage"
        MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS_PERCENTAGE = 0x77,
        // MScriptDescription "ReincarnateTime GetModifierProjectileName"
        MODIFIER_PROPERTY_PROJECTILE_NAME = 0x78,
        // MScriptDescription "ReincarnateSuppressFX ReincarnateTime"
        MODIFIER_PROPERTY_REINCARNATION = 0x79,
        // MScriptDescription "GetModifierConstantRespawnTime ReincarnateSuppressFX"
        MODIFIER_PROPERTY_REINCARNATION_SUPPRESS_FX = 0x7a,
        // MScriptDescription "m_bRemoveOnDeath GetModifierConstantRespawnTime"
        MODIFIER_PROPERTY_RESPAWNTIME = 0x7b,
        // MScriptDescription "GetModifierPercentageRespawnTime"
        MODIFIER_PROPERTY_RESPAWNTIME_PERCENTAGE = 0x7c,
        // MScriptDescription "GetModifierPercentageCooldown GetModifierStackingRespawnTime"
        MODIFIER_PROPERTY_RESPAWNTIME_STACKING = 0x7d,
        // MScriptDescription "GetModifierPercentageCooldownOngoing GetModifierPercentageCooldown"
        MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE = 0x7e,
        // MScriptDescription "GetModifierPercentageCasttime GetModifierPercentageCooldownOngoing"
        MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE_ONGOING = 0x7f,
        // MScriptDescription "GetModifierPercentageCasttime"
        MODIFIER_PROPERTY_CASTTIME_PERCENTAGE = 0x80,
        // MScriptDescription "GetModifierPercentageManacost GetModifierPercentageAttackAnimTime"
        MODIFIER_PROPERTY_ATTACK_ANIM_TIME_PERCENTAGE = 0x81,
        // MScriptDescription "GetModifierPercentageManacostStacking GetModifierPercentageManacost"
        MODIFIER_PROPERTY_MANACOST_PERCENTAGE = 0x82,
        // MScriptDescription "GetModifierPercentageHealthcost GetModifierPercentageManacostStacking"
        MODIFIER_PROPERTY_MANACOST_PERCENTAGE_STACKING = 0x83,
        // MScriptDescription "GetModifierPercentageHealthcostStacking GetModifierPercentageHealthcost"
        MODIFIER_PROPERTY_HEALTHCOST_PERCENTAGE = 0x84,
        // MScriptDescription "GetModifierConstantDeathGoldCost GetModifierPercentageHealthcostStacking"
        MODIFIER_PROPERTY_HEALTHCOST_PERCENTAGE_STACKING = 0x85,
        // MScriptDescription "GetModifierPercentageDeathGoldCost GetModifierConstantDeathGoldCost"
        MODIFIER_PROPERTY_DEATHGOLDCOST = 0x86,
        // MScriptDescription "GetModifierPercentageExpRateBoost GetModifierPercentageDeathGoldCost"
        MODIFIER_PROPERTY_PERCENTAGE_DEATHGOLDCOST = 0x87,
        // MScriptDescription "GetModifierPercentageGoldRateBoost GetModifierPercentageExpRateBoost"
        MODIFIER_PROPERTY_EXP_RATE_BOOST = 0x88,
        // MScriptDescription "GetModifierPercentageGoldRateBoost"
        MODIFIER_PROPERTY_GOLD_RATE_BOOST = 0x89,
        // MScriptDescription "GetModifierPreAttack_Target_CriticalStrike GetModifierPreAttack_CriticalStrike"
        MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE = 0x8a,
        // MScriptDescription "GetModifierMagical_ConstantBlock GetModifierPreAttack_Target_CriticalStrike"
        MODIFIER_PROPERTY_PREATTACK_TARGET_CRITICALSTRIKE = 0x8b,
        // MScriptDescription "GetModifierPhysical_ConstantBlock GetModifierMagical_ConstantBlock"
        MODIFIER_PROPERTY_MAGICAL_CONSTANT_BLOCK = 0x8c,
        // MScriptDescription "GetModifierPhysical_ConstantBlock"
        MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK = 0x8d,
        // MScriptDescription "GetModifierInnateDamageBlockPctOverride GetModifierPhysical_ConstantBlockSpecial"
        MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK_SPECIAL = 0x8e,
        // MScriptDescription "GetModifierPhysical_ConstantBlockUnavoidablePreArmor GetModifierInnateDamageBlockPctOverride"
        MODIFIER_PROPERTY_INNATE_DAMAGE_BLOCK_PCT_OVERRIDE = 0x8f,
        // MScriptDescription "GetModifierTotal_ConstantBlock GetModifierPhysical_ConstantBlockUnavoidablePreArmor"
        MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR = 0x90,
        // MScriptDescription "GetOverrideAnimation GetModifierTotal_ConstantBlock"
        MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK = 0x91,
        // MScriptDescription "GetOverrideAnimationRate GetOverrideAnimation"
        MODIFIER_PROPERTY_OVERRIDE_ANIMATION = 0x92,
        // MScriptDescription "GetAbsorbSpell GetOverrideAnimationRate"
        MODIFIER_PROPERTY_OVERRIDE_ANIMATION_RATE = 0x93,
        // MScriptDescription "GetReflectSpell GetAbsorbSpell"
        MODIFIER_PROPERTY_ABSORB_SPELL = 0x94,
        // MScriptDescription "GetDisableAutoAttack GetReflectSpell"
        MODIFIER_PROPERTY_REFLECT_SPELL = 0x95,
        // MScriptDescription "GetBonusDayVision GetDisableAutoAttack"
        MODIFIER_PROPERTY_DISABLE_AUTOATTACK = 0x96,
        // MScriptDescription "GetBonusDayVisionPercentage GetBonusDayVision"
        MODIFIER_PROPERTY_BONUS_DAY_VISION = 0x97,
        // MScriptDescription "GetBonusNightVision GetBonusDayVisionPercentage"
        MODIFIER_PROPERTY_BONUS_DAY_VISION_PERCENTAGE = 0x98,
        // MScriptDescription "m_bIsFriend GetBonusNightVision"
        MODIFIER_PROPERTY_BONUS_NIGHT_VISION = 0x99,
        // MScriptDescription "GetBonusNightVisionUnique"
        MODIFIER_PROPERTY_BONUS_NIGHT_VISION_UNIQUE = 0x9a,
        // MScriptDescription "GetFixedDayVision GetBonusVisionPercentage"
        MODIFIER_PROPERTY_BONUS_VISION_PERCENTAGE = 0x9b,
        // MScriptDescription "GetFixedNightVision GetFixedDayVision"
        MODIFIER_PROPERTY_FIXED_DAY_VISION = 0x9c,
        // MScriptDescription "GetMinHealth GetFixedNightVision"
        MODIFIER_PROPERTY_FIXED_NIGHT_VISION = 0x9d,
        // MScriptDescription "GetMinHealth"
        MODIFIER_PROPERTY_MIN_HEALTH = 0x9e,
        // MScriptDescription "GetAbsoluteNoDamageMagical GetAbsoluteNoDamagePhysical"
        MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PHYSICAL = 0x9f,
        // MScriptDescription "GetAbsoluteNoDamagePure GetAbsoluteNoDamageMagical"
        MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_MAGICAL = 0xa0,
        // MScriptDescription "GetIsIllusion GetAbsoluteNoDamagePure"
        MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PURE = 0xa1,
        // MScriptDescription "GetModifierIllusionLabel GetIsIllusion"
        MODIFIER_PROPERTY_IS_ILLUSION = 0xa2,
        // MScriptDescription "GetModifierStrongIllusion GetModifierIllusionLabel"
        MODIFIER_PROPERTY_ILLUSION_LABEL = 0xa3,
        // MScriptDescription "GetModifierSuperIllusion GetModifierStrongIllusion"
        MODIFIER_PROPERTY_STRONG_ILLUSION = 0xa4,
        // MScriptDescription "GetModifierSuperIllusionWithUltimate GetModifierSuperIllusion"
        MODIFIER_PROPERTY_SUPER_ILLUSION = 0xa5,
        // MScriptDescription "GetModifierXPDuringDeath GetModifierSuperIllusionWithUltimate"
        MODIFIER_PROPERTY_SUPER_ILLUSION_WITH_ULTIMATE = 0xa6,
        // MScriptDescription "GetModifierXPDuringDeath"
        MODIFIER_PROPERTY_XP_DURING_DEATH = 0xa7,
        // MScriptDescription "GetModifierTurnRate_Override GetModifierTurnRate_Percentage"
        MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE = 0xa8,
        // MScriptDescription "GetDisableHealing GetModifierTurnRate_Override"
        MODIFIER_PROPERTY_TURN_RATE_OVERRIDE = 0xa9,
        // MScriptDescription "GetDisableManaGain GetDisableHealing"
        MODIFIER_PROPERTY_DISABLE_HEALING = 0xaa,
        // MScriptDescription "GetDisableManaGain"
        MODIFIER_PROPERTY_DISABLE_MANA_GAIN = 0xab,
        // MScriptDescription "GetAllowEtherealAttack GetAlwaysAllowAttack"
        MODIFIER_PROPERTY_ALWAYS_ALLOW_ATTACK = 0xac,
        // MScriptDescription "GetOverrideAttackMagical GetAllowEtherealAttack"
        MODIFIER_PROPERTY_ALWAYS_ETHEREAL_ATTACK = 0xad,
        // MScriptDescription "GetModifierUnitStatsNeedsRefresh GetOverrideAttackMagical"
        MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL = 0xae,
        // MScriptDescription "Unused GetModifierUnitStatsNeedsRefresh"
        MODIFIER_PROPERTY_UNIT_STATS_NEEDS_REFRESH = 0xaf,
        // MScriptDescription "Unused Unused"
        MODIFIER_PROPERTY_BOUNTY_CREEP_MULTIPLIER = 0xb0,
        // MScriptDescription "GetModifierUnitDisllowUpgrading Unused"
        MODIFIER_PROPERTY_BOUNTY_OTHER_MULTIPLIER = 0xb1,
        // MScriptDescription "GetModifierDodgeProjectile GetModifierUnitDisllowUpgrading"
        MODIFIER_PROPERTY_UNIT_DISALLOW_UPGRADING = 0xb2,
        // MScriptDescription "GetTriggerCosmeticAndEndAttack GetModifierDodgeProjectile"
        MODIFIER_PROPERTY_DODGE_PROJECTILE = 0xb3,
        // MScriptDescription "GetTriggerCosmeticAndEndAttack"
        MODIFIER_PROPERTY_TRIGGER_COSMETIC_AND_END_ATTACK = 0xb4,
        // MScriptDescription "GetPrimaryStatDamageMultiplier GetModifierMaxDebuffDuration"
        MODIFIER_PROPERTY_MAX_DEBUFF_DURATION = 0xb5,
        // MScriptDescription "GetModifierPreAttack_DeadlyBlow GetPrimaryStatDamageMultiplier"
        MODIFIER_PROPERTY_PRIMARY_STAT_DAMAGE_MULTIPLIER = 0xb6,
        // MScriptDescription "GetAlwaysAutoAttackWhileHoldPosition GetModifierPreAttack_DeadlyBlow"
        MODIFIER_PROPERTY_PREATTACK_DEADLY_BLOW = 0xb7,
        // MScriptDescription "GetAlwaysAutoAttackWhileHoldPosition"
        MODIFIER_PROPERTY_ALWAYS_AUTOATTACK_WHILE_HOLD_POSITION = 0xb8,
        // MScriptDescription "GetMagicalArmorPiercingPercentageTarget GetPhysicalArmorPiercingPercentageTarget"
        MODIFIER_PROPERTY_PHYSICAL_ARMOR_PIERCING_PERCENTAGE_TARGET = 0xb9,
        // MScriptDescription "GetCriticalStrikeBonus GetMagicalArmorPiercingPercentageTarget"
        MODIFIER_PROPERTY_MAGICAL_ARMOR_PIERCING_PERCENTAGE_TARGET = 0xba,
        // MScriptDescription "OnSpellTargetReady GetCriticalStrikeBonus"
        MODIFIER_PROPERTY_CRITICAL_STRIKE_BONUS = 0xbb,
        // MScriptDescription "OnAttackRecord OnSpellTargetReady"
        MODIFIER_EVENT_ON_SPELL_TARGET_READY = 0xbc,
        // MScriptDescription "OnAttackStart OnAttackRecord"
        MODIFIER_EVENT_ON_ATTACK_RECORD = 0xbd,
        // MScriptDescription "OnAttack OnAttackStart"
        MODIFIER_EVENT_ON_ATTACK_START = 0xbe,
        // MScriptDescription "OnAttackLanded OnAttack"
        MODIFIER_EVENT_ON_ATTACK = 0xbf,
        // MScriptDescription "OnAttackLanded"
        MODIFIER_EVENT_ON_ATTACK_LANDED = 0xc0,
        // MScriptDescription "OnAttackAllied OnAttackFail"
        MODIFIER_EVENT_ON_ATTACK_FAIL = 0xc1,
        // MScriptDescription "OnProjectileDodge OnAttackAllied"
        MODIFIER_EVENT_ON_ATTACK_ALLIED = 0xc2,
        // MScriptDescription "OnOrder OnProjectileDodge"
        MODIFIER_EVENT_ON_PROJECTILE_DODGE = 0xc3,
        // MScriptDescription "0ùè´¯ OnOrder"
        MODIFIER_EVENT_ON_ORDER = 0xc4,
        // MScriptDescription "OnAbilityStart OnUnitMoved"
        MODIFIER_EVENT_ON_UNIT_MOVED = 0xc5,
        // MScriptDescription "OnAbilityExecuted OnAbilityStart"
        MODIFIER_EVENT_ON_ABILITY_START = 0xc6,
        // MScriptDescription "OnAbilityFullyCast OnAbilityExecuted"
        MODIFIER_EVENT_ON_ABILITY_EXECUTED = 0xc7,
        // MScriptDescription "OnBreakInvisibility OnAbilityFullyCast"
        MODIFIER_EVENT_ON_ABILITY_FULLY_CAST = 0xc8,
        // MScriptDescription "OnAbilityEndChannel OnBreakInvisibility"
        MODIFIER_EVENT_ON_BREAK_INVISIBILITY = 0xc9,
        // MScriptDescription "Unused OnAbilityEndChannel"
        MODIFIER_EVENT_ON_ABILITY_END_CHANNEL = 0xca,
        // MScriptDescription "Unused Unused"
        MODIFIER_EVENT_ON_PROCESS_UPGRADE = 0xcb,
        // MScriptDescription "OnTakeDamage Unused"
        MODIFIER_EVENT_ON_REFRESH = 0xcc,
        // MScriptDescription "OnDamagePrevented OnTakeDamage"
        MODIFIER_EVENT_ON_TAKEDAMAGE = 0xcd,
        // MScriptDescription "OnStateChanged OnDamagePrevented"
        MODIFIER_EVENT_ON_DEATH_PREVENTED = 0xce,
        // MScriptDescription "Unused OnStateChanged"
        MODIFIER_EVENT_ON_STATE_CHANGED = 0xcf,
        // MScriptDescription "OnProcessCleave Unused"
        MODIFIER_EVENT_ON_ORB_EFFECT = 0xd0,
        // MScriptDescription "gold_amount OnProcessCleave"
        MODIFIER_EVENT_ON_PROCESS_CLEAVE = 0xd1,
        // MScriptDescription "0ûè´¯ OnDamageCalculated"
        MODIFIER_EVENT_ON_DAMAGE_CALCULATED = 0xd2,
        // MScriptDescription "OnAttacked OnMagicDamageCalculated"
        MODIFIER_EVENT_ON_MAGIC_DAMAGE_CALCULATED = 0xd3,
        // MScriptDescription "OnDeath OnAttacked"
        MODIFIER_EVENT_ON_ATTACKED = 0xd4,
        // MScriptDescription "OnDeathCompleted OnDeath"
        MODIFIER_EVENT_ON_DEATH = 0xd5,
        // MScriptDescription "OnRespawn OnDeathCompleted"
        MODIFIER_EVENT_ON_DEATH_COMPLETED = 0xd6,
        // MScriptDescription "OnSpentMana OnRespawn"
        MODIFIER_EVENT_ON_RESPAWN = 0xd7,
        // MScriptDescription "OnSpentHealth OnSpentMana"
        MODIFIER_EVENT_ON_SPENT_MANA = 0xd8,
        // MScriptDescription "OnTeleporting OnSpentHealth"
        MODIFIER_EVENT_ON_SPENT_HEALTH = 0xd9,
        // MScriptDescription "OnTeleported OnTeleporting"
        MODIFIER_EVENT_ON_TELEPORTING = 0xda,
        // MScriptDescription "OnTeleported"
        MODIFIER_EVENT_ON_TELEPORTED = 0xdb,
        // MScriptDescription "OnHealthGained OnSetLocation"
        MODIFIER_EVENT_ON_SET_LOCATION = 0xdc,
        // MScriptDescription "OnManaGained OnHealthGained"
        MODIFIER_EVENT_ON_HEALTH_GAINED = 0xdd,
        // MScriptDescription "OnTakeDamageKillCredit OnManaGained"
        MODIFIER_EVENT_ON_MANA_GAINED = 0xde,
        // MScriptDescription "m_bCompactBuffListPending OnTakeDamageKillCredit"
        MODIFIER_EVENT_ON_TAKEDAMAGE_KILLCREDIT = 0xdf,
        // MScriptDescription "OnHealReceived OnHeroKilled"
        MODIFIER_EVENT_ON_HERO_KILLED = 0xe0,
        // MScriptDescription "OnBuildingKilled OnHealReceived"
        MODIFIER_EVENT_ON_HEAL_RECEIVED = 0xe1,
        // MScriptDescription "OnModelChanged OnBuildingKilled"
        MODIFIER_EVENT_ON_BUILDING_KILLED = 0xe2,
        // MScriptDescription "OnModifierAdded OnModelChanged"
        MODIFIER_EVENT_ON_MODEL_CHANGED = 0xe3,
        // MScriptDescription "OnModifierAdded"
        MODIFIER_EVENT_ON_MODIFIER_ADDED = 0xe4,
        // MScriptDescription "OnTooltip OnModifierRemoved"
        MODIFIER_EVENT_ON_MODIFIER_REMOVED = 0xe5,
        // MScriptDescription "OnTooltip"
        MODIFIER_PROPERTY_TOOLTIP = 0xe6,
        // MScriptDescription "GetModifierModelScale GetModifierModelChange"
        MODIFIER_PROPERTY_MODEL_CHANGE = 0xe7,
        // MScriptDescription "@°è´¯ GetModifierModelScale"
        MODIFIER_PROPERTY_MODEL_SCALE = 0xe8,
        // MScriptDescription "GetModifierModelScaleUseInOutEase GetModifierModelScaleAnimateTime"
        MODIFIER_PROPERTY_MODEL_SCALE_ANIMATE_TIME = 0xe9,
        // MScriptDescription "GetModifierModelScaleConstant GetModifierModelScaleUseInOutEase"
        MODIFIER_PROPERTY_MODEL_SCALE_USE_IN_OUT_EASE = 0xea,
        // MScriptDescription "GetModifierScepter GetModifierModelScaleConstant"
        MODIFIER_PROPERTY_MODEL_SCALE_CONSTANT = 0xeb,
        // MScriptDescription "GetModifierShard GetModifierScepter"
        MODIFIER_PROPERTY_IS_SCEPTER = 0xec,
        // MScriptDescription "GetModifierRadarCooldownReduction GetModifierShard"
        MODIFIER_PROPERTY_IS_SHARD = 0xed,
        // MScriptDescription "GetActivityTranslationModifiers GetModifierRadarCooldownReduction"
        MODIFIER_PROPERTY_RADAR_COOLDOWN_REDUCTION = 0xee,
        // MScriptDescription "GetAttackSound GetActivityTranslationModifiers"
        MODIFIER_PROPERTY_TRANSLATE_ACTIVITY_MODIFIERS = 0xef,
        // MScriptDescription "GetUnitLifetimeFraction GetAttackSound"
        MODIFIER_PROPERTY_TRANSLATE_ATTACK_SOUND = 0xf0,
        // MScriptDescription "GetModifierProvidesFOWVision GetUnitLifetimeFraction"
        MODIFIER_PROPERTY_LIFETIME_FRACTION = 0xf1,
        // MScriptDescription "GetModifierSpellsRequireHP GetModifierProvidesFOWVision"
        MODIFIER_PROPERTY_PROVIDES_FOW_POSITION = 0xf2,
        // MScriptDescription "GetModifierConvertManaCostToHealthCost GetModifierSpellsRequireHP"
        MODIFIER_PROPERTY_SPELLS_REQUIRE_HP = 0xf3,
        // MScriptDescription "GetForceDrawOnMinimap GetModifierConvertManaCostToHealthCost"
        MODIFIER_PROPERTY_CONVERT_MANA_COST_TO_HEALTH_COST = 0xf4,
        // MScriptDescription "GetModifierDisableTurning GetForceDrawOnMinimap"
        MODIFIER_PROPERTY_FORCE_DRAW_MINIMAP = 0xf5,
        // MScriptDescription "GetModifierIgnoreCastAngle GetModifierDisableTurning"
        MODIFIER_PROPERTY_DISABLE_TURNING = 0xf6,
        // MScriptDescription "GetModifierIgnoreCastAngle"
        MODIFIER_PROPERTY_IGNORE_CAST_ANGLE = 0xf7,
        // MScriptDescription "GetModifierOverrideAbilitySpecial GetModifierChangeAbilityValue"
        MODIFIER_PROPERTY_CHANGE_ABILITY_VALUE = 0xf8,
        // MScriptDescription "GetModifierOverrideAbilitySpecial"
        MODIFIER_PROPERTY_OVERRIDE_ABILITY_SPECIAL = 0xf9,
        // MScriptDescription "GetModifierAbilityLayout GetModifierOverrideAbilitySpecialValue"
        MODIFIER_PROPERTY_OVERRIDE_ABILITY_SPECIAL_VALUE = 0xfa,
        // MScriptDescription "OnDominated GetModifierAbilityLayout"
        MODIFIER_PROPERTY_ABILITY_LAYOUT = 0xfb,
        // MScriptDescription "OnKill OnDominated"
        MODIFIER_EVENT_ON_DOMINATED = 0xfc,
        // MScriptDescription "OnAssist OnKill"
        MODIFIER_EVENT_ON_KILL = 0xfd,
        // MScriptDescription "GetModifierTempestDouble OnAssist"
        MODIFIER_EVENT_ON_ASSIST = 0xfe,
        // MScriptDescription "PreserveParticlesOnModelChanged GetModifierTempestDouble"
        MODIFIER_PROPERTY_TEMPEST_DOUBLE = 0xff,
        // MScriptDescription "PreserveParticlesOnModelChanged"
        MODIFIER_PROPERTY_PRESERVE_PARTICLES_ON_MODEL_CHANGE = 0x100,
        // MScriptDescription "GetModifierIgnoreCooldown OnAttackFinished"
        MODIFIER_EVENT_ON_ATTACK_FINISHED = 0x101,
        // MScriptDescription "GetModifierCanAttackTrees GetModifierIgnoreCooldown"
        MODIFIER_PROPERTY_IGNORE_COOLDOWN = 0x102,
        // MScriptDescription "GetVisualZDelta GetModifierCanAttackTrees"
        MODIFIER_PROPERTY_CAN_ATTACK_TREES = 0x103,
        // MScriptDescription "GetVisualZSpeedBaseOverride GetVisualZDelta"
        MODIFIER_PROPERTY_VISUAL_Z_DELTA = 0x104,
        // MScriptDescription " GetVisualZSpeedBaseOverride"
        MODIFIER_PROPERTY_VISUAL_Z_SPEED_BASE_OVERRIDE = 0x105,
        // MScriptDescription "GetModifierNoVisionOfAttacker "
        MODIFIER_PROPERTY_INCOMING_DAMAGE_ILLUSION = 0x106,
        // MScriptDescription "OnTooltip2 GetModifierNoVisionOfAttacker"
        MODIFIER_PROPERTY_DONT_GIVE_VISION_OF_ATTACKER = 0x107,
        // MScriptDescription "OnAttackRecordDestroy OnTooltip2"
        MODIFIER_PROPERTY_TOOLTIP2 = 0x108,
        // MScriptDescription "OnProjectileObstructionHit OnAttackRecordDestroy"
        MODIFIER_EVENT_ON_ATTACK_RECORD_DESTROY = 0x109,
        // MScriptDescription "GetSuppressTeleport OnProjectileObstructionHit"
        MODIFIER_EVENT_ON_PROJECTILE_OBSTRUCTION_HIT = 0x10a,
        // MScriptDescription "OnAttackCancelled GetSuppressTeleport"
        MODIFIER_PROPERTY_SUPPRESS_TELEPORT = 0x10b,
        // MScriptDescription "GetSuppressCleave OnAttackCancelled"
        MODIFIER_EVENT_ON_ATTACK_CANCELLED = 0x10c,
        // MScriptDescription "BotAttackScoreBonus GetSuppressCleave"
        MODIFIER_PROPERTY_SUPPRESS_CLEAVE = 0x10d,
        // MScriptDescription "BotAttackScoreBonus"
        MODIFIER_PROPERTY_BOT_ATTACK_SCORE_BONUS = 0x10e,
        // MScriptDescription "GetModifierMoveSpeedReductionPercentage GetModifierAttackSpeedReductionPercentage"
        MODIFIER_PROPERTY_ATTACKSPEED_REDUCTION_PERCENTAGE = 0x10f,
        // MScriptDescription " GetModifierMoveSpeedReductionPercentage"
        MODIFIER_PROPERTY_MOVESPEED_REDUCTION_PERCENTAGE = 0x110,
        // MScriptDescription "GetModifierAttackSpeedPercentage "
        MODIFIER_PROPERTY_ATTACK_WHILE_MOVING_TARGET = 0x111,
        // MScriptDescription " §è´¯ GetModifierAttackSpeedPercentage"
        MODIFIER_PROPERTY_ATTACKSPEED_PERCENTAGE = 0x112,
        // MScriptDescription "OnPreDebuffApplied OnAttemptProjectileDodge"
        MODIFIER_EVENT_ON_ATTEMPT_PROJECTILE_DODGE = 0x113,
        // MScriptDescription "GetModifierPercentageCooldownStacking OnPreDebuffApplied"
        MODIFIER_EVENT_ON_PREDEBUFF_APPLIED = 0x114,
        // MScriptDescription "GetModifierSpellRedirectTarget GetModifierPercentageCooldownStacking"
        MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE_STACKING = 0x115,
        // MScriptDescription "GetModifierTurnRateConstant GetModifierSpellRedirectTarget"
        MODIFIER_PROPERTY_SPELL_REDIRECT_TARGET = 0x116,
        // MScriptDescription "GetModifierIsPackRat GetModifierTurnRateConstant"
        MODIFIER_PROPERTY_TURN_RATE_CONSTANT = 0x117,
        // MScriptDescription "GetModifierPhysicalDamageOutgoing_Percentage GetModifierIsPackRat"
        MODIFIER_PROPERTY_PACK_RAT = 0x118,
        // MScriptDescription "GetModifierKnockbackAmplification_Percentage GetModifierPhysicalDamageOutgoing_Percentage"
        MODIFIER_PROPERTY_PHYSICALDAMAGEOUTGOING_PERCENTAGE = 0x119,
        // MScriptDescription "GetModifierHealthBarPips GetModifierKnockbackAmplification_Percentage"
        MODIFIER_PROPERTY_KNOCKBACK_AMPLIFICATION_PERCENTAGE = 0x11a,
        // MScriptDescription "GetModifierHealthBarPips"
        MODIFIER_PROPERTY_HEALTHBAR_PIPS = 0x11b,
        // MScriptDescription "OnSpellAppliedSuccessfully GetModifierIncomingDamageConstant"
        MODIFIER_PROPERTY_INCOMING_DAMAGE_CONSTANT = 0x11c,
        // MScriptDescription "GetModifierAvoidDamageAfterReductions OnSpellAppliedSuccessfully"
        MODIFIER_EVENT_SPELL_APPLIED_SUCCESSFULLY = 0x11d,
        // MScriptDescription "GetModifierPropetyFailAttack GetModifierAvoidDamageAfterReductions"
        MODIFIER_PROPERTY_AVOID_DAMAGE_AFTER_REDUCTIONS = 0x11e,
        // MScriptDescription "GetModifierPropetyFailAttack"
        MODIFIER_PROPERTY_FAIL_ATTACK = 0x11f,
        // MScriptDescription "GetModifierSuppressFullscreenDeathFX GetModifierPrereduceIncomingDamage_Mult"
        MODIFIER_PROPERTY_PREREDUCE_INCOMING_DAMAGE_MULT = 0x120,
        // MScriptDescription "MODIFIER_PROPERTY_INCOMING_DAMAGE_CONSTANT_POST GetModifierSuppressFullscreenDeathFX"
        MODIFIER_PROPERTY_SUPPRESS_FULLSCREEN_DEATH_FX = 0x121,
        // MScriptDescription "GetModifierDamageOutgoing_PercentageMultiplicative MODIFIER_PROPERTY_INCOMING_DAMAGE_CONSTANT_POST"
        MODIFIER_PROPERTY_INCOMING_DAMAGE_CONSTANT_POST = 0x122,
        // MScriptDescription "GetModifierTickGold_Multiplier GetModifierDamageOutgoing_PercentageMultiplicative"
        MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_MULTIPLICATIVE = 0x123,
        // MScriptDescription "GEtModifierSlowResistance_Unique GetModifierTickGold_Multiplier"
        MODIFIER_PROPERTY_TICK_GOLD_MULTIPLIER = 0x124,
        // MScriptDescription "GetModifierSlowResistance_Stacking GEtModifierSlowResistance_Unique"
        MODIFIER_PROPERTY_SLOW_RESISTANCE_UNIQUE = 0x125,
        // MScriptDescription "GetModifierAoEBonusPercentage GetModifierSlowResistance_Stacking"
        MODIFIER_PROPERTY_SLOW_RESISTANCE_STACKING = 0x126,
        // MScriptDescription "GetModifierProjectileSpeed GetModifierAoEBonusPercentage"
        MODIFIER_PROPERTY_AOE_BONUS_PERCENTAGE = 0x127,
        // MScriptDescription "GetModifierProjectileSpeed"
        MODIFIER_PROPERTY_PROJECTILE_SPEED = 0x128,
        // MScriptDescription "GetModifierBecomeStrength GetModifierProjectileSpeedTarget"
        MODIFIER_PROPERTY_PROJECTILE_SPEED_TARGET = 0x129,
        // MScriptDescription "GetModifierBecomeAgility GetModifierBecomeStrength"
        MODIFIER_PROPERTY_BECOME_STRENGTH = 0x12a,
        // MScriptDescription "GetModifierBecomeIntelligence GetModifierBecomeAgility"
        MODIFIER_PROPERTY_BECOME_AGILITY = 0x12b,
        // MScriptDescription "GetModifierBecomeIntelligence"
        MODIFIER_PROPERTY_BECOME_INTELLIGENCE = 0x12c,
        // MScriptDescription "OnForceProcMagicStick GetModifierBecomeUniversal"
        MODIFIER_PROPERTY_BECOME_UNIVERSAL = 0x12d,
        // MScriptDescription "OnDamageHPLoss OnForceProcMagicStick"
        MODIFIER_EVENT_ON_FORCE_PROC_MAGIC_STICK = 0x12e,
        // MScriptDescription "GetModifierShareXPRune OnDamageHPLoss"
        MODIFIER_EVENT_ON_DAMAGE_HPLOSS = 0x12f,
        // MScriptDescription "GetModifierNoFreeTPScrollOnDeath GetModifierShareXPRune"
        MODIFIER_PROPERTY_SHARE_XPRUNE = 0x130,
        // MScriptDescription "GetModifierHasBonusNeutralItemChoice GetModifierNoFreeTPScrollOnDeath"
        MODIFIER_PROPERTY_NO_FREE_TP_SCROLL_ON_DEATH = 0x131,
        // MScriptDescription "GetModifierForceMaxHealth GetModifierHasBonusNeutralItemChoice"
        MODIFIER_PROPERTY_HAS_BONUS_NEUTRAL_ITEM_CHOICE = 0x132,
        // MScriptDescription "GetModifierForceMaxMana GetModifierForceMaxHealth"
        MODIFIER_PROPERTY_FORCE_MAX_HEALTH = 0x133,
        // MScriptDescription "GetModifierForceMaxMana"
        MODIFIER_PROPERTY_FORCE_MAX_MANA = 0x134,
        // MScriptDescription "GetModifierAoEBonusConstantStacking GetModifierAoEBonusConstant"
        MODIFIER_PROPERTY_AOE_BONUS_CONSTANT = 0x135,
        // MScriptDescription "OnTakeDamagePostUnavoidableBlock GetModifierAoEBonusConstantStacking"
        MODIFIER_PROPERTY_AOE_BONUS_CONSTANT_STACKING = 0x136,
        // MScriptDescription "OnMuteDamageAbilities OnTakeDamagePostUnavoidableBlock"
        MODIFIER_EVENT_ON_TAKEDAMAGE_POST_UNAVOIDABLE_BLOCK = 0x137,
        // MScriptDescription "‡¶è´¯ OnMuteDamageAbilities"
        MODIFIER_EVENT_ON_MUTE_DAMAGE_ABILITIES = 0x138,
        // MScriptDescription "GetModifierAbilityPoints GetSuppressCrit"
        MODIFIER_PROPERTY_SUPPRESS_CRIT = 0x139,
        // MScriptDescription "GetModifierBuybackPenaltyPercent GetModifierAbilityPoints"
        MODIFIER_PROPERTY_ABILITY_POINTS = 0x13a,
        // MScriptDescription "GetModifierItemSellbackCost GetModifierBuybackPenaltyPercent"
        MODIFIER_PROPERTY_BUYBACK_PENALTY_PERCENT = 0x13b,
        // MScriptDescription "GetModifierDisassembleAnything GetModifierItemSellbackCost"
        MODIFIER_PROPERTY_ITEM_SELLBACK_COST = 0x13c,
        // MScriptDescription "GetModifierFixedManaRegen GetModifierDisassembleAnything"
        MODIFIER_PROPERTY_DISASSEMBLE_ANYTHING = 0x13d,
        // MScriptDescription "GetModifierBonusUphillMissChance GetModifierFixedManaRegen"
        MODIFIER_PROPERTY_FIXED_MANA_REGEN = 0x13e,
        // MScriptDescription "GetModifierCreepDenyPercent GetModifierBonusUphillMissChance"
        MODIFIER_PROPERTY_BONUS_UPHILL_MISS_CHANCE = 0x13f,
        // MScriptDescription "GetModifierAttackSpeedAbsoluteMax GetModifierCreepDenyPercent"
        MODIFIER_PROPERTY_CREEP_DENY_PERCENT = 0x140,
        // MScriptDescription "GetModifierFoWTeam GetModifierAttackSpeedAbsoluteMax"
        MODIFIER_PROPERTY_ATTACKSPEED_ABSOLUTE_MAX = 0x141,
        // MScriptDescription "OnHeroBeginDying GetModifierFoWTeam"
        MODIFIER_PROPERTY_FOW_TEAM = 0x142,
        // MScriptDescription "GetModifierBonusLotusHeal OnHeroBeginDying"
        MODIFIER_EVENT_ON_HERO_BEGIN_DYING = 0x143,
        // MScriptDescription "GetModifierBonusLotusHeal GetModifierBonusLotusHeal"
        MODIFIER_PROPERTY_BONUS_LOTUS_HEAL = 0x144,
        // MScriptDescription "radius GetModifierBonusLotusHeal"
        MODIFIER_PROPERTY_BASE_HP_REGEN_PER_STR_BONUS_PERCENTAGE = 0x145,
        // MScriptDescription "GetModifierBonusLotusHeal GetModifierBonusLotusHeal"
        MODIFIER_PROPERTY_BASE_ARMOR_PER_AGI_BONUS_PERCENTAGE = 0x146,
        // MScriptDescription "GetModifierBonusLotusHeal GetModifierBonusLotusHeal"
        MODIFIER_PROPERTY_BASE_MP_REGEN_PER_INT_BONUS_PERCENTAGE = 0x147,
        // MScriptDescription "OnDayStarted GetModifierBonusLotusHeal"
        MODIFIER_PROPERTY_BASE_MRES_PER_INT_BONUS_PERCENTAGE = 0x148,
        // MScriptDescription "GetModifierCreateBonusIllusionChance OnDayStarted"
        MODIFIER_EVENT_ON_DAY_STARTED = 0x149,
        // MScriptDescription "®è´¯ GetModifierCreateBonusIllusionChance"
        MODIFIER_PROPERTY_CREATE_BONUS_ILLUSION_CHANCE = 0x14a,
        // MScriptDescription "GetModofierPropertyPseudoRandomBonus GetModifierCreateBonusIllusionCount"
        MODIFIER_PROPERTY_CREATE_BONUS_ILLUSION_COUNT = 0x14b,
        // MScriptDescription "GetModifierAttackHeightBonus GetModofierPropertyPseudoRandomBonus"
        MODIFIER_PROPERTY_PSEUDORANDOM_BONUS = 0x14c,
        // MScriptDescription "GetSkipAttackRegulator GetModifierAttackHeightBonus"
        MODIFIER_PROPERTY_ATTACK_HEIGHT_BONUS = 0x14d,
        // MScriptDescription "GetModifierMiss_Percentage_Target GetSkipAttackRegulator"
        MODIFIER_PROPERTY_SKIP_ATTACK_REGULATOR = 0x14e,
        // MScriptDescription "GetModifierAdditionalNutralItemDrops GetModifierMiss_Percentage_Target"
        MODIFIER_PROPERTY_MISS_PERCENTAGE_TARGET = 0x14f,
        // MScriptDescription "GetModifierKillStreakBonusGoldPercentage GetModifierAdditionalNutralItemDrops"
        MODIFIER_PROPERTY_ADDITIONAL_NEUTRAL_ITEM_DROPS = 0x150,
        // MScriptDescription "GetModifierHPRegenMultiplierPreAmplification GetModifierKillStreakBonusGoldPercentage"
        MODIFIER_PROPERTY_KILL_STREAK_BONUS_GOLD_PERCENTAGE = 0x151,
        // MScriptDescription "GetModifierHeroFacetOverride GetModifierHPRegenMultiplierPreAmplification"
        MODIFIER_PROPERTY_HP_REGEN_MULTIPLIER_PRE_AMPLIFICATION = 0x152,
        // MScriptDescription "GetModifierHeroFacetOverride"
        MODIFIER_PROPERTY_HEROFACET_OVERRIDE = 0x153,
        // MScriptDescription "OnCleaveAttackLanded OnTreeCutDown"
        MODIFIER_EVENT_ON_TREE_CUT_DOWN = 0x154,
        // MScriptDescription "MinAttributeLevel OnCleaveAttackLanded"
        MODIFIER_EVENT_ON_CLEAVE_ATTACK_LANDED = 0x155,
        // MScriptDescription "GetTierTokenReroll MinAttributeLevel"
        MODIFIER_PROPERTY_MIN_ATTRIBUTE_LEVEL = 0x156,
        // MScriptDescription "GetTierTokenReroll"
        MODIFIER_PROPERTY_TIER_TOKEN_REROLL = 0x157,
        // MScriptDescription "GetModifierTotal_ConstantBlockStacking GetVisionDegreeRestriction"
        MODIFIER_PROPERTY_VISION_DEGREES_RESTRICTION = 0x158,
        // MScriptDescription "GetModifierInventorySlotRestricted GetModifierTotal_ConstantBlockStacking"
        MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_STACKING = 0x159,
        // MScriptDescription "OnTierTokenRerolled GetModifierInventorySlotRestricted"
        MODIFIER_PROPERTY_INVENTORY_SLOT_RESTRICTED = 0x15a,
        // MScriptDescription "GetRedirectSpell OnTierTokenRerolled"
        MODIFIER_EVENT_ON_TIER_TOKEN_REROLLED = 0x15b,
        // MScriptDescription "GetBaseAttackPostBonus GetRedirectSpell"
        MODIFIER_PROPERTY_REDIRECT_SPELL = 0x15c,
        // MScriptDescription "OnFoWTeamChanged GetBaseAttackPostBonus"
        MODIFIER_PROPERTY_BASEATTACK_POSTBONUS = 0x15d,
        // MScriptDescription "GetSuppressAttackProcs OnFoWTeamChanged"
        MODIFIER_EVENT_ON_FOW_TEAM_CHANGED = 0x15e,
        // MScriptDescription "OnAbilityToggled GetSuppressAttackProcs"
        MODIFIER_PROPERTY_SUPPRESS_ATTACK_PROCS = 0x15f,
        // MScriptDescription "OnAbilityToggled"
        MODIFIER_EVENT_ON_ABILITY_TOGGLED = 0x160,
        MODIFIER_FUNCTION_LAST = 0x161,
        MODIFIER_FUNCTION_INVALID = 0xffff,
    };
};
