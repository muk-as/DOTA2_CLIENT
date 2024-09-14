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
    class CDOTA_Modifier_Item_WandOfTheBrine_Active : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed; // 0x16e8        
        float interval; // 0x16ec        
        int32_t damage_reduction; // 0x16f0        
        int32_t heal; // 0x16f4        
        client::ParticleIndex_t m_nFXIndex; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_WandOfTheBrine_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_WandOfTheBrine_Active) == 0x1700);
};
