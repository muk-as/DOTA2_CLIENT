#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_UltimateScepter : public client::CDOTA_Buff_Item
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        int32_t bonus_all_stats; // 0x170c        
        int32_t bonus_health; // 0x1710        
        int32_t bonus_mana; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_UltimateScepter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_UltimateScepter) == 0x1718);
};
