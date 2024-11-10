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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Venomancer_WardCounter : public client::CDOTA_Buff
    {
    public:
        int32_t m_nTotalWards; // 0x1708        
        float m_fTotalDamage; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x1710[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_WardCounter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Venomancer_WardCounter) == 0x1728);
};
