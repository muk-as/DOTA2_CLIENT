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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t pit_damage; // 0x16e8        
        float radius; // 0x16ec        
        float pit_interval; // 0x16f0        
        float ensnare_duration; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker) == 0x16f8);
};
