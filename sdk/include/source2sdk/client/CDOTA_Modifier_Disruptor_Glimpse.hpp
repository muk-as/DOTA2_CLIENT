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
    // Size: 0x17e0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_Glimpse : public client::CDOTA_Buff
    {
    public:
        Vector m_PositionIndex[18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_Glimpse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_Glimpse) == 0x17e0);
};
