#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDSPMixgroupModifier
    {
    public:
        // metadata: MPropertyDescription "Name of the mixgroup. TODO: needs to be autopopulated with mixgroups."
        // metadata: MPropertyFriendlyName "Mixgroup Name"
        CUtlString m_mixgroup; // 0x0        
        // metadata: MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the max reverb blend distance. 1.0 leaves the volume unchanged."
        // metadata: MPropertyFriendlyName "Max reverb gain amount for listener DSP."
        float m_flModifier; // 0x8        
        // metadata: MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the min reverb blend distance. 1.0 leaves the volume unchanged."
        // metadata: MPropertyFriendlyName "Min reverb gain amount amount for listener DSP."
        float m_flModifierMin; // 0xc        
        // metadata: MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
        // metadata: MPropertyFriendlyName "Max reverb gain amount for source-specific DSP."
        float m_flSourceModifier; // 0x10        
        // metadata: MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
        // metadata: MPropertyFriendlyName "Min reverb gain amount for source-specific DSP."
        float m_flSourceModifierMin; // 0x14        
        // metadata: MPropertyDescription "When a source has source-specific DSP, this can be used as an additional mix stage for the listener reverb amount."
        // metadata: MPropertyFriendlyName "Modification amount for listener DSP when source DSP is used."
        float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDSPMixgroupModifier, m_mixgroup) == 0x0);
    static_assert(offsetof(CDSPMixgroupModifier, m_flModifier) == 0x8);
    static_assert(offsetof(CDSPMixgroupModifier, m_flModifierMin) == 0xc);
    static_assert(offsetof(CDSPMixgroupModifier, m_flSourceModifier) == 0x10);
    static_assert(offsetof(CDSPMixgroupModifier, m_flSourceModifierMin) == 0x14);
    static_assert(offsetof(CDSPMixgroupModifier, m_flListenerReverbModifierWhenSourceReverbIsActive) == 0x18);
    
    static_assert(sizeof(CDSPMixgroupModifier) == 0x20);
};
