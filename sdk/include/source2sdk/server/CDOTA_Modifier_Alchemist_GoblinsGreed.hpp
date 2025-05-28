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
        class CDOTA_Modifier_Alchemist_GoblinsGreed : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_DeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_DeathList;
            char m_DeathList[0x18]; // 0x1888            
            float damage; // 0x18a0            
            float duration; // 0x18a4            
            std::int32_t bonus_gold; // 0x18a8            
            std::int32_t bonus_bonus_gold; // 0x18ac            
            std::int32_t bonus_gold_cap; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_GoblinsGreed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Alchemist_GoblinsGreed) == 0x18b8);
    };
};
