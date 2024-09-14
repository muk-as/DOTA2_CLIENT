#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: schemasystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::schemasystem
{
    // Registered alignment: unknown
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x180
    #pragma pack(push, 1)
    class CSchemaSystemInternalRegistration
    {
    public:
        Vector2D m_Vector2D; // 0x0        
        Vector m_Vector; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x14[0xc]; // 0x14
        VectorAligned m_VectorAligned; // 0x20        
        Quaternion m_Quaternion; // 0x30        
        QAngle m_QAngle; // 0x40        
        RotationVector m_RotationVector; // 0x4c        
        RadianEuler m_RadianEuler; // 0x58        
        DegreeEuler m_DegreeEuler; // 0x64        
        QuaternionStorage m_QuaternionStorage; // 0x70        
        matrix3x4_t m_matrix3x4_t; // 0x80        
        matrix3x4a_t m_matrix3x4a_t; // 0xb0        
        Color m_Color; // 0xe0        
        Vector4D m_Vector4D; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xf4[0xc]; // 0xf4
        CTransform m_CTransform; // 0x100        
        KeyValues* m_pKeyValues; // 0x120        
        CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128        
        CUtlString m_CUtlString; // 0x140        
        CUtlSymbol m_CUtlSymbol; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x14a[0x2]; // 0x14a
        CUtlStringToken m_stringToken; // 0x14c        
        CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150        
        // m_ResourceTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceArray<CResourcePointer<CResourceString>> m_ResourceTypes;
        char m_ResourceTypes[0x8]; // 0x168        
        KeyValues3 m_KV3; // 0x170        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_Vector2D) == 0x0);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_Vector) == 0x8);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_VectorAligned) == 0x20);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_Quaternion) == 0x30);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_QAngle) == 0x40);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_RotationVector) == 0x4c);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_RadianEuler) == 0x58);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_DegreeEuler) == 0x64);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_QuaternionStorage) == 0x70);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_matrix3x4_t) == 0x80);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_matrix3x4a_t) == 0xb0);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_Color) == 0xe0);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_Vector4D) == 0xe4);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_CTransform) == 0x100);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_pKeyValues) == 0x120);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_CUtlBinaryBlock) == 0x128);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_CUtlString) == 0x140);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_CUtlSymbol) == 0x148);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_stringToken) == 0x14c);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_stringTokenWithStorage) == 0x150);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_ResourceTypes) == 0x168);
    static_assert(offsetof(CSchemaSystemInternalRegistration, m_KV3) == 0x170);
    
    static_assert(sizeof(CSchemaSystemInternalRegistration) == 0x180);
};
