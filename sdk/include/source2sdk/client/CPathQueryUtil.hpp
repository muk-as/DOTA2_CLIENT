#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x80
        #pragma pack(push, 1)
        class CPathQueryUtil
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            CTransform m_PathToEntityTransform; // 0x10            
            // m_vecPathSamplePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecPathSamplePositions;
            char m_vecPathSamplePositions[0x18]; // 0x30            
            // m_vecPathSampleParameters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPathSampleParameters;
            char m_vecPathSampleParameters[0x18]; // 0x48            
            // m_vecPathSampleDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPathSampleDistances;
            char m_vecPathSampleDistances[0x18]; // 0x60            
            uint8_t _pad0078[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_PathToEntityTransform) == 0x10);
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_vecPathSamplePositions) == 0x30);
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_vecPathSampleParameters) == 0x48);
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_vecPathSampleDistances) == 0x60);
        
        static_assert(sizeof(source2sdk::client::CPathQueryUtil) == 0x80);
    };
};
