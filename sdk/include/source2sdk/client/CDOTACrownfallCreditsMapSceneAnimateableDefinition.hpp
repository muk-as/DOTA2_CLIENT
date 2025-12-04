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
        class CDOTACrownfallCreditsMapSceneAnimateableDefinition
        {
        public:
            CPanoramaImageName m_strImage; // 0x_            
            source2sdk::client::CrownfallCreditsAABB_t m_bounds; // 0x_            
            std::uint16_t m_unFrameTime; // 0x_            
            bool m_bClickable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nNumFrames; // 0x_            
            CUtlString m_strSound; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_strImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_bounds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_unFrameTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_bClickable) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_nNumFrames) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_strSound) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition) == 0x_);
    };
};
