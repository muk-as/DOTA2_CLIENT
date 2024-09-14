#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 26
    // Alignment: 4
    // Size: 0x4
    enum class DOTA_OVERHEAD_ALERT : std::uint32_t
    {
        OVERHEAD_ALERT_GOLD = 0x0,
        OVERHEAD_ALERT_DENY = 0x1,
        OVERHEAD_ALERT_CRITICAL = 0x2,
        OVERHEAD_ALERT_XP = 0x3,
        OVERHEAD_ALERT_BONUS_SPELL_DAMAGE = 0x4,
        OVERHEAD_ALERT_MISS = 0x5,
        OVERHEAD_ALERT_DAMAGE = 0x6,
        OVERHEAD_ALERT_EVADE = 0x7,
        OVERHEAD_ALERT_BLOCK = 0x8,
        OVERHEAD_ALERT_BONUS_POISON_DAMAGE = 0x9,
        OVERHEAD_ALERT_HEAL = 0xa,
        OVERHEAD_ALERT_MANA_ADD = 0xb,
        OVERHEAD_ALERT_MANA_LOSS = 0xc,
        OVERHEAD_ALERT_LAST_HIT_EARLY = 0xd,
        OVERHEAD_ALERT_LAST_HIT_CLOSE = 0xe,
        OVERHEAD_ALERT_LAST_HIT_MISS = 0xf,
        OVERHEAD_ALERT_MAGICAL_BLOCK = 0x10,
        OVERHEAD_ALERT_INCOMING_DAMAGE = 0x11,
        OVERHEAD_ALERT_OUTGOING_DAMAGE = 0x12,
        OVERHEAD_ALERT_DISABLE_RESIST = 0x13,
        OVERHEAD_ALERT_DEATH = 0x14,
        OVERHEAD_ALERT_BLOCKED = 0x15,
        OVERHEAD_ALERT_ITEM_RECEIVED = 0x16,
        OVERHEAD_ALERT_SHARD = 0x17,
        OVERHEAD_ALERT_DEADLY_BLOW = 0x18,
        OVERHEAD_ALERT_FORCE_MISS = 0x19,
    };
};
