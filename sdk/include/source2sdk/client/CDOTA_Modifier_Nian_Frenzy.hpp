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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Frenzy : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x17f8            
            std::int32_t damage_radius; // 0x17fc            
            std::int32_t stun_radius; // 0x1800            
            float dive_distance; // 0x1804            
            float initial_rise_time; // 0x1808            
            float right_swipe_time; // 0x180c            
            float left_swipe_time; // 0x1810            
            float knockdown_duration; // 0x1814            
            float stun_duration; // 0x1818            
            std::int32_t m_nTickCounter; // 0x181c            
            // m_hEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hEnemies;
            char m_hEnemies[0x18]; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Frenzy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nian_Frenzy) == 0x1838);
    };
};
