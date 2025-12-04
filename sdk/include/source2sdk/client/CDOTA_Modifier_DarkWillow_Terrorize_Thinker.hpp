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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWisp;
            char m_hWisp[0x_]; // 0x_            
            float destination_travel_speed; // 0x_            
            float return_travel_speed; // 0x_            
            float destination_radius; // 0x_            
            float impact_damage; // 0x_            
            float destination_status_duration; // 0x_            
            float initial_delay; // 0x_            
            float starting_height; // 0x_            
            Vector m_vAttackLocation; // 0x_            
            bool m_bAttacking; // 0x_            
            bool m_bReturning; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fCurHeight; // 0x_            
            float m_fEstimatedTravelTime; // 0x_            
            float think_interval; // 0x_            
            bool m_bInFlight; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Terrorize_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_Terrorize_Thinker) == 0x_);
    };
};
