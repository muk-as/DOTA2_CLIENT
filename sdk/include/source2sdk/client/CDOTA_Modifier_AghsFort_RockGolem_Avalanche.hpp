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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_RockGolem_Avalanche : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_pHeroesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_DOTA_BaseNPC*> m_pHeroesHit;
            char m_pHeroesHit[0x18]; // 0x17f8            
            std::int32_t radius; // 0x1810            
            float total_duration; // 0x1814            
            float stun_duration; // 0x1818            
            std::int32_t tick_count; // 0x181c            
            std::int32_t m_damage; // 0x1820            
            std::int32_t m_nTicks; // 0x1824            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_RockGolem_Avalanche because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_RockGolem_Avalanche) == 0x1828);
    };
};
