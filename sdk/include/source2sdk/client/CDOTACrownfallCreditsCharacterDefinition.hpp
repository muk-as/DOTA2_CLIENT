#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CrownfallCreditsAABB_t.hpp"

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
        class CDOTACrownfallCreditsCharacterDefinition
        {
        public:
            CPanoramaImageName m_strImage; // 0x_            
            CUtlString m_strLocCharacterName; // 0x_            
            CUtlString m_strLocCharacterTitle; // 0x_            
            std::int32_t m_nUniqueClickKey; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPanoramaImageName m_strImageAlt; // 0x_            
            CUtlString m_strLocCharacterNameAlt; // 0x_            
            CUtlString m_strLocCharacterTitleAlt; // 0x_            
            bool m_bFlipFacing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CrownfallCreditsAABB_t m_bounds; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLocCharacterTitleAlt2; // 0x_            
            CUtlString m_strLocCharacterTitleAlt3; // 0x_            
            CUtlString m_strLocCharacterTitleAlt4; // 0x_            
            CUtlString m_strLocCharacterTitleAlt5; // 0x_            
            CUtlString m_strLocCharacterTitleAlt6; // 0x_            
            std::int32_t m_nAltImageW; // 0x_            
            std::int32_t m_nAltImageH; // 0x_            
            std::int32_t m_nAltImageFrameTime; // 0x_            
            std::int32_t m_nYOffset; // 0x_            
            std::uint16_t m_unFrameTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nUniqueClickKey) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strImageAlt) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterNameAlt) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_bFlipFacing) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_bounds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt2) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt3) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt4) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt5) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt6) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nAltImageW) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nAltImageH) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nAltImageFrameTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nYOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_unFrameTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition) == 0x_);
    };
};
