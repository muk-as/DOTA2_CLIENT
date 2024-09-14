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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Jakiro_DualBreath_Thinker : public client::CDOTA_Buff
    {
    public:
        float start_radius; // 0x16e8        
        float end_radius; // 0x16ec        
        entity2::GameTime_t m_fStartTime; // 0x16f0        
        float m_fTotalTime; // 0x16f4        
        Vector m_vCastPosition; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_DualBreath_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Jakiro_DualBreath_Thinker) == 0x1708);
};
