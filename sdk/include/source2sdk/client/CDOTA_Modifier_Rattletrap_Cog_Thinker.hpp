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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_Cog_Thinker : public client::CDOTA_Buff
    {
    public:
        float cogs_radius; // 0x1708        
        float extra_pull_buffer; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x1710[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_Cog_Thinker) == 0x1718);
};
