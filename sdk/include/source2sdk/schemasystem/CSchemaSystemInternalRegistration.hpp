#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: schemasystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace schemasystem
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CSchemaSystemInternalRegistration
        {
        public:
            Vector2D m_Vector2D; // 0x_            
            Vector m_Vector; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            VectorAligned m_VectorAligned; // 0x_            
            Quaternion m_Quaternion; // 0x_            
            QAngle m_QAngle; // 0x_            
            RotationVector m_RotationVector; // 0x_            
            RadianEuler m_RadianEuler; // 0x_            
            DegreeEuler m_DegreeEuler; // 0x_            
            QuaternionStorage m_QuaternionStorage; // 0x_            
            matrix3x4_t m_matrix3x4_t; // 0x_            
            matrix3x4a_t m_matrix3x4a_t; // 0x_            
            Color m_Color; // 0x_            
            Vector4D m_Vector4D; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_CTransform; // 0x_            
            KeyValues* m_pKeyValues; // 0x_            
            CUtlBinaryBlock m_CUtlBinaryBlock; // 0x_            
            CUtlString m_CUtlString; // 0x_            
            CUtlSymbol m_CUtlSymbol; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlStringToken m_stringToken; // 0x_            
            CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x_            
            // m_ResourceTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceArray<CResourcePointer<CResourceString>> m_ResourceTypes;
            char m_ResourceTypes[0x_]; // 0x_            
            KeyValues3 m_KV3; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_Vector2D) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_Vector) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_VectorAligned) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_Quaternion) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_QAngle) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_RotationVector) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_RadianEuler) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_DegreeEuler) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_QuaternionStorage) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_matrix3x4_t) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_matrix3x4a_t) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_Color) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_Vector4D) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_CTransform) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_pKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_CUtlBinaryBlock) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_CUtlString) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_CUtlSymbol) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_stringToken) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_stringTokenWithStorage) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_ResourceTypes) == 0x_);
        static_assert(offsetof(source2sdk::schemasystem::CSchemaSystemInternalRegistration, m_KV3) == 0x_);
        
        static_assert(sizeof(source2sdk::schemasystem::CSchemaSystemInternalRegistration) == 0x_);
    };
};
