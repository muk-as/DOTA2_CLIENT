#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_Bedlam : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flRotation; // 0x1888            
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWisp;
            char m_hWisp[0x4]; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastAttack; // 0x1890            
            float roaming_radius; // 0x1894            
            float attack_radius; // 0x1898            
            float roaming_seconds_per_rotation; // 0x189c            
            float attack_interval; // 0x18a0            
            std::int32_t target_count; // 0x18a4            
            bool m_bTravelling; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            float travel_speed; // 0x18ac            
            std::int32_t damage_reduction_pct; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Bedlam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkWillow_Bedlam) == 0x18b8);
    };
};
