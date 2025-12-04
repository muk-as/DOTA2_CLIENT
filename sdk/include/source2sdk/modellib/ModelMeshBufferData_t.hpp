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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ModelMeshBufferData_t
        {
        public:
            std::int32_t m_nBlockIndex; // 0x_            
            std::uint32_t m_nElementCount; // 0x_            
            std::uint32_t m_nElementSizeInBytes; // 0x_            
            bool m_bMeshoptCompressed; // 0x_            
            bool m_bMeshoptIndexSequence; // 0x_            
            bool m_bCompressedZSTD; // 0x_            
            bool m_bCreateBufferSRV; // 0x_            
            bool m_bCreateBufferUAV; // 0x_            
            bool m_bCreateRawBuffer; // 0x_            
            bool m_bCreatePooledBuffer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_inputLayoutFields has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::RenderInputLayoutField_t> m_inputLayoutFields;
            char m_inputLayoutFields[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_nBlockIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_nElementCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_nElementSizeInBytes) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bMeshoptCompressed) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bMeshoptIndexSequence) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCompressedZSTD) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreateBufferSRV) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreateBufferUAV) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreateRawBuffer) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_bCreatePooledBuffer) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelMeshBufferData_t, m_inputLayoutFields) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::ModelMeshBufferData_t) == 0x_);
    };
};
