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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mirana_Leap_Buff : public client::CDOTA_Buff
    {
    public:
        int32_t leap_speedbonus; // 0x16e8        
        int32_t leap_speedbonus_as; // 0x16ec        
        bool m_bCritUsed; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x7]; // 0x16f1
        // m_vCritRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_vCritRecords;
        char m_vCritRecords[0x18]; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Leap_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_Leap_Buff) == 0x1710);
};
