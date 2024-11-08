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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker : public client::CDOTA_Buff
    {
    public:
        int32_t collision_radius; // 0x1708        
        int32_t radius; // 0x170c        
        int32_t distance; // 0x1710        
        int32_t speed; // 0x1714        
        int32_t machines_per_sec; // 0x1718        
        int32_t heal_per_second; // 0x171c        
        Vector m_vDir; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker) == 0x1730);
};
