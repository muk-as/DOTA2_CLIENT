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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Whirlpool_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pull_radius; // 0x17f8            
            std::int32_t pull_speed; // 0x17fc            
            std::int32_t radius; // 0x1800            
            std::int32_t whirlpool_damage; // 0x1804            
            float tick_rate; // 0x1808            
            source2sdk::entity2::GameTime_t m_flDamageTick; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Whirlpool_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nian_Whirlpool_Pull) == 0x1810);
    };
};
