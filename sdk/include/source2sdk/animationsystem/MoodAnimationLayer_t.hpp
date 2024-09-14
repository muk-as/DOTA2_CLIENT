#pragma once
#include "source2sdk/animationsystem/MoodAnimation_t.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyArrayElementNameKey "m_sName"
    #pragma pack(push, 1)
    struct MoodAnimationLayer_t
    {
    public:
        // metadata: MPropertyFriendlyName "Name"
        // metadata: MPropertyDescription "Name of the layer"
        CUtlString m_sName; // 0x0        
        // metadata: MPropertyFriendlyName "Active When Listening"
        // metadata: MPropertyDescription "Sets the mood's animation buckets to be active when the character is listening"
        bool m_bActiveListening; // 0x8        
        // metadata: MPropertyFriendlyName "Active When Talking"
        // metadata: MPropertyDescription "Sets the mood's animation buckets to be active when the character is talking"
        bool m_bActiveTalking; // 0x9        
        [[maybe_unused]] std::uint8_t pad_0x0a[0x6]; // 0xa
        // metadata: MPropertyDescription "List of animations to choose from"
        // m_layerAnimations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::MoodAnimation_t> m_layerAnimations;
        char m_layerAnimations[0x18]; // 0x10        
        // metadata: MPropertyDescription "Intensity of the animation"
        // metadata: MPropertyAttributeRange "0 1"
        tier2::CRangeFloat m_flIntensity; // 0x28        
        // metadata: MPropertyDescription "Multiplier of the animation duration"
        tier2::CRangeFloat m_flDurationScale; // 0x30        
        // metadata: MPropertyDescription "When scaling an animation, grab the scale value as in int. Used for gestures/postures to control number of looping sections"
        bool m_bScaleWithInts; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x39[0x3]; // 0x39
        // metadata: MPropertyDescription "Time before the next animation can start"
        tier2::CRangeFloat m_flNextStart; // 0x3c        
        // metadata: MPropertyDescription "Time from the start of the mood before an animation can start"
        tier2::CRangeFloat m_flStartOffset; // 0x44        
        // metadata: MPropertyDescription "Time from the end of the mood when an animation cannot play"
        tier2::CRangeFloat m_flEndOffset; // 0x4c        
        // metadata: MPropertyDescription "Fade in time of the animation"
        float m_flFadeIn; // 0x54        
        // metadata: MPropertyDescription "Fade out time of the animation"
        float m_flFadeOut; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MoodAnimationLayer_t, m_sName) == 0x0);
    static_assert(offsetof(MoodAnimationLayer_t, m_bActiveListening) == 0x8);
    static_assert(offsetof(MoodAnimationLayer_t, m_bActiveTalking) == 0x9);
    static_assert(offsetof(MoodAnimationLayer_t, m_layerAnimations) == 0x10);
    static_assert(offsetof(MoodAnimationLayer_t, m_flIntensity) == 0x28);
    static_assert(offsetof(MoodAnimationLayer_t, m_flDurationScale) == 0x30);
    static_assert(offsetof(MoodAnimationLayer_t, m_bScaleWithInts) == 0x38);
    static_assert(offsetof(MoodAnimationLayer_t, m_flNextStart) == 0x3c);
    static_assert(offsetof(MoodAnimationLayer_t, m_flStartOffset) == 0x44);
    static_assert(offsetof(MoodAnimationLayer_t, m_flEndOffset) == 0x4c);
    static_assert(offsetof(MoodAnimationLayer_t, m_flFadeIn) == 0x54);
    static_assert(offsetof(MoodAnimationLayer_t, m_flFadeOut) == 0x58);
    
    static_assert(sizeof(MoodAnimationLayer_t) == 0x60);
};
