#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNavVolumeCalculatedVector.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0xb8
        // Has VTable
        #pragma pack(push, 1)
        class CNavVolumeBreadthFirstSearch : public source2sdk::server::CNavVolumeCalculatedVector
        {
        public:
            uint8_t _pad0098[0x8]; // 0x98
            Vector m_vStartPos; // 0xa0            
            float m_flSearchDist; // 0xac            
            uint8_t _pad00b0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavVolumeBreadthFirstSearch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavVolumeBreadthFirstSearch) == 0xb8);
    };
};
