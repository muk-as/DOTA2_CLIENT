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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enigma_Innate_EventHorizon : public client::CDOTA_Buff
    {
    public:
        float damage_reduction; // 0x16e8        
        float max_dist; // 0x16ec        
        float min_dist; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_Innate_EventHorizon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enigma_Innate_EventHorizon) == 0x16f8);
};
