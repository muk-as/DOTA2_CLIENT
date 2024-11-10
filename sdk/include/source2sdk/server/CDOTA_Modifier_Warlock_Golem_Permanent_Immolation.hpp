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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Warlock_Golem_Permanent_Immolation : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x1708        
        int32_t share_damage; // 0x170c        
        float manahealthboost; // 0x1710        
        float manaboost_scale_mult; // 0x1714        
        float m_flAdditionalDamage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Golem_Permanent_Immolation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Warlock_Golem_Permanent_Immolation) == 0x1720);
};
