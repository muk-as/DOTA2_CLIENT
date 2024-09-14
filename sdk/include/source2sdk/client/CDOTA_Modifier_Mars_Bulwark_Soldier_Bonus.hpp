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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_Bulwark_Soldier_Bonus : public client::CDOTA_Buff
    {
    public:
        int32_t m_nPoseParameterWE; // 0x16e8        
        int32_t m_nPoseParameterNS; // 0x16ec        
        float m_flLastPoseX; // 0x16f0        
        float m_flLastPoseY; // 0x16f4        
        int32_t m_nLastMaxDirection; // 0x16f8        
        Vector m_vLastOrigin; // 0x16fc        
        entity2::GameTime_t m_flLastGameTime; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Soldier_Bonus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Bulwark_Soldier_Bonus) == 0x1710);
};
