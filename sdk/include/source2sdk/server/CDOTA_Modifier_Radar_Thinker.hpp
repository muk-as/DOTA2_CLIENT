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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Radar_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        bool m_bEverFound; // 0x170c        
        bool m_bBonus; // 0x170d        
        [[maybe_unused]] std::uint8_t pad_0x170e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Radar_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Radar_Thinker) == 0x1710);
};
