#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tiny_Tree_Channel : public client::CDOTA_Buff
    {
    public:
        int32_t tree_grab_radius; // 0x16e8        
        int32_t splash_radius; // 0x16ec        
        int32_t speed; // 0x16f0        
        float interval; // 0x16f4        
        Vector m_vPos; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Tree_Channel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tiny_Tree_Channel) == 0x1708);
};
