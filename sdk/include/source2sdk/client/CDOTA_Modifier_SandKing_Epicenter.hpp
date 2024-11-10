#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x17b0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SandKing_Epicenter : public client::CDOTA_Buff
    {
    public:
        int32_t epicenter_radius_base; // 0x1708        
        int32_t epicenter_radius_increment; // 0x170c        
        int32_t epicenter_pulses; // 0x1710        
        int32_t epicenter_radius[30]; // 0x1714        
        int32_t m_iMaxPulses; // 0x178c        
        int32_t m_iPulseCount; // 0x1790        
        float m_flPulseTickRate; // 0x1794        
        float spine_tick_rate; // 0x1798        
        entity2::GameTime_t m_flLastDamageTime; // 0x179c        
        entity2::GameTime_t m_flLastSpineTime; // 0x17a0        
        [[maybe_unused]] std::uint8_t pad_0x17a4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_Epicenter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SandKing_Epicenter) == 0x17b0);
};
