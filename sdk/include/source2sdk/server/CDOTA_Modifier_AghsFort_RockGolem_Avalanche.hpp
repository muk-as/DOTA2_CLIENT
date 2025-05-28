#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_RockGolem_Avalanche : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_pHeroesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC*> m_pHeroesHit;
            char m_pHeroesHit[0x18]; // 0x1888            
            std::int32_t radius; // 0x18a0            
            float total_duration; // 0x18a4            
            float stun_duration; // 0x18a8            
            std::int32_t tick_count; // 0x18ac            
            std::int32_t m_damage; // 0x18b0            
            std::int32_t m_nTicks; // 0x18b4            
            uint8_t _pad18b8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_RockGolem_Avalanche because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_RockGolem_Avalanche) == 0x18d0);
    };
};
