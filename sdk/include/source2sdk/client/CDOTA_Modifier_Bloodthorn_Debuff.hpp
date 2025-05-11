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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bloodthorn_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float target_crit_multiplier; // 0x17f8            
            float silence_damage_percent; // 0x17fc            
            std::int32_t proc_damage_heroes; // 0x1800            
            std::int32_t proc_damage_creeps; // 0x1804            
            float m_flDamageTaken; // 0x1808            
            uint8_t _pad180c[0x4]; // 0x180c
            // m_vRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_vRecords;
            char m_vRecords[0x18]; // 0x1810            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodthorn_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bloodthorn_Debuff) == 0x1828);
    };
};
