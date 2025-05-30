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
        // Enumerator count: 115
        // Alignment: 4
        // Size: 0x4
        enum class DOTA_CHAT_MESSAGE : std::uint32_t
        {
            CHAT_MESSAGE_INVALID = 0xffffffff,
            CHAT_MESSAGE_HERO_KILL = 0x0,
            CHAT_MESSAGE_HERO_DENY = 0x1,
            CHAT_MESSAGE_BARRACKS_KILL = 0x2,
            CHAT_MESSAGE_TOWER_KILL = 0x3,
            CHAT_MESSAGE_TOWER_DENY = 0x4,
            CHAT_MESSAGE_FIRSTBLOOD = 0x5,
            CHAT_MESSAGE_STREAK_KILL = 0x6,
            CHAT_MESSAGE_BUYBACK = 0x7,
            CHAT_MESSAGE_AEGIS = 0x8,
            CHAT_MESSAGE_ROSHAN_KILL = 0x9,
            CHAT_MESSAGE_COURIER_LOST = 0xa,
            CHAT_MESSAGE_COURIER_RESPAWNED = 0xb,
            CHAT_MESSAGE_GLYPH_USED = 0xc,
            CHAT_MESSAGE_ITEM_PURCHASE = 0xd,
            CHAT_MESSAGE_CONNECT = 0xe,
            CHAT_MESSAGE_DISCONNECT = 0xf,
            CHAT_MESSAGE_DISCONNECT_WAIT_FOR_RECONNECT = 0x10,
            CHAT_MESSAGE_DISCONNECT_TIME_REMAINING = 0x11,
            CHAT_MESSAGE_DISCONNECT_TIME_REMAINING_PLURAL = 0x12,
            CHAT_MESSAGE_RECONNECT = 0x13,
            CHAT_MESSAGE_PLAYER_LEFT = 0x14,
            CHAT_MESSAGE_SAFE_TO_LEAVE = 0x15,
            CHAT_MESSAGE_RUNE_PICKUP = 0x16,
            CHAT_MESSAGE_RUNE_BOTTLE = 0x17,
            CHAT_MESSAGE_RUNE_DENY = 0x72,
            CHAT_MESSAGE_INTHEBAG = 0x18,
            CHAT_MESSAGE_SECRETSHOP = 0x19,
            CHAT_MESSAGE_ITEM_AUTOPURCHASED = 0x1a,
            CHAT_MESSAGE_ITEMS_COMBINED = 0x1b,
            CHAT_MESSAGE_SUPER_CREEPS = 0x1c,
            CHAT_MESSAGE_CANT_USE_ACTION_ITEM = 0x1d,
            CHAT_MESSAGE_CANTPAUSE = 0x1f,
            CHAT_MESSAGE_NOPAUSESLEFT = 0x20,
            CHAT_MESSAGE_CANTPAUSEYET = 0x21,
            CHAT_MESSAGE_PAUSED = 0x22,
            CHAT_MESSAGE_UNPAUSE_COUNTDOWN = 0x23,
            CHAT_MESSAGE_UNPAUSED = 0x24,
            CHAT_MESSAGE_AUTO_UNPAUSED = 0x25,
            CHAT_MESSAGE_YOUPAUSED = 0x26,
            CHAT_MESSAGE_CANTUNPAUSETEAM = 0x27,
            CHAT_MESSAGE_VOICE_TEXT_BANNED = 0x29,
            CHAT_MESSAGE_SPECTATORS_WATCHING_THIS_GAME = 0x2a,
            CHAT_MESSAGE_REPORT_REMINDER = 0x2b,
            CHAT_MESSAGE_ECON_ITEM = 0x2c,
            CHAT_MESSAGE_TAUNT = 0x2d,
            CHAT_MESSAGE_RANDOM = 0x2e,
            CHAT_MESSAGE_RD_TURN = 0x2f,
            CHAT_MESSAGE_DROP_RATE_BONUS = 0x31,
            CHAT_MESSAGE_NO_BATTLE_POINTS = 0x32,
            CHAT_MESSAGE_DENIED_AEGIS = 0x33,
            CHAT_MESSAGE_INFORMATIONAL = 0x34,
            CHAT_MESSAGE_AEGIS_STOLEN = 0x35,
            CHAT_MESSAGE_ROSHAN_CANDY = 0x36,
            CHAT_MESSAGE_ITEM_GIFTED = 0x37,
            CHAT_MESSAGE_HERO_KILL_WITH_GREEVIL = 0x38,
            CHAT_MESSAGE_HOLDOUT_TOWER_DESTROYED = 0x39,
            CHAT_MESSAGE_HOLDOUT_WALL_DESTROYED = 0x3a,
            CHAT_MESSAGE_HOLDOUT_WALL_FINISHED = 0x3b,
            CHAT_MESSAGE_PLAYER_LEFT_LIMITED_HERO = 0x3e,
            CHAT_MESSAGE_ABANDON_LIMITED_HERO_EXPLANATION = 0x3f,
            CHAT_MESSAGE_DISCONNECT_LIMITED_HERO = 0x40,
            CHAT_MESSAGE_LOW_PRIORITY_COMPLETED_EXPLANATION = 0x41,
            CHAT_MESSAGE_RECRUITMENT_DROP_RATE_BONUS = 0x42,
            CHAT_MESSAGE_FROSTIVUS_SHINING_BOOSTER_ACTIVE = 0x43,
            CHAT_MESSAGE_PLAYER_LEFT_AFK = 0x49,
            CHAT_MESSAGE_PLAYER_LEFT_DISCONNECTED_TOO_LONG = 0x4a,
            CHAT_MESSAGE_PLAYER_ABANDONED = 0x4b,
            CHAT_MESSAGE_PLAYER_ABANDONED_AFK = 0x4c,
            CHAT_MESSAGE_PLAYER_ABANDONED_DISCONNECTED_TOO_LONG = 0x4d,
            CHAT_MESSAGE_WILL_NOT_BE_SCORED = 0x4e,
            CHAT_MESSAGE_WILL_NOT_BE_SCORED_RANKED = 0x4f,
            CHAT_MESSAGE_WILL_NOT_BE_SCORED_NETWORK = 0x50,
            CHAT_MESSAGE_WILL_NOT_BE_SCORED_NETWORK_RANKED = 0x51,
            CHAT_MESSAGE_CAN_QUIT_WITHOUT_ABANDON = 0x52,
            CHAT_MESSAGE_RANKED_GAME_STILL_SCORED_LEAVERS_GET_LOSS = 0x53,
            CHAT_MESSAGE_ABANDON_RANKED_BEFORE_FIRST_BLOOD_PARTY = 0x54,
            CHAT_MESSAGE_COMPENDIUM_LEVEL = 0x55,
            CHAT_MESSAGE_VICTORY_PREDICTION_STREAK = 0x56,
            CHAT_MESSAGE_ASSASSIN_ANNOUNCE = 0x57,
            CHAT_MESSAGE_ASSASSIN_SUCCESS = 0x58,
            CHAT_MESSAGE_ASSASSIN_DENIED = 0x59,
            CHAT_MESSAGE_VICTORY_PREDICTION_SINGLE_USER_CONFIRM = 0x5a,
            CHAT_MESSAGE_EFFIGY_KILL = 0x5b,
            CHAT_MESSAGE_VOICE_TEXT_BANNED_OVERFLOW = 0x5c,
            CHAT_MESSAGE_YEAR_BEAST_KILLED = 0x5d,
            CHAT_MESSAGE_PAUSE_COUNTDOWN = 0x5e,
            CHAT_MESSAGE_COINS_WAGERED = 0x5f,
            CHAT_MESSAGE_HERO_NOMINATED_BAN = 0x60,
            CHAT_MESSAGE_HERO_BANNED = 0x61,
            CHAT_MESSAGE_HERO_BAN_COUNT = 0x62,
            CHAT_MESSAGE_RIVER_PAINTED = 0x63,
            CHAT_MESSAGE_SCAN_USED = 0x64,
            CHAT_MESSAGE_SHRINE_KILLED = 0x65,
            CHAT_MESSAGE_WAGER_TOKEN_SPENT = 0x66,
            CHAT_MESSAGE_RANK_WAGER = 0x67,
            CHAT_MESSAGE_NEW_PLAYER_REMINDER = 0x68,
            CHAT_MESSAGE_OBSERVER_WARD_KILLED = 0x69,
            CHAT_MESSAGE_SENTRY_WARD_KILLED = 0x6a,
            CHAT_MESSAGE_ITEM_PLACED_IN_NEUTRAL_STASH = 0x6b,
            CHAT_MESSAGE_HERO_CHOICE_INVALID = 0x6c,
            CHAT_MESSAGE_BOUNTY = 0x6d,
            CHAT_MESSAGE_ABILITY_DRAFT_START = 0x6e,
            CHAT_MESSAGE_HERO_FOUND_CANDY = 0x6f,
            CHAT_MESSAGE_ABILITY_DRAFT_RANDOMED = 0x70,
            CHAT_MESSAGE_PRIVATE_COACH_CONNECTED = 0x71,
            CHAT_MESSAGE_CANT_PAUSE_TOO_EARLY = 0x73,
            CHAT_MESSAGE_HERO_KILL_WITH_PENGUIN = 0x74,
            CHAT_MESSAGE_MINIBOSS_KILL = 0x75,
            CHAT_MESSAGE_PLAYER_IN_GAME_BAN_TEXT = 0x76,
            CHAT_MESSAGE_BANNER_PLANTED = 0x77,
            CHAT_MESSAGE_ALCHEMIST_GRANTED_SCEPTER = 0x78,
            CHAT_MESSAGE_PROTECTOR_SPAWNED = 0x79,
            CHAT_MESSAGE_CRAFTING_XP = 0x7a,
            CHAT_MESSAGE_ROSHAN_ROAR = 0x7b,
        };
    };
};
