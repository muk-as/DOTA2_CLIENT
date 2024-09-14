#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_Item_Hermes_Sandals_Active : public client::CDOTA_Buff
    {
    public:
        int32_t phase_movement_speed; // 0x16e8        
        int32_t phase_movement_speed_range; // 0x16ec        
        client::ParticleIndex_t m_nFXIndex; // 0x16f0        
        bool m_bWasRooted; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Hermes_Sandals_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Hermes_Sandals_Active) == 0x16f8);
};
