#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWisp;
            char m_hWisp[0x4]; // 0x17f8            
            float destination_travel_speed; // 0x17fc            
            float return_travel_speed; // 0x1800            
            float destination_radius; // 0x1804            
            float impact_damage; // 0x1808            
            float destination_status_duration; // 0x180c            
            float initial_delay; // 0x1810            
            float starting_height; // 0x1814            
            Vector m_vAttackLocation; // 0x1818            
            bool m_bAttacking; // 0x1824            
            bool m_bReturning; // 0x1825            
            uint8_t _pad1826[0x2]; // 0x1826
            float m_fCurHeight; // 0x1828            
            float m_fEstimatedTravelTime; // 0x182c            
            float think_interval; // 0x1830            
            bool m_bInFlight; // 0x1834            
            uint8_t _pad1835[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Terrorize_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkWillow_Terrorize_Thinker) == 0x1838);
    };
};
