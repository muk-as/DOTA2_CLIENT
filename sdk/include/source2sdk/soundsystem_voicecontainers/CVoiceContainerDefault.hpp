#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Default Container"
        // static metadata: MPropertyDescription "Voice Container Default"
        #pragma pack(push, 1)
        class CVoiceContainerDefault : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerDefault) == 0xc0);
    };
};
