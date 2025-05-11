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
        class CDOTA_Modifier_Snapfire_LilShredder_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x8]; // 0x17f8
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1800            
            std::int32_t m_nIsActive; // 0x1818            
            bool m_bBonusAttack; // 0x181c            
            uint8_t _pad181d[0x3]; // 0x181d
            std::int32_t attack_range_bonus; // 0x1820            
            std::int32_t buffed_attacks; // 0x1824            
            float base_attack_time; // 0x1828            
            std::int32_t attack_speed_bonus; // 0x182c            
            float armor_duration; // 0x1830            
            std::int32_t extra_targets; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_LilShredder_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_LilShredder_Buff) == 0x1838);
    };
};
