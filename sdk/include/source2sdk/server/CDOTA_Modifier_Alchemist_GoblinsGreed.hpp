#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Alchemist_GoblinsGreed : public client::CDOTA_Buff
    {
    public:
        // m_DeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_DeathList;
        char m_DeathList[0x18]; // 0x1708        
        float damage; // 0x1720        
        float duration; // 0x1724        
        int32_t bonus_gold; // 0x1728        
        int32_t bonus_bonus_gold; // 0x172c        
        int32_t bonus_gold_cap; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_GoblinsGreed because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Alchemist_GoblinsGreed) == 0x1738);
};
