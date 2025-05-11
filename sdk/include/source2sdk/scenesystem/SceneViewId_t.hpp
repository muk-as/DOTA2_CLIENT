#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace scenesystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SceneViewId_t
        {
        public:
            std::uint64_t m_nViewId; // 0x0            
            std::uint64_t m_nFrameCount; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::scenesystem::SceneViewId_t, m_nViewId) == 0x0);
        static_assert(offsetof(source2sdk::scenesystem::SceneViewId_t, m_nFrameCount) == 0x8);
        
        static_assert(sizeof(source2sdk::scenesystem::SceneViewId_t) == 0x10);
    };
};
