#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "TESTBED: Nested Voice Containers"
        // static metadata: MPropertyDescription "Adds to voices to a tree span."
        #pragma pack(push, 1)
        class CTestBlendContainer : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // m_firstSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_firstSound;
            char m_firstSound[0x8]; // 0xc0            
            // m_secondSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_secondSound;
            char m_secondSound[0x8]; // 0xc8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTestBlendContainer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CTestBlendContainer) == 0xd0);
    };
};
