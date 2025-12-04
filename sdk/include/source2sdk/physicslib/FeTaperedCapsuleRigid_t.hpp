#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeTaperedCapsuleRigid_t
        {
        public:
            fltx4 vSphere[2]; // 0x_            
            std::uint16_t nNode; // 0x_            
            std::uint16_t nCollisionMask; // 0x_            
            std::uint16_t nVertexMapIndex; // 0x_            
            std::uint16_t nFlags; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeTaperedCapsuleRigid_t, vSphere) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeTaperedCapsuleRigid_t, nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeTaperedCapsuleRigid_t, nCollisionMask) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeTaperedCapsuleRigid_t, nVertexMapIndex) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeTaperedCapsuleRigid_t, nFlags) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeTaperedCapsuleRigid_t) == 0x_);
    };
};
