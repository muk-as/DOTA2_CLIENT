#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Alchemist_GoblinsGreed : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_DeathList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_DeathList;
            char m_DeathList[0x18]; // 0x1878            
            float damage; // 0x1890            
            float duration; // 0x1894            
            std::int32_t bonus_gold; // 0x1898            
            std::int32_t bonus_bonus_gold; // 0x189c            
            std::int32_t bonus_gold_cap; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_GoblinsGreed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Alchemist_GoblinsGreed) == 0x18a8);
    };
};
