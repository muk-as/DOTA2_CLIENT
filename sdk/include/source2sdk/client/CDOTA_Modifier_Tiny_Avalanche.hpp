#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
    };
};

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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tiny_Avalanche : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_pHeroesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_DOTA_BaseNPC*> m_pHeroesHit;
            char m_pHeroesHit[0x18]; // 0x1888            
            float radius; // 0x18a0            
            float total_duration; // 0x18a4            
            float stun_duration; // 0x18a8            
            std::int32_t tick_count; // 0x18ac            
            std::int32_t toss_damage_bonus_pct; // 0x18b0            
            std::int32_t m_damage; // 0x18b4            
            std::int32_t m_nTicks; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Avalanche because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tiny_Avalanche) == 0x18c0);
    };
};
