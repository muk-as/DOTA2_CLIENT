#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTACrownfallCreditsBlockDefinition.hpp"

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
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTACrownfallCreditsDefinition
        {
        public:
            // m_vecCreditsBlocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTACrownfallCreditsBlockDefinition> m_vecCreditsBlocks;
            char m_vecCreditsBlocks[0x18]; // 0x0            
            std::int32_t m_nPixelScale; // 0x18            
            std::int32_t m_nWidth; // 0x1c            
            std::int32_t m_nHeight; // 0x20            
            std::int32_t m_nDefaultBlockMarginTop; // 0x24            
            float m_flFinalLogoTimeAfterStop; // 0x28            
            float m_flDelayBeforeValveHead; // 0x2c            
            uint8_t _pad0030[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_vecCreditsBlocks) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nPixelScale) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nWidth) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nHeight) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nDefaultBlockMarginTop) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_flFinalLogoTimeAfterStop) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_flDelayBeforeValveHead) == 0x2c);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsDefinition) == 0x40);
    };
};
