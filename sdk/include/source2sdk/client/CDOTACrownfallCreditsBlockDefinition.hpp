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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTACrownfallCreditsBlockDefinition
        {
        public:
            // m_vecCharacters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTACrownfallCreditsCharacterDefinition> m_vecCharacters;
            char m_vecCharacters[0x_]; // 0x_            
            source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition m_scene; // 0x_            
            CUtlString m_strCustomPanoramaClass; // 0x_            
            std::int32_t m_nMarginBottom; // 0x_            
            std::int32_t m_nMarginTop; // 0x_            
            bool m_bSpecialThanksBlock; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLocText; // 0x_            
            bool m_bJustText; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nStopOffset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_vecCharacters) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_scene) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_strCustomPanoramaClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_nMarginBottom) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_nMarginTop) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_bSpecialThanksBlock) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_strLocText) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_bJustText) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition, m_nStopOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsBlockDefinition) == 0x_);
    };
};
