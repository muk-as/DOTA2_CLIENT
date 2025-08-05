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
        // Registered alignment: 0x2
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeDynKinLink_t
        {
        public:
            std::uint16_t m_nParent; // 0x0            
            std::uint16_t m_nChild; // 0x2            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeDynKinLink_t, m_nParent) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeDynKinLink_t, m_nChild) == 0x2);
        
        static_assert(sizeof(source2sdk::physicslib::FeDynKinLink_t) == 0x4);
    };
};
