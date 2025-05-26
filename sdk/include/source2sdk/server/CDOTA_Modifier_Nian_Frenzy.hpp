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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Frenzy : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1878            
            std::int32_t damage_radius; // 0x187c            
            std::int32_t stun_radius; // 0x1880            
            float dive_distance; // 0x1884            
            float initial_rise_time; // 0x1888            
            float right_swipe_time; // 0x188c            
            float left_swipe_time; // 0x1890            
            float knockdown_duration; // 0x1894            
            float stun_duration; // 0x1898            
            std::int32_t m_nTickCounter; // 0x189c            
            // m_hEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemies;
            char m_hEnemies[0x18]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Frenzy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Frenzy) == 0x18b8);
    };
};
