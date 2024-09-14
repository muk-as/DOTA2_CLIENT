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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_SwampSickness : public client::CDOTA_Buff
    {
    public:
        int32_t slow_percent; // 0x16e8        
        bool m_bInRiver; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_SwampSickness because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_SwampSickness) == 0x16f0);
};
