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
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTACrownfallCreditsMapSceneAnimateableDefinition
        {
        public:
            CPanoramaImageName m_strImage; // 0x0            
            source2sdk::client::CrownfallCreditsAABB_t m_bounds; // 0x10            
            std::uint16_t m_unFrameTime; // 0x20            
            bool m_bClickable; // 0x22            
            uint8_t _pad0023[0x1]; // 0x23
            std::int32_t m_nNumFrames; // 0x24            
            CUtlString m_strSound; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_strImage) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_bounds) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_unFrameTime) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_bClickable) == 0x22);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_nNumFrames) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition, m_strSound) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CDOTACrownfallCreditsMapSceneAnimateableDefinition) == 0x30);
    };
};
