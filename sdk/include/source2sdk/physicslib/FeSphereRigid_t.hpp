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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeSphereRigid_t
        {
        public:
            fltx4 vSphere; // 0x0            
            std::uint16_t nNode; // 0x10            
            std::uint16_t nCollisionMask; // 0x12            
            std::uint16_t nVertexMapIndex; // 0x14            
            std::uint16_t nFlags; // 0x16            
            uint8_t _pad0018[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSphereRigid_t, vSphere) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeSphereRigid_t, nNode) == 0x10);
        static_assert(offsetof(source2sdk::physicslib::FeSphereRigid_t, nCollisionMask) == 0x12);
        static_assert(offsetof(source2sdk::physicslib::FeSphereRigid_t, nVertexMapIndex) == 0x14);
        static_assert(offsetof(source2sdk::physicslib::FeSphereRigid_t, nFlags) == 0x16);
        
        static_assert(sizeof(source2sdk::physicslib::FeSphereRigid_t) == 0x20);
    };
};
