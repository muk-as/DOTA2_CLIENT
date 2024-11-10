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
    class CDOTA_Modifier_Invoker_IceWall_SlowAura : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        int32_t slow; // 0x170c        
        float slow_duration; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_SlowAura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_IceWall_SlowAura) == 0x1718);
};
