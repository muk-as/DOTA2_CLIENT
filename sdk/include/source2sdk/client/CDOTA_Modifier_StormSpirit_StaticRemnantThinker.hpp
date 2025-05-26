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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float static_remnant_radius; // 0x1878            
            float static_remnant_damage_radius; // 0x187c            
            float static_remnant_damage; // 0x1880            
            float static_remnant_delay; // 0x1884            
            float static_remnant_travel_speed; // 0x1888            
            std::int32_t m_iSearchRadius; // 0x188c            
            std::int32_t m_iDamageRadius; // 0x1890            
            bool m_bDoesMove; // 0x1894            
            bool m_bReachedTargetLocation; // 0x1895            
            uint8_t _pad1896[0x2]; // 0x1896
            Vector m_vTargetLocation; // 0x1898            
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x18a4            
            source2sdk::entity2::GameTime_t m_flLastMoveTime; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_StaticRemnantThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_StormSpirit_StaticRemnantThinker) == 0x18b0);
    };
};
