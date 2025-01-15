#pragma once
#include "source2sdk/client/CDOTACrownfallCreditsCharacterDefinition.hpp"
#include "source2sdk/client/CDOTACrownfallCreditsMapSceneDefinition.hpp"
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
    // Size: 0xb8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDOTACrownfallCreditsBlockDefinition
    {
    public:
        // m_vecCharacters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTACrownfallCreditsCharacterDefinition> m_vecCharacters;
        char m_vecCharacters[0x18]; // 0x0        
        client::CDOTACrownfallCreditsMapSceneDefinition m_scene; // 0x18        
        CUtlString m_strCustomPanoramaClass; // 0x80        
        int32_t m_nMarginBottom; // 0x88        
        int32_t m_nMarginTop; // 0x8c        
        bool m_bSpecialThanksBlock; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x91[0x7]; // 0x91
        CUtlString m_strLocText; // 0x98        
        bool m_bJustText; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x3]; // 0xa1
        int32_t m_nStopOffset; // 0xa4        
        [[maybe_unused]] std::uint8_t pad_0xa8[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_vecCharacters) == 0x0);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_scene) == 0x18);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_strCustomPanoramaClass) == 0x80);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_nMarginBottom) == 0x88);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_nMarginTop) == 0x8c);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_bSpecialThanksBlock) == 0x90);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_strLocText) == 0x98);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_bJustText) == 0xa0);
    static_assert(offsetof(CDOTACrownfallCreditsBlockDefinition, m_nStopOffset) == 0xa4);
    
    static_assert(sizeof(CDOTACrownfallCreditsBlockDefinition) == 0xb8);
};
