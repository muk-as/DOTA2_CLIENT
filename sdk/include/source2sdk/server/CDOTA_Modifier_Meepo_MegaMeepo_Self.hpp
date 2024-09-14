#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Meepo_MegaMeepo_Self : public client::CDOTA_Buff
    {
    public:
        int32_t base_strength; // 0x16e8        
        int32_t base_int; // 0x16ec        
        int32_t base_agi; // 0x16f0        
        int32_t stats_pct; // 0x16f4        
        // m_hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMegameepoFrame;
        char m_hMegameepoFrame[0x4]; // 0x16f8        
        bool m_bWasOutOfGame; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo_Self because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Meepo_MegaMeepo_Self) == 0x1700);
};
