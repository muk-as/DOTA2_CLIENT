#pragma once
#include "source2sdk/client/CDOTA_Modifier_Tutorial_Sleep.hpp"
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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ARDM_NewHero : public client::CDOTA_Modifier_Tutorial_Sleep
    {
    public:
        // m_hOldHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldHero;
        char m_hOldHero[0x4]; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ARDM_NewHero because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ARDM_NewHero) == 0x1710);
};
