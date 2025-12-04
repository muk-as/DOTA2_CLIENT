#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/CFeJiggleBone.hpp"

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
        class CFeIndexedJiggleBone
        {
        public:
            std::uint32_t m_nNode; // 0x_            
            std::uint32_t m_nJiggleParent; // 0x_            
            source2sdk::physicslib::CFeJiggleBone m_jiggleBone; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CFeIndexedJiggleBone, m_nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeIndexedJiggleBone, m_nJiggleParent) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeIndexedJiggleBone, m_jiggleBone) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::CFeIndexedJiggleBone) == 0x_);
    };
};
