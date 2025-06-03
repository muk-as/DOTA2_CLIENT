#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            float m_fProcChance; // 0x1878            
            std::int32_t m_nRadius; // 0x187c            
            std::int32_t m_nMovespeedBonus; // 0x1880            
            float m_fStunDuration; // 0x1884            
            float m_fSlowDuration; // 0x1888            
            float m_fDelay; // 0x188c            
            std::int32_t m_nTorrentDamage; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker) == 0x1898);
    };
};
