#pragma once
#include "source2sdk/server/CDOTA_Modifier_PersistentInvisibility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Riki_Permanent_Invisibility : public server::CDOTA_Modifier_PersistentInvisibility
    {
    public:
        int32_t movement_speed; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Riki_Permanent_Invisibility because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Riki_Permanent_Invisibility) == 0x1700);
};