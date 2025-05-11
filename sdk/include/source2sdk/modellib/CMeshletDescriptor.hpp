#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/PackedAABB_t.hpp"
#include "source2sdk/modellib/CDrawCullingData.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMeshletDescriptor
        {
        public:
            source2sdk::mathlib_extended::PackedAABB_t m_PackedAABB; // 0x0            
            source2sdk::modellib::CDrawCullingData m_CullingData; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_PackedAABB) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_CullingData) == 0x8);
        
        static_assert(sizeof(source2sdk::modellib::CMeshletDescriptor) == 0x18);
    };
};
