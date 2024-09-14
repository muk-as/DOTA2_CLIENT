#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vStartLoc; // 0x16e8        
        bool m_bIsReflection; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEntity;
        char m_hEntity[0x4]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker) == 0x1700);
};
