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
    // Size: 0x68
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAudioMorphData
    {
    public:
        // m_times has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_times;
        char m_times[0x18]; // 0x0        
        // m_nameHashCodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_nameHashCodes;
        char m_nameHashCodes[0x18]; // 0x18        
        // m_nameStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_nameStrings;
        char m_nameStrings[0x18]; // 0x30        
        // m_samples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlVector<float>> m_samples;
        char m_samples[0x18]; // 0x48        
        float m_flEaseIn; // 0x60        
        float m_flEaseOut; // 0x64        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAudioMorphData, m_times) == 0x0);
    static_assert(offsetof(CAudioMorphData, m_nameHashCodes) == 0x18);
    static_assert(offsetof(CAudioMorphData, m_nameStrings) == 0x30);
    static_assert(offsetof(CAudioMorphData, m_samples) == 0x48);
    static_assert(offsetof(CAudioMorphData, m_flEaseIn) == 0x60);
    static_assert(offsetof(CAudioMorphData, m_flEaseOut) == 0x64);
    
    static_assert(sizeof(CAudioMorphData) == 0x68);
};
