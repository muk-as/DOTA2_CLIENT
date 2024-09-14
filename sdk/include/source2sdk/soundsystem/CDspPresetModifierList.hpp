#pragma once
#include "source2sdk/soundsystem/CDSPMixgroupModifier.hpp"
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
    class CDspPresetModifierList
    {
    public:
        // metadata: MPropertyDescription "Name of the DSP effect / subgraph used."
        // metadata: MPropertyFriendlyName "DSP Effect Name"
        CUtlString m_dspName; // 0x0        
        // metadata: MPropertyDescription "Set of modifiers for individual mix groups"
        // metadata: MPropertyFriendlyName "Mixgroup Modifiers"
        // m_modifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem::CDSPMixgroupModifier> m_modifiers;
        char m_modifiers[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDspPresetModifierList, m_dspName) == 0x0);
    static_assert(offsetof(CDspPresetModifierList, m_modifiers) == 0x8);
    
    static_assert(sizeof(CDspPresetModifierList) == 0x20);
};
