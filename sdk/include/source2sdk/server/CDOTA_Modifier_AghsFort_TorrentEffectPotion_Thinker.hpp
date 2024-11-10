#pragma once
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker : public server::CDOTA_Buff_Item
    {
    public:
        float m_fProcChance; // 0x1708        
        int32_t m_nRadius; // 0x170c        
        int32_t m_nMovespeedBonus; // 0x1710        
        float m_fStunDuration; // 0x1714        
        float m_fSlowDuration; // 0x1718        
        float m_fDelay; // 0x171c        
        int32_t m_nTorrentDamage; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker) == 0x1728);
};
