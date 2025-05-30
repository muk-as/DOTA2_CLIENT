#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct BaseSceneObjectOverride_t
        {
        public:
            std::uint32_t m_nSceneObjectIndex; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::BaseSceneObjectOverride_t, m_nSceneObjectIndex) == 0x0);
        
        static_assert(sizeof(source2sdk::worldrenderer::BaseSceneObjectOverride_t) == 0x4);
    };
};
