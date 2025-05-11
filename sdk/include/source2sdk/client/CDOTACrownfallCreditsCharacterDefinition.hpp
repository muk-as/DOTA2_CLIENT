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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xa0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTACrownfallCreditsCharacterDefinition
        {
        public:
            CPanoramaImageName m_strImage; // 0x0            
            CUtlString m_strLocCharacterName; // 0x10            
            CUtlString m_strLocCharacterTitle; // 0x18            
            std::int32_t m_nUniqueClickKey; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            CPanoramaImageName m_strImageAlt; // 0x28            
            CUtlString m_strLocCharacterNameAlt; // 0x38            
            CUtlString m_strLocCharacterTitleAlt; // 0x40            
            bool m_bFlipFacing; // 0x48            
            uint8_t _pad0049[0x3]; // 0x49
            source2sdk::client::CrownfallCreditsAABB_t m_bounds; // 0x4c            
            uint8_t _pad005c[0x4]; // 0x5c
            CUtlString m_strLocCharacterTitleAlt2; // 0x60            
            CUtlString m_strLocCharacterTitleAlt3; // 0x68            
            CUtlString m_strLocCharacterTitleAlt4; // 0x70            
            CUtlString m_strLocCharacterTitleAlt5; // 0x78            
            CUtlString m_strLocCharacterTitleAlt6; // 0x80            
            std::int32_t m_nAltImageW; // 0x88            
            std::int32_t m_nAltImageH; // 0x8c            
            std::int32_t m_nAltImageFrameTime; // 0x90            
            std::int32_t m_nYOffset; // 0x94            
            std::uint16_t m_unFrameTime; // 0x98            
            uint8_t _pad009a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strImage) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitle) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nUniqueClickKey) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strImageAlt) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterNameAlt) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_bFlipFacing) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_bounds) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt2) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt3) == 0x68);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt4) == 0x70);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt5) == 0x78);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_strLocCharacterTitleAlt6) == 0x80);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nAltImageW) == 0x88);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nAltImageH) == 0x8c);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nAltImageFrameTime) == 0x90);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_nYOffset) == 0x94);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition, m_unFrameTime) == 0x98);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsCharacterDefinition) == 0xa0);
    };
};
