#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tiny_Tree_Channel : public client::CDOTA_Buff
    {
    public:
        int32_t tree_grab_radius; // 0x1708        
        int32_t splash_radius; // 0x170c        
        int32_t speed; // 0x1710        
        float interval; // 0x1714        
        Vector m_vPos; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Tree_Channel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tiny_Tree_Channel) == 0x1728);
};
