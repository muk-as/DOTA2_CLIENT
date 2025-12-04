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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bloodthorn_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float target_crit_multiplier; // 0x_            
            float silence_damage_percent; // 0x_            
            std::int32_t proc_damage_heroes; // 0x_            
            std::int32_t proc_damage_creeps; // 0x_            
            float m_flDamageTaken; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_vRecords;
            char m_vRecords[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodthorn_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bloodthorn_Debuff) == 0x_);
    };
};
