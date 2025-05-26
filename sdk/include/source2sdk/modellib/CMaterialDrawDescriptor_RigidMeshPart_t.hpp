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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CMaterialDrawDescriptor_RigidMeshPart_t
        {
        public:
            std::uint16_t m_nRigidBLASIndex; // 0x0            
            std::int16_t m_nBoneIndex; // 0x2            
            std::uint32_t m_nStartIndexOffset; // 0x4            
            std::uint32_t m_nPrimitiveCount; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nRigidBLASIndex) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nBoneIndex) == 0x2);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nStartIndexOffset) == 0x4);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nPrimitiveCount) == 0x8);
        
        static_assert(sizeof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t) == 0xc);
    };
};
