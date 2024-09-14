#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1790
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SandKing_Epicenter : public client::CDOTA_Buff
    {
    public:
        int32_t epicenter_radius_base; // 0x16e8        
        int32_t epicenter_radius_increment; // 0x16ec        
        int32_t epicenter_pulses; // 0x16f0        
        int32_t epicenter_radius[30]; // 0x16f4        
        int32_t m_iMaxPulses; // 0x176c        
        int32_t m_iPulseCount; // 0x1770        
        float m_flPulseTickRate; // 0x1774        
        float spine_tick_rate; // 0x1778        
        entity2::GameTime_t m_flLastDamageTime; // 0x177c        
        entity2::GameTime_t m_flLastSpineTime; // 0x1780        
        [[maybe_unused]] std::uint8_t pad_0x1784[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_Epicenter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SandKing_Epicenter) == 0x1790);
};
