#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/RnCapsule_t.hpp"
#include "source2sdk/physicslib/RnShapeDesc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnCapsuleDesc_t : public source2sdk::physicslib::RnShapeDesc_t
        {
        public:
            source2sdk::physicslib::RnCapsule_t m_Capsule; // 0x18            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in RnCapsuleDesc_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::physicslib::RnCapsuleDesc_t) == 0x38);
    };
};
