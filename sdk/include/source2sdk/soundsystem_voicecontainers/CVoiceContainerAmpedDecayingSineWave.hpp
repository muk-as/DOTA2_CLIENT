#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerDecayingSineWave.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "TESTBED: Amped Decaying Sine Wave Container"
        // static metadata: MPropertyDescription "Bytecode instruction"
        #pragma pack(push, 1)
        class CVoiceContainerAmpedDecayingSineWave : public source2sdk::soundsystem_voicecontainers::CVoiceContainerDecayingSineWave
        {
        public:
            // metadata: MPropertyFriendlyName "Attenuation Amount (dB)"
            // metadata: MPropertyDescription "The amount of attenuation ."
            float m_flGainAmount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerAmpedDecayingSineWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerAmpedDecayingSineWave) == 0x_);
    };
};
