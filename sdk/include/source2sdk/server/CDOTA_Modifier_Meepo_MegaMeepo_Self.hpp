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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_MegaMeepo_Self : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t base_strength; // 0x1888            
            std::int32_t base_int; // 0x188c            
            std::int32_t base_agi; // 0x1890            
            std::int32_t stats_pct; // 0x1894            
            // m_hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMegameepoFrame;
            char m_hMegameepoFrame[0x4]; // 0x1898            
            bool m_bWasOutOfGame; // 0x189c            
            uint8_t _pad189d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Meepo_MegaMeepo_Self) == 0x18a0);
    };
};
