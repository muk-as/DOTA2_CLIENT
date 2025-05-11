#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Voidwalker_Phased : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x17f8            
            float max_damage_duration; // 0x17fc            
            std::int32_t attack_range_bonus; // 0x1800            
            uint8_t _pad1804[0x4]; // 0x1804
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1808            
            bool bAttackRange; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            float m_flStartTime; // 0x1824            
            float m_flFadeTime; // 0x1828            
            float m_flDamageScale; // 0x182c            
            float duration; // 0x1830            
            uint8_t _pad1834[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Voidwalker_Phased because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Voidwalker_Phased) == 0x1838);
    };
};
