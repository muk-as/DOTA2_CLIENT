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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CPathQueryUtil
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_PathToEntityTransform; // 0x_            
            // m_vecPathSamplePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecPathSamplePositions;
            char m_vecPathSamplePositions[0x_]; // 0x_            
            // m_vecPathSampleParameters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPathSampleParameters;
            char m_vecPathSampleParameters[0x_]; // 0x_            
            // m_vecPathSampleDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPathSampleDistances;
            char m_vecPathSampleDistances[0x_]; // 0x_            
            bool m_bIsClosedLoop; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_PathToEntityTransform) == 0x_);
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_vecPathSamplePositions) == 0x_);
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_vecPathSampleParameters) == 0x_);
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_vecPathSampleDistances) == 0x_);
        static_assert(offsetof(source2sdk::client::CPathQueryUtil, m_bIsClosedLoop) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CPathQueryUtil) == 0x_);
    };
};
