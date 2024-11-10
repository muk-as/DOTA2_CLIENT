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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker : public client::CDOTA_Buff
    {
    public:
        float stun_duration; // 0x1708        
        bool bHasScepter; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        int32_t aoe; // 0x1710        
        int32_t m_iCount; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker) == 0x1718);
};
