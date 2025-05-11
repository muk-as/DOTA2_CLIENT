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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance
        {
        public:
            // metadata: MPropertyFriendlyName "Quietest Volume"
            float m_flMinVolume; // 0x0            
            // metadata: MPropertyFriendlyName "# Instances Playing Until We Get Louder Than Quietest Volume"
            std::int32_t m_nInstancesAtMinVolume; // 0x4            
            // metadata: MPropertyFriendlyName "Loudest Volume"
            float m_flMaxVolume; // 0x8            
            // metadata: MPropertyFriendlyName "# Instances Playing Required To Reach Loudest Volume"
            std::int32_t m_nInstancesAtMaxVolume; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, m_flMinVolume) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, m_nInstancesAtMinVolume) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, m_flMaxVolume) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, m_nInstancesAtMaxVolume) == 0xc);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance) == 0x10);
    };
};
