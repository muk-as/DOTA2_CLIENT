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
    class CDOTA_Modifier_Slark_Pounce_Leash : public client::CDOTA_Buff
    {
    public:
        int32_t leash_radius; // 0x16e8        
        Vector vLeashLocation; // 0x16ec        
        bool m_bEscaped; // 0x16f8        
        bool m_bFishBait; // 0x16f9        
        [[maybe_unused]] std::uint8_t pad_0x16fa[0xe];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce_Leash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_Pounce_Leash) == 0x1708);
};
