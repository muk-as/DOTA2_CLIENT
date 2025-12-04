#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTACrownfallCreditsMapSceneAnimateableDefinition.hpp"
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
        class CDOTACrownfallCreditsMapSceneDefinition
        {
        public:
            CPanoramaImageName m_strImage; // 0x_            
            CPanoramaImageName m_strImageMask; // 0x_            
            Vector2D m_vViewStart; // 0x_            
            Vector2D m_vViewEnd; // 0x_            
            source2sdk::client::CrownfallCreditsAABB_t m_bounds; // 0x_            
            std::int32_t m_nAnimOffsetX; // 0x_            
            std::int32_t m_nAnimOffsetY; // 0x_            
            // m_vecAnimations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition> m_vecAnimations;
            char m_vecAnimations[0x_]; // 0x_            
            bool m_bScale; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_strImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_strImageMask) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_vViewStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_vViewEnd) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_bounds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_nAnimOffsetX) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_nAnimOffsetY) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_vecAnimations) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition, m_bScale) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsMapSceneDefinition) == 0x_);
    };
};
