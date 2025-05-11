#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTACrownfallCreditsCharacterDefinition.hpp"
#include "source2sdk/client/CDOTACrownfallCreditsMapSceneDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            // CUtlVector<source2sdk::client::CDOTACrownfallCreditsCharacterDefinition> m_vecCharacters;
            char m_vecCharacters[0x18]; // 0x0            
            source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition m_scene; // 0x18            
            CUtlString m_strCustomPanoramaClass; // 0x80            
            std::int32_t m_nMarginBottom; // 0x88            
            std::int32_t m_nMarginTop; // 0x8c            
            bool m_bSpecialThanksBlock; // 0x90            
            uint8_t _pad0091[0x7]; // 0x91
            CUtlString m_strLocText; // 0x98            
            bool m_bJustText; // 0xa0            
            uint8_t _pad00a1[0x3]; // 0xa1
            std::int32_t m_nStopOffset; // 0xa4            
            uint8_t _pad00a8[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_vecCharacters) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_scene) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_strCustomPanoramaClass) == 0x80);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_nMarginBottom) == 0x88);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_nMarginTop) == 0x8c);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_bSpecialThanksBlock) == 0x90);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_strLocText) == 0x98);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_bJustText) == 0xa0);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_nStopOffset) == 0xa4);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition) == 0xb8);
    };
};
