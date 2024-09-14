#pragma once
#include "source2sdk/mathlib_extended/fieldtype_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1a0
    #pragma pack(push, 1)
    class CCompressorGroup
    {
    public:
        int32_t m_nTotalElementCount; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_szChannelClass has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<char*> m_szChannelClass;
        char m_szChannelClass[0x18]; // 0x8        
        // m_szVariableName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<char*> m_szVariableName;
        char m_szVariableName[0x18]; // 0x20        
        // m_nType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<mathlib_extended::fieldtype_t> m_nType;
        char m_nType[0x18]; // 0x38        
        // m_nFlags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nFlags;
        char m_nFlags[0x18]; // 0x50        
        // m_szGrouping has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_szGrouping;
        char m_szGrouping[0x18]; // 0x68        
        // m_nCompressorIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nCompressorIndex;
        char m_nCompressorIndex[0x18]; // 0x80        
        // m_szElementNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlVector<char*>> m_szElementNames;
        char m_szElementNames[0x18]; // 0x98        
        // m_nElementUniqueID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlVector<int32_t>> m_nElementUniqueID;
        char m_nElementUniqueID[0x18]; // 0xb0        
        // m_nElementMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_nElementMask;
        char m_nElementMask[0x18]; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xe0[0x18]; // 0xe0
        // m_vectorCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CCompressor<Vector>*> m_vectorCompressor;
        char m_vectorCompressor[0x18]; // 0xf8        
        // m_quaternionCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CCompressor<QuaternionStorage>*> m_quaternionCompressor;
        char m_quaternionCompressor[0x18]; // 0x110        
        // m_intCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CCompressor<int32_t>*> m_intCompressor;
        char m_intCompressor[0x18]; // 0x128        
        // m_boolCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CCompressor<bool>*> m_boolCompressor;
        char m_boolCompressor[0x18]; // 0x140        
        // m_colorCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CCompressor<Color>*> m_colorCompressor;
        char m_colorCompressor[0x18]; // 0x158        
        // m_vector2DCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CCompressor<Vector2D>*> m_vector2DCompressor;
        char m_vector2DCompressor[0x18]; // 0x170        
        // m_vector4DCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CCompressor<Vector4D>*> m_vector4DCompressor;
        char m_vector4DCompressor[0x18]; // 0x188        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCompressorGroup, m_nTotalElementCount) == 0x0);
    static_assert(offsetof(CCompressorGroup, m_szChannelClass) == 0x8);
    static_assert(offsetof(CCompressorGroup, m_szVariableName) == 0x20);
    static_assert(offsetof(CCompressorGroup, m_nType) == 0x38);
    static_assert(offsetof(CCompressorGroup, m_nFlags) == 0x50);
    static_assert(offsetof(CCompressorGroup, m_szGrouping) == 0x68);
    static_assert(offsetof(CCompressorGroup, m_nCompressorIndex) == 0x80);
    static_assert(offsetof(CCompressorGroup, m_szElementNames) == 0x98);
    static_assert(offsetof(CCompressorGroup, m_nElementUniqueID) == 0xb0);
    static_assert(offsetof(CCompressorGroup, m_nElementMask) == 0xc8);
    static_assert(offsetof(CCompressorGroup, m_vectorCompressor) == 0xf8);
    static_assert(offsetof(CCompressorGroup, m_quaternionCompressor) == 0x110);
    static_assert(offsetof(CCompressorGroup, m_intCompressor) == 0x128);
    static_assert(offsetof(CCompressorGroup, m_boolCompressor) == 0x140);
    static_assert(offsetof(CCompressorGroup, m_colorCompressor) == 0x158);
    static_assert(offsetof(CCompressorGroup, m_vector2DCompressor) == 0x170);
    static_assert(offsetof(CCompressorGroup, m_vector4DCompressor) == 0x188);
    
    static_assert(sizeof(CCompressorGroup) == 0x1a0);
};
