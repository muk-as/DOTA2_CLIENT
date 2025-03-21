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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_IceWall_Thinker : public client::CDOTA_Buff
    {
    public:
        float damage_per_second; // 0x1708        
        int32_t num_wall_elements; // 0x170c        
        int32_t wall_element_spacing; // 0x1710        
        int32_t wall_element_radius; // 0x1714        
        float spell_amp; // 0x1718        
        float spell_lifesteal; // 0x171c        
        Vector m_vWallDir; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_IceWall_Thinker) == 0x1730);
};
