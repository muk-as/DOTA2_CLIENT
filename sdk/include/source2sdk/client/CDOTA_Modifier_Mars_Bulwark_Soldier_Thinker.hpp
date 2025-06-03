#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_NextAttack; // 0x1878            
            std::int32_t soldier_offset; // 0x187c            
            std::int32_t soldier_count; // 0x1880            
            std::int32_t forward_angle; // 0x1884            
            std::int32_t knockback_distance; // 0x1888            
            uint8_t _pad188c[0x4]; // 0x188c
            // m_hAllSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAllSoldiers;
            char m_hAllSoldiers[0x18]; // 0x1890            
            source2sdk::entity2::GameTime_t m_flLastStationaryTime; // 0x18a8            
            Vector m_vLastStationaryPosition; // 0x18ac            
            float stationary_attack_delay; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker) == 0x18c0);
    };
};
