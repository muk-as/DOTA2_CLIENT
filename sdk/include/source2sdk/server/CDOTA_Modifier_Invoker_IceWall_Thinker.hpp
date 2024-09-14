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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_IceWall_Thinker : public client::CDOTA_Buff
    {
    public:
        float damage_per_second; // 0x16e8        
        int32_t num_wall_elements; // 0x16ec        
        int32_t wall_element_spacing; // 0x16f0        
        int32_t wall_element_radius; // 0x16f4        
        float spell_amp; // 0x16f8        
        float spell_lifesteal; // 0x16fc        
        Vector m_vWallDir; // 0x1700        
        bool m_bGrantedGem; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_IceWall_Thinker) == 0x1710);
};
