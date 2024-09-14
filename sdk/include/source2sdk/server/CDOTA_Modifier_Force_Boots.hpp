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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Force_Boots : public client::CDOTA_Buff
    {
    public:
        Vector m_vDirection; // 0x16e8        
        float m_flEndTime; // 0x16f4        
        float m_flCurTime; // 0x16f8        
        int32_t push_length; // 0x16fc        
        float push_duration; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Force_Boots because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Force_Boots) == 0x1708);
};
