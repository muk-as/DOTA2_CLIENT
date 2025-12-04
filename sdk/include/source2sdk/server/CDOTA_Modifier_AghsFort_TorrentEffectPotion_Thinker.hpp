#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float m_fProcChance; // 0x_            
            std::int32_t m_nRadius; // 0x_            
            std::int32_t m_nMovespeedBonus; // 0x_            
            float m_fStunDuration; // 0x_            
            float m_fSlowDuration; // 0x_            
            float m_fDelay; // 0x_            
            std::int32_t m_nTorrentDamage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker) == 0x_);
    };
};
