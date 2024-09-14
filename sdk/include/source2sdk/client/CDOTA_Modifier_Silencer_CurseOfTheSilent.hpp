#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Silencer_CurseOfTheSilent : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        client::ParticleIndex_t nFxIndex; // 0x16ec        
        float silence_duration; // 0x16f0        
        int32_t movespeed; // 0x16f4        
        int32_t undispellable; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_CurseOfTheSilent because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Silencer_CurseOfTheSilent) == 0x1700);
};
