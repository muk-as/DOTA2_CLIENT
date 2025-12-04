#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/MoodAnimation_t.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            CUtlString m_sName; // 0x_            
            // metadata: MPropertyFriendlyName "Active When Listening"
            // metadata: MPropertyDescription "Sets the mood's animation buckets to be active when the character is listening"
            bool m_bActiveListening; // 0x_            
            // metadata: MPropertyFriendlyName "Active When Talking"
            // metadata: MPropertyDescription "Sets the mood's animation buckets to be active when the character is talking"
            bool m_bActiveTalking; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "List of animations to choose from"
            // m_layerAnimations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::MoodAnimation_t> m_layerAnimations;
            char m_layerAnimations[0x_]; // 0x_            
            // metadata: MPropertyDescription "Intensity of the animation"
            // metadata: MPropertyAttributeRange "0 1"
            source2sdk::tier2::CRangeFloat m_flIntensity; // 0x_            
            // metadata: MPropertyDescription "Multiplier of the animation duration"
            source2sdk::tier2::CRangeFloat m_flDurationScale; // 0x_            
            // metadata: MPropertyDescription "When scaling an animation, grab the scale value as in int. Used for gestures/postures to control number of looping sections"
            bool m_bScaleWithInts; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Time before the next animation can start"
            source2sdk::tier2::CRangeFloat m_flNextStart; // 0x_            
            // metadata: MPropertyDescription "Time from the start of the mood before an animation can start"
            source2sdk::tier2::CRangeFloat m_flStartOffset; // 0x_            
            // metadata: MPropertyDescription "Time from the end of the mood when an animation cannot play"
            source2sdk::tier2::CRangeFloat m_flEndOffset; // 0x_            
            // metadata: MPropertyDescription "Fade in time of the animation"
            float m_flFadeIn; // 0x_            
            // metadata: MPropertyDescription "Fade out time of the animation"
            float m_flFadeOut; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_bActiveListening) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_bActiveTalking) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_layerAnimations) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_flIntensity) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_flDurationScale) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_bScaleWithInts) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_flNextStart) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_flStartOffset) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_flEndOffset) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_flFadeIn) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::MoodAnimationLayer_t, m_flFadeOut) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::MoodAnimationLayer_t) == 0x_);
    };
};
