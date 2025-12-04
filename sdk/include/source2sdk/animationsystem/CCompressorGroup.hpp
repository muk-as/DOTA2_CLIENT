#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/fieldtype_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CCompressorGroup
        {
        public:
            std::int32_t m_nTotalElementCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_szChannelClass has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_szChannelClass;
            char m_szChannelClass[0x_]; // 0x_            
            // m_szVariableName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_szVariableName;
            char m_szVariableName[0x_]; // 0x_            
            // m_nType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::mathlib_extended::fieldtype_t> m_nType;
            char m_nType[0x_]; // 0x_            
            // m_nFlags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nFlags;
            char m_nFlags[0x_]; // 0x_            
            // m_szGrouping has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_szGrouping;
            char m_szGrouping[0x_]; // 0x_            
            // m_nCompressorIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nCompressorIndex;
            char m_nCompressorIndex[0x_]; // 0x_            
            // m_szElementNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<char*>> m_szElementNames;
            char m_szElementNames[0x_]; // 0x_            
            // m_nElementUniqueID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<std::int32_t>> m_nElementUniqueID;
            char m_nElementUniqueID[0x_]; // 0x_            
            // m_nElementMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_nElementMask;
            char m_nElementMask[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vectorCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CCompressor<Vector>*> m_vectorCompressor;
            char m_vectorCompressor[0x_]; // 0x_            
            // m_quaternionCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CCompressor<QuaternionStorage>*> m_quaternionCompressor;
            char m_quaternionCompressor[0x_]; // 0x_            
            // m_intCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CCompressor<std::int32_t>*> m_intCompressor;
            char m_intCompressor[0x_]; // 0x_            
            // m_boolCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CCompressor<bool>*> m_boolCompressor;
            char m_boolCompressor[0x_]; // 0x_            
            // m_colorCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CCompressor<Color>*> m_colorCompressor;
            char m_colorCompressor[0x_]; // 0x_            
            // m_vector2DCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CCompressor<Vector2D>*> m_vector2DCompressor;
            char m_vector2DCompressor[0x_]; // 0x_            
            // m_vector4DCompressor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CCompressor<Vector4D>*> m_vector4DCompressor;
            char m_vector4DCompressor[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_nTotalElementCount) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_szChannelClass) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_szVariableName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_nType) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_szGrouping) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_nCompressorIndex) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_szElementNames) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_nElementUniqueID) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_nElementMask) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_vectorCompressor) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_quaternionCompressor) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_intCompressor) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_boolCompressor) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_colorCompressor) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_vector2DCompressor) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CCompressorGroup, m_vector4DCompressor) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CCompressorGroup) == 0x_);
    };
};
