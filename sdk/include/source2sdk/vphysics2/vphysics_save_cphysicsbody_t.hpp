#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/RnBodyDesc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace vphysics2
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct vphysics_save_cphysicsbody_t : public source2sdk::physicslib::RnBodyDesc_t
        {
        public:
            std::uint64_t m_nOldPointer; // 0xd0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in vphysics_save_cphysicsbody_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::vphysics2::vphysics_save_cphysicsbody_t) == 0xd8);
    };
};
