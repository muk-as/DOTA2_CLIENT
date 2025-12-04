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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VoxelVisBlockOffset_t
        {
        public:
            std::uint32_t m_nOffset; // 0x_            
            std::uint32_t m_nElementCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::VoxelVisBlockOffset_t, m_nOffset) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::VoxelVisBlockOffset_t, m_nElementCount) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::VoxelVisBlockOffset_t) == 0x_);
    };
};
