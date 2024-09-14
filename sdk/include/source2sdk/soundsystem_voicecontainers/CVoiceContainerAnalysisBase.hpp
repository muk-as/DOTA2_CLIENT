#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataNodeType "1"
    // static metadata: MFgdFromSchemaEditablePolymorphicThisClass
    // static metadata: MPropertyFriendlyName "Analysis Container"
    // static metadata: MPropertyDescription "Does Not Play Sound, member of CVoiceContainerDefaultDefault"
    #pragma pack(push, 1)
    class CVoiceContainerAnalysisBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyFriendlyName "Regenerate curve on compile"
        bool m_bRegenerateCurveOnCompile; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7]; // 0x9
        // metadata: MPropertyFriendlyName "Envelope Curve"
        CPiecewiseCurve m_curve; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CVoiceContainerAnalysisBase, m_bRegenerateCurveOnCompile) == 0x8);
    static_assert(offsetof(CVoiceContainerAnalysisBase, m_curve) == 0x10);
    
    static_assert(sizeof(CVoiceContainerAnalysisBase) == 0x50);
};
