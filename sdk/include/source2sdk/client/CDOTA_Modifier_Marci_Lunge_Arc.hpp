#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Lunge_Arc : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bTriggeredLandingAnim; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            std::int32_t m_nMaxJumpDistance; // 0x188c            
            std::int32_t min_jump_distance; // 0x1890            
            std::int32_t max_jump_distance; // 0x1894            
            float min_lob_travel_time; // 0x1898            
            float max_lob_travel_time; // 0x189c            
            float landing_radius; // 0x18a0            
            float debuff_duration; // 0x18a4            
            float min_height_above_lowest; // 0x18a8            
            float min_height_above_highest; // 0x18ac            
            float min_acceleration; // 0x18b0            
            float max_acceleration; // 0x18b4            
            float impact_damage; // 0x18b8            
            std::int32_t impact_position_offset; // 0x18bc            
            std::int32_t ally_impact_damage_pct; // 0x18c0            
            float ally_buff_duration; // 0x18c4            
            // m_hBounceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBounceEntity;
            char m_hBounceEntity[0x4]; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_Arc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Marci_Lunge_Arc) == 0x18d0);
    };
};
