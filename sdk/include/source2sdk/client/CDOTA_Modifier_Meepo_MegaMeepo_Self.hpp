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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_MegaMeepo_Self : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t base_strength; // 0x1878            
            std::int32_t base_int; // 0x187c            
            std::int32_t base_agi; // 0x1880            
            std::int32_t stats_pct; // 0x1884            
            // m_hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hMegameepoFrame;
            char m_hMegameepoFrame[0x4]; // 0x1888            
            bool m_bWasOutOfGame; // 0x188c            
            uint8_t _pad188d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Meepo_MegaMeepo_Self) == 0x1890);
    };
};
