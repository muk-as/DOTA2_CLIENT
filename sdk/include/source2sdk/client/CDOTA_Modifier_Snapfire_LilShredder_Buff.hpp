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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_LilShredder_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x18]; // 0x1878
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1890            
            std::int32_t m_nIsActive; // 0x18a8            
            bool m_bBonusAttack; // 0x18ac            
            uint8_t _pad18ad[0x3]; // 0x18ad
            std::int32_t attack_range_bonus; // 0x18b0            
            std::int32_t buffed_attacks; // 0x18b4            
            float base_attack_time; // 0x18b8            
            std::int32_t attack_speed_bonus; // 0x18bc            
            float armor_duration; // 0x18c0            
            std::int32_t extra_targets; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_LilShredder_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_LilShredder_Buff) == 0x18c8);
    };
};
