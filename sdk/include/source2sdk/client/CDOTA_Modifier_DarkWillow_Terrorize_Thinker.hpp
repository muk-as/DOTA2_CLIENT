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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWisp;
            char m_hWisp[0x4]; // 0x1888            
            float destination_travel_speed; // 0x188c            
            float return_travel_speed; // 0x1890            
            float destination_radius; // 0x1894            
            float impact_damage; // 0x1898            
            float destination_status_duration; // 0x189c            
            float initial_delay; // 0x18a0            
            float starting_height; // 0x18a4            
            Vector m_vAttackLocation; // 0x18a8            
            bool m_bAttacking; // 0x18b4            
            bool m_bReturning; // 0x18b5            
            uint8_t _pad18b6[0x2]; // 0x18b6
            float m_fCurHeight; // 0x18b8            
            float m_fEstimatedTravelTime; // 0x18bc            
            float think_interval; // 0x18c0            
            bool m_bInFlight; // 0x18c4            
            uint8_t _pad18c5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Terrorize_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_Terrorize_Thinker) == 0x18c8);
    };
};
