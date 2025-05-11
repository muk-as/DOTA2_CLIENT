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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0xd0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFeNamedJiggleBone
        {
        public:
            CUtlString m_strParentBone; // 0x0            
            uint8_t _pad0008[0x8]; // 0x8
            CTransform m_transform; // 0x10            
            std::uint32_t m_nJiggleParent; // 0x30            
            source2sdk::physicslib::CFeJiggleBone m_jiggleBone; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CFeNamedJiggleBone, m_strParentBone) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::CFeNamedJiggleBone, m_transform) == 0x10);
        static_assert(offsetof(source2sdk::physicslib::CFeNamedJiggleBone, m_nJiggleParent) == 0x30);
        static_assert(offsetof(source2sdk::physicslib::CFeNamedJiggleBone, m_jiggleBone) == 0x34);
        
        static_assert(sizeof(source2sdk::physicslib::CFeNamedJiggleBone) == 0xd0);
    };
};
