#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CDOTAMusicProbabilityEntry
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_flProbabilityElements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flProbabilityElements;
        char m_flProbabilityElements[0x18]; // 0x8        
        float m_flProbability; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAMusicProbabilityEntry, m_flProbabilityElements) == 0x8);
    static_assert(offsetof(CDOTAMusicProbabilityEntry, m_flProbability) == 0x20);
    
    static_assert(sizeof(CDOTAMusicProbabilityEntry) == 0x28);
};
