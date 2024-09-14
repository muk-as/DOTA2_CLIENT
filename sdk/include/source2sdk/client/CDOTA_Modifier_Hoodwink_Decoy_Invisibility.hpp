#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Decoy_Invisibility : public client::CDOTA_Modifier_Invisible
    {
    public:
        int32_t movement_speed; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        // m_hEntitiesAffected has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hEntitiesAffected;
        char m_hEntitiesAffected[0x18]; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Decoy_Invisibility because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Decoy_Invisibility) == 0x1718);
};
