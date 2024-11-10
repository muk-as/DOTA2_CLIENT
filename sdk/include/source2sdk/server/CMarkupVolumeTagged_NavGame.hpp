#pragma once
#include "source2sdk/server/CMarkupVolumeWithRef.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x810
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CMarkupVolumeTagged_NavGame : public server::CMarkupVolumeWithRef
    {
    public:
        bool m_bFloodFillAttribute; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x809[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged_NavGame because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged_NavGame) == 0x810);
};
