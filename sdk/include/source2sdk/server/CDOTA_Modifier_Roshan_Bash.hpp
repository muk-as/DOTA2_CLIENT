#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Roshan_Bash : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bash_chance; // 0x1888            
            std::int32_t bonus_damage; // 0x188c            
            float stun_duration; // 0x1890            
            source2sdk::entity2::GameTime_t last_attack_time; // 0x1894            
            // m_ProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_ProcAttackRecords;
            char m_ProcAttackRecords[0x18]; // 0x1898            
            source2sdk::entity2::GameTime_t apply_activity_modifier_until; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Roshan_Bash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Roshan_Bash) == 0x18b8);
    };
};
