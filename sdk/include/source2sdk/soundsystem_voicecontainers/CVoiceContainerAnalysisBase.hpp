#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataNodeType "1"
        // static metadata: MPropertyPolymorphicClass
        // static metadata: MPropertyFriendlyName "Analysis Container"
        // static metadata: MPropertyDescription "Does Not Play Sound, member of CVoiceContainerDefaultDefault"
        #pragma pack(push, 1)
        class CVoiceContainerAnalysisBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Regenerate curve on compile"
            bool m_bRegenerateCurveOnCompile; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Envelope Curve"
            CPiecewiseCurve m_curve; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase, m_bRegenerateCurveOnCompile) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase, m_curve) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase) == 0x_);
    };
};
