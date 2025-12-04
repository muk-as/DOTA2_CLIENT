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
        // Enumerator count: 52
        // Alignment: 4
        // Size: 0x_
        enum class GameAnimEventIndex_t : std::uint32_t
        {
            AE_EMPTY = 0x0,
            AE_CL_PLAYSOUND = 0x1,
            AE_CL_PLAYSOUND_ATTACHMENT = 0x2,
            AE_CL_PLAYSOUND_POSITION = 0x3,
            AE_SV_PLAYSOUND = 0x4,
            AE_CL_STOPSOUND = 0x5,
            AE_CL_PLAYSOUND_LOOPING = 0x6,
            AE_CL_CREATE_PARTICLE_EFFECT = 0x7,
            AE_CL_STOP_PARTICLE_EFFECT = 0x8,
            AE_CL_CREATE_PARTICLE_EFFECT_CFG = 0x9,
            AE_SV_CREATE_PARTICLE_EFFECT_CFG = 0xa,
            AE_SV_STOP_PARTICLE_EFFECT = 0xb,
            AE_FOOTSTEP = 0xc,
            AE_CL_STOP_RAGDOLL_CONTROL = 0xd,
            AE_CL_ENABLE_BODYGROUP = 0xe,
            AE_CL_DISABLE_BODYGROUP = 0xf,
            AE_BODYGROUP_SET_VALUE = 0x10,
            AE_WEAPON_PERFORM_ATTACK = 0x11,
            AE_FIRE_INPUT = 0x12,
            AE_CL_CLOTH_ATTR = 0x13,
            AE_CL_CLOTH_GROUND_OFFSET = 0x14,
            AE_CL_CLOTH_STIFFEN = 0x15,
            AE_CL_CLOTH_EFFECT = 0x16,
            AE_CL_CREATE_ANIM_SCOPE_PROP = 0x17,
            AE_SV_IKLOCK = 0x18,
            AE_PULSE_GRAPH = 0x19,
            AE_PULSE_GRAPH_LOOKAT = 0x1a,
            AE_PULSE_GRAPH_AIMAT = 0x1b,
            AE_PULSE_GRAPH_IKLOCKLEFTARM = 0x1c,
            AE_PULSE_GRAPH_IKLOCKRIGHTARM = 0x1d,
            AE_DISABLE_PLATFORM = 0x1e,
            AE_ENABLE_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1f,
            AE_ENABLE_PLATFORM_PLAYER_IGNORES_YAW = 0x20,
            AE_DESTRUCTIBLE_PART_DESTROY = 0x21,
            AE_CL_SUPPRESS_EVENTS_WITH_TAG = 0x22,
            AE_CL_HIDE_PARTICLE_EFFECT = 0x23,
            AE_CL_SHOW_PARTICLE_EFFECT = 0x24,
            AE_CL_ADD_PARTICLE_EFFECT_CP = 0x25,
            AE_CL_SPEECH = 0x26,
            AE_CL_PANORAMA_EVENT = 0x27,
            AE_CL_DOTA_PLAY_STATUS_EFFECT = 0x28,
            AE_CL_DOTA_STOP_STATUS_EFFECT = 0x29,
            AE_CL_DOTA_NPC_CREATE_PARTICLE_EFFECT = 0x2a,
            AE_CL_DOTA_RUBICK_ARCANA_CREATE_PARTICLE_EFFECT = 0x2b,
            AE_DOTA_PET_ITEM_PICKUP = 0x2c,
            AE_DOTA_PET_ITEM_DROP = 0x2d,
            AE_DOTA_SUPPRESS_CONSTANT_LAYER = 0x2e,
            AE_DOTA_PLAY_SOUND_ATTACK_SPECIAL = 0x2f,
            AE_DOTA_CREATE_CLINKZ_ATTACK = 0x30,
            AE_DOTA_PLAY_SOUND_ATTACK_BACKSTAB = 0x31,
            AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES = 0x32,
            AE_DOTA_SWITCH_ATTACK_COMBO = 0x33,
        };
    };
};
