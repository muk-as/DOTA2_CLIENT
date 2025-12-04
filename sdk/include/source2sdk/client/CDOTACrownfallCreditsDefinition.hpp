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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTACrownfallCreditsDefinition
        {
        public:
            // m_vecCreditsBlocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTACrownfallCreditsBlockDefinition> m_vecCreditsBlocks;
            char m_vecCreditsBlocks[0x_]; // 0x_            
            std::int32_t m_nPixelScale; // 0x_            
            std::int32_t m_nWidth; // 0x_            
            std::int32_t m_nHeight; // 0x_            
            std::int32_t m_nDefaultBlockMarginTop; // 0x_            
            float m_flFinalLogoTimeAfterStop; // 0x_            
            float m_flDelayBeforeValveHead; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_vecCreditsBlocks) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nPixelScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_nDefaultBlockMarginTop) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_flFinalLogoTimeAfterStop) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsDefinition, m_flDelayBeforeValveHead) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsDefinition) == 0x_);
    };
};
