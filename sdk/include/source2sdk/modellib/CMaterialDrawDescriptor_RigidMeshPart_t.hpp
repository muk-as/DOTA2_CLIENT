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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CMaterialDrawDescriptor_RigidMeshPart_t
        {
        public:
            std::uint16_t m_nRigidBLASIndex; // 0x_            
            std::int16_t m_nBoneIndex; // 0x_            
            std::uint32_t m_nStartIndexOffset; // 0x_            
            std::uint32_t m_nPrimitiveCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nRigidBLASIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nStartIndexOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t, m_nPrimitiveCount) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t) == 0x_);
    };
};
