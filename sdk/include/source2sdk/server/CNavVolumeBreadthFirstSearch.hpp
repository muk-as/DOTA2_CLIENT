#pragma once
#include "source2sdk/server/CNavVolumeCalculatedVector.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xb8
    // Has VTable
    #pragma pack(push, 1)
    class CNavVolumeBreadthFirstSearch : public server::CNavVolumeCalculatedVector
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x98[0x8]; // 0x98
        Vector m_vStartPos; // 0xa0        
        float m_flSearchDist; // 0xac        
        [[maybe_unused]] std::uint8_t pad_0xb0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavVolumeBreadthFirstSearch because it is not a standard-layout class
    static_assert(sizeof(CNavVolumeBreadthFirstSearch) == 0xb8);
};
