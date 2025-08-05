#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/RenderInputLayoutField_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ModelMeshBufferData_t
        {
        public:
            std::int32_t m_nBlockIndex; // 0x0            
            std::uint32_t m_nElementCount; // 0x4            
            std::uint32_t m_nElementSizeInBytes; // 0x8            
            bool m_bMeshoptCompressed; // 0xc            
            bool m_bMeshoptIndexSequence; // 0xd            
            bool m_bCompressedZSTD; // 0xe            
            bool m_bCreateBufferSRV; // 0xf            
            bool m_bCreateBufferUAV; // 0x10            
            bool m_bCreateRawBuffer; // 0x11            
            bool m_bCreatePooledBuffer; // 0x12            
            uint8_t _pad0013[0x5]; // 0x13
            // m_inputLayoutFields has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::RenderInputLayoutField_t> m_inputLayoutFields;
            char m_inputLayoutFields[0x18]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_nBlockIndex) == 0x0);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_nElementCount) == 0x4);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_nElementSizeInBytes) == 0x8);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bMeshoptCompressed) == 0xc);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bMeshoptIndexSequence) == 0xd);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCompressedZSTD) == 0xe);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreateBufferSRV) == 0xf);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreateBufferUAV) == 0x10);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreateRawBuffer) == 0x11);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreatePooledBuffer) == 0x12);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_inputLayoutFields) == 0x18);
        
        static_assert(sizeof(source2sdk::modellib::ModelMeshBufferData_t) == 0x30);
    };
};
