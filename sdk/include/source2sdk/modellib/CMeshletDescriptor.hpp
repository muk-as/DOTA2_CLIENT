#pragma once
#include "source2sdk/mathlib_extended/PackedAABB_t.hpp"
#include "source2sdk/modellib/CDrawCullingData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
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
        mathlib_extended::PackedAABB_t m_PackedAABB; // 0x0        
        modellib::CDrawCullingData m_CullingData; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMeshletDescriptor, m_PackedAABB) == 0x0);
    static_assert(offsetof(CMeshletDescriptor, m_CullingData) == 0x8);
    
    static_assert(sizeof(CMeshletDescriptor) == 0x18);
};
