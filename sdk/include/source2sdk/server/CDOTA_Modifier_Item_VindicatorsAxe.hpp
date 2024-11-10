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
    class CDOTA_Modifier_Item_VindicatorsAxe : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_attack_speed; // 0x1708        
        int32_t bonus_damage; // 0x170c        
        int32_t bonus_armor; // 0x1710        
        int32_t bonus_slow_resist; // 0x1714        
        client::ParticleIndex_t m_nFxIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_VindicatorsAxe because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_VindicatorsAxe) == 0x1720);
};
