#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldCharacterBase
    {
    public:
        CPanoramaImageName m_sImage; // 0x0        
        CUtlString m_sClassName; // 0x10        
        Vector2D m_vSize; // 0x18        
        uint16_t m_unFrameWidth; // 0x20        
        uint16_t m_unFrameTime; // 0x22        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldCharacterBase, m_sImage) == 0x0);
    static_assert(offsetof(CDOTAOverworldCharacterBase, m_sClassName) == 0x10);
    static_assert(offsetof(CDOTAOverworldCharacterBase, m_vSize) == 0x18);
    static_assert(offsetof(CDOTAOverworldCharacterBase, m_unFrameWidth) == 0x20);
    static_assert(offsetof(CDOTAOverworldCharacterBase, m_unFrameTime) == 0x22);
    
    static_assert(sizeof(CDOTAOverworldCharacterBase) == 0x28);
};
