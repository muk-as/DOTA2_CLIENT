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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Zuus_ThundergodsWrathThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1878            
            float damage_pct; // 0x187c            
            float sight_duration; // 0x1880            
            float growing_delay; // 0x1884            
            float grow_kill_amp; // 0x1888            
            bool m_bZeusHasArcana; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            // m_hTargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTargetEntities;
            char m_hTargetEntities[0x18]; // 0x1890            
            std::int32_t m_nFarKills; // 0x18a8            
            std::int32_t m_nKills; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_ThundergodsWrathThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Zuus_ThundergodsWrathThinker) == 0x18b0);
    };
};
