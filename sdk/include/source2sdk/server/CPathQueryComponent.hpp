#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        #pragma pack(push, 1)
        class CPathQueryComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x18]; // 0x8
            CTransform m_PathToEntityTransform; // 0x20            
            // m_vecPathSamplePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecPathSamplePositions;
            char m_vecPathSamplePositions[0x18]; // 0x40            
            // m_vecPathSampleParameters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPathSampleParameters;
            char m_vecPathSampleParameters[0x18]; // 0x58            
            // m_vecPathSampleDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecPathSampleDistances;
            char m_vecPathSampleDistances[0x18]; // 0x70            
            uint8_t _pad0088[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathQueryComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathQueryComponent) == 0x90);
    };
};
