#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVSound.hpp"
namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        struct CVoiceContainerAnalysisBase;
    };
};

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
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MPropertyPolymorphicClass
        // static metadata: MVDataFileExtension
        // static metadata: MPropertyFriendlyName "VSND Container"
        // static metadata: MPropertyDescription "Voice Container Base"
        #pragma pack(push, 1)
        class CVoiceContainerBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressField
            source2sdk::soundsystem_voicecontainers::CVSound m_vSound; // 0x_            
            // metadata: MPropertySuppressExpr "true"
            source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase, m_vSound) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase, m_pEnvelopeAnalyzer) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase) == 0x_);
    };
};
