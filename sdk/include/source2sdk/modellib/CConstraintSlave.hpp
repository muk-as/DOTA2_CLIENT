#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x60
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CConstraintSlave
        {
        public:
            Quaternion m_qBaseOrientation; // 0x0            
            Vector m_vBasePosition; // 0x10            
            std::uint32_t m_nBoneHash; // 0x1c            
            float m_flWeight; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            CUtlString m_sName; // 0x28            
            uint8_t _pad0030[0x30];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CConstraintSlave, m_qBaseOrientation) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CConstraintSlave, m_vBasePosition) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CConstraintSlave, m_nBoneHash) == 0x1c);
        static_assert(offsetof(source2sdk::modellib::CConstraintSlave, m_flWeight) == 0x20);
        static_assert(offsetof(source2sdk::modellib::CConstraintSlave, m_sName) == 0x28);
        
        static_assert(sizeof(source2sdk::modellib::CConstraintSlave) == 0x60);
    };
};
