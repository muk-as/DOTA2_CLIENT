#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 42
    // Alignment: 4
    // Size: 0x4
    enum class dotaunitorder_t : std::uint32_t
    {
        DOTA_UNIT_ORDER_NONE = 0x0,
        DOTA_UNIT_ORDER_MOVE_TO_POSITION = 0x1,
        DOTA_UNIT_ORDER_MOVE_TO_TARGET = 0x2,
        DOTA_UNIT_ORDER_ATTACK_MOVE = 0x3,
        DOTA_UNIT_ORDER_ATTACK_TARGET = 0x4,
        DOTA_UNIT_ORDER_CAST_POSITION = 0x5,
        DOTA_UNIT_ORDER_CAST_TARGET = 0x6,
        DOTA_UNIT_ORDER_CAST_TARGET_TREE = 0x7,
        DOTA_UNIT_ORDER_CAST_NO_TARGET = 0x8,
        DOTA_UNIT_ORDER_CAST_TOGGLE = 0x9,
        DOTA_UNIT_ORDER_HOLD_POSITION = 0xa,
        DOTA_UNIT_ORDER_TRAIN_ABILITY = 0xb,
        DOTA_UNIT_ORDER_DROP_ITEM = 0xc,
        DOTA_UNIT_ORDER_GIVE_ITEM = 0xd,
        DOTA_UNIT_ORDER_PICKUP_ITEM = 0xe,
        DOTA_UNIT_ORDER_PICKUP_RUNE = 0xf,
        DOTA_UNIT_ORDER_PURCHASE_ITEM = 0x10,
        DOTA_UNIT_ORDER_SELL_ITEM = 0x11,
        DOTA_UNIT_ORDER_DISASSEMBLE_ITEM = 0x12,
        DOTA_UNIT_ORDER_MOVE_ITEM = 0x13,
        DOTA_UNIT_ORDER_CAST_TOGGLE_AUTO = 0x14,
        DOTA_UNIT_ORDER_STOP = 0x15,
        DOTA_UNIT_ORDER_TAUNT = 0x16,
        DOTA_UNIT_ORDER_BUYBACK = 0x17,
        DOTA_UNIT_ORDER_GLYPH = 0x18,
        DOTA_UNIT_ORDER_EJECT_ITEM_FROM_STASH = 0x19,
        DOTA_UNIT_ORDER_CAST_RUNE = 0x1a,
        DOTA_UNIT_ORDER_PING_ABILITY = 0x1b,
        DOTA_UNIT_ORDER_MOVE_TO_DIRECTION = 0x1c,
        DOTA_UNIT_ORDER_PATROL = 0x1d,
        DOTA_UNIT_ORDER_VECTOR_TARGET_POSITION = 0x1e,
        DOTA_UNIT_ORDER_RADAR = 0x1f,
        DOTA_UNIT_ORDER_SET_ITEM_COMBINE_LOCK = 0x20,
        DOTA_UNIT_ORDER_CONTINUE = 0x21,
        DOTA_UNIT_ORDER_VECTOR_TARGET_CANCELED = 0x22,
        DOTA_UNIT_ORDER_CAST_RIVER_PAINT = 0x23,
        DOTA_UNIT_ORDER_PREGAME_ADJUST_ITEM_ASSIGNMENT = 0x24,
        DOTA_UNIT_ORDER_DROP_ITEM_AT_FOUNTAIN = 0x25,
        DOTA_UNIT_ORDER_TAKE_ITEM_FROM_NEUTRAL_ITEM_STASH = 0x26,
        DOTA_UNIT_ORDER_MOVE_RELATIVE = 0x27,
        DOTA_UNIT_ORDER_CAST_TOGGLE_ALT = 0x28,
        DOTA_UNIT_ORDER_CONSUME_ITEM = 0x29,
    };
};
