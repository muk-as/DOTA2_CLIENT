#pragma once
#include "source2sdk/client/CDOTA_Modifier_Seasonal_Summon_Common_Thinker.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI9_Shovel_Stasis_Trap : public client::CDOTA_Modifier_Seasonal_Summon_Common_Thinker
    {
    public:
        // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hHero;
        char m_hHero[0x4]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Shovel_Stasis_Trap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI9_Shovel_Stasis_Trap) == 0x1700);
};
