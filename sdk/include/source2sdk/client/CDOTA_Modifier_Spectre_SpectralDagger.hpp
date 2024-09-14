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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spectre_SpectralDagger : public client::CDOTA_Buff
    {
    public:
        int32_t path_radius; // 0x16e8        
        float hero_path_duration; // 0x16ec        
        Vector m_vLastPosition; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_SpectralDagger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spectre_SpectralDagger) == 0x1700);
};
