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
        // Enumerator count: 18
        // Alignment: 4
        // Size: 0x_
        enum class DOTAVisualNovelDialogueActorOverlayEffect_t : std::uint32_t
        {
            VN_DIALOGUE_EFFECT_ACTOR_NONE = 0x0,
            VN_DIALOGUE_EFFECT_ACTOR_ANGER = 0x1,
            VN_DIALOGUE_EFFECT_ACTOR_ANXIETY = 0x2,
            VN_DIALOGUE_EFFECT_ACTOR_SWEATDROP = 0x4,
            VN_DIALOGUE_EFFECT_ACTOR_DAZED = 0x8,
            VN_DIALOGUE_EFFECT_ACTOR_SURPRISE = 0x10,
            VN_DIALOGUE_EFFECT_ACTOR_CONFUSED = 0x20,
            VN_DIALOGUE_EFFECT_ACTOR_ANNOYED = 0x40,
            VN_DIALOGUE_EFFECT_ACTOR_ASLEEP = 0x80,
            VN_DIALOGUE_EFFECT_ACTOR_SPARKLE = 0x100,
            VN_DIALOGUE_EFFECT_ACTOR_NOISY = 0x200,
            VN_DIALOGUE_EFFECT_ACTOR_SMOKE = 0x400,
            VN_DIALOGUE_EFFECT_ACTOR_DEPRESSED = 0x800,
            VN_DIALOGUE_EFFECT_ACTOR_POWER = 0x1000,
            VN_DIALOGUE_EFFECT_ACTOR_HUFF = 0x2000,
            VN_DIALOGUE_EFFECT_ACTOR_HEART = 0x4000,
            VN_DIALOGUE_EFFECT_ACTOR_POWERDOWN = 0x8000,
            VN_DIALOGUE_EFFECT_ACTOR_GASP = 0x10000,
        };
    };
};
