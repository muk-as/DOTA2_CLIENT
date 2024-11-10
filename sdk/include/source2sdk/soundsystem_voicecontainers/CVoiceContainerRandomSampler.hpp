#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
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
    // Standard-layout class: false
    // Size: 0x1e8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Random Smapler Container"
    // static metadata: MPropertyDescription "Trash Synth"
    #pragma pack(push, 1)
    class CVoiceContainerRandomSampler : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        float m_flAmplitude; // 0xc0        
        float m_flAmplitudeJitter; // 0xc4        
        float m_flTimeJitter; // 0xc8        
        float m_flMaxLength; // 0xcc        
        int32_t m_nNumDelayVariations; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4]; // 0xd4
        // m_grainResources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>> m_grainResources;
        char m_grainResources[0x18]; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xf0[0xf8];
        
        // Static fields:
        static int32_t &Get_nInstancesFixed() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerRandomSampler")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerRandomSampler because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerRandomSampler) == 0x1e8);
};
