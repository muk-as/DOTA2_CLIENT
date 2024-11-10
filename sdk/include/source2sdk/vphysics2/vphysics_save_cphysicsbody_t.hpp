#pragma once
#include "source2sdk/physicslib/RnBodyDesc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::vphysics2
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct vphysics_save_cphysicsbody_t : public physicslib::RnBodyDesc_t
    {
    public:
        uint64_t m_nOldPointer; // 0xd0        
        // m_RemovedHitGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_RemovedHitGroups;
        char m_RemovedHitGroups[0x18]; // 0xd8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in vphysics_save_cphysicsbody_t because it is not a standard-layout class
    static_assert(sizeof(vphysics_save_cphysicsbody_t) == 0xf0);
};
