#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit : public client::CDOTA_Buff
    {
    public:
        // m_hGobbledUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGobbledUnit;
        char m_hGobbledUnit[0x4]; // 0x1708        
        client::PlayerID_t m_nOriginalControllingUnit; // 0x170c        
        bool m_bUnitWasLaunched; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        float max_time_in_belly; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit) == 0x1718);
};
