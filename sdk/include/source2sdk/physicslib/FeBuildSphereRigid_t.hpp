#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/FeSphereRigid_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeBuildSphereRigid_t : public source2sdk::physicslib::FeSphereRigid_t
        {
        public:
            std::int32_t m_nPriority; // 0x20            
            std::uint32_t m_nVertexMapHash; // 0x24            
            std::uint32_t m_nAntitunnelGroupBits; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in FeBuildSphereRigid_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::physicslib::FeBuildSphereRigid_t) == 0x30);
    };
};
