#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifer_Item_TurtleShell_Shell : public server::CDOTA_Buff_Item
    {
    public:
        int32_t damage_reduction; // 0x1708        
        Vector m_vecPosition; // 0x170c        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifer_Item_TurtleShell_Shell because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifer_Item_TurtleShell_Shell) == 0x1720);
};
