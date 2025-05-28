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
        // Size: 0x18e8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pounce_distance; // 0x1888            
            float pounce_speed; // 0x188c            
            float pounce_acceleration; // 0x1890            
            std::int32_t pounce_radius; // 0x1894            
            std::int32_t pounce_damage; // 0x1898            
            std::int32_t stun_radius; // 0x189c            
            float stun_duration; // 0x18a0            
            float leash_duration; // 0x18a4            
            float initial_delay; // 0x18a8            
            float landing_delay; // 0x18ac            
            float vertical_adjust; // 0x18b0            
            float vertical_adjust_max_distance; // 0x18b4            
            float vertical_adjust_min_distance; // 0x18b8            
            std::int32_t claw_damage; // 0x18bc            
            std::int32_t claw_damage_radius; // 0x18c0            
            float claw_damage_delay; // 0x18c4            
            float claw_damage_duration; // 0x18c8            
            uint8_t _pad18cc[0x4]; // 0x18cc
            // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitEntities;
            char m_vHitEntities[0x18]; // 0x18d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nian_Dive) == 0x18e8);
    };
};
