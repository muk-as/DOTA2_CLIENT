#pragma once
#include "source2sdk/client/CDOTACrownfallCreditsBlockDefinition.hpp"
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
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDOTACrownfallCreditsDefinition
    {
    public:
        // m_vecCreditsBlocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTACrownfallCreditsBlockDefinition> m_vecCreditsBlocks;
        char m_vecCreditsBlocks[0x18]; // 0x0        
        int32_t m_nPixelScale; // 0x18        
        int32_t m_nWidth; // 0x1c        
        int32_t m_nHeight; // 0x20        
        int32_t m_nDefaultBlockMarginTop; // 0x24        
        float m_flFinalLogoTimeAfterStop; // 0x28        
        float m_flDelayBeforeValveHead; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x30[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTACrownfallCreditsDefinition, m_vecCreditsBlocks) == 0x0);
    static_assert(offsetof(CDOTACrownfallCreditsDefinition, m_nPixelScale) == 0x18);
    static_assert(offsetof(CDOTACrownfallCreditsDefinition, m_nWidth) == 0x1c);
    static_assert(offsetof(CDOTACrownfallCreditsDefinition, m_nHeight) == 0x20);
    static_assert(offsetof(CDOTACrownfallCreditsDefinition, m_nDefaultBlockMarginTop) == 0x24);
    static_assert(offsetof(CDOTACrownfallCreditsDefinition, m_flFinalLogoTimeAfterStop) == 0x28);
    static_assert(offsetof(CDOTACrownfallCreditsDefinition, m_flDelayBeforeValveHead) == 0x2c);
    
    static_assert(sizeof(CDOTACrownfallCreditsDefinition) == 0x40);
};
