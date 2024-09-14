#pragma once
#include "source2sdk/physicslib/FeSDFRigid_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x50
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeBuildSDFRigid_t : public physicslib::FeSDFRigid_t
    {
    public:
        int32_t m_nPriority; // 0x48        
        uint32_t m_nVertexMapHash; // 0x4c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FeBuildSDFRigid_t because it is not a standard-layout class
    static_assert(sizeof(FeBuildSDFRigid_t) == 0x50);
};
