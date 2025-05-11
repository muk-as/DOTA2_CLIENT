#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/FeTaperedCapsuleRigid_t.hpp"

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
        // Size: 0x40
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeBuildTaperedCapsuleRigid_t : public source2sdk::physicslib::FeTaperedCapsuleRigid_t
        {
        public:
            std::int32_t m_nPriority; // 0x30            
            std::uint32_t m_nVertexMapHash; // 0x34            
            std::uint32_t m_nAntitunnelGroupBits; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in FeBuildTaperedCapsuleRigid_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::physicslib::FeBuildTaperedCapsuleRigid_t) == 0x40);
    };
};
