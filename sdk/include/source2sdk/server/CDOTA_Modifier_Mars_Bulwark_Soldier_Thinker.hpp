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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_NextAttack; // 0x1888            
            std::int32_t soldier_offset; // 0x188c            
            std::int32_t soldier_count; // 0x1890            
            std::int32_t forward_angle; // 0x1894            
            std::int32_t knockback_distance; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            // m_hAllSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAllSoldiers;
            char m_hAllSoldiers[0x18]; // 0x18a0            
            source2sdk::entity2::GameTime_t m_flLastStationaryTime; // 0x18b8            
            Vector m_vLastStationaryPosition; // 0x18bc            
            float stationary_attack_delay; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker) == 0x18d0);
    };
};
