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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ItemWiggle_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vOriginalPosition; // 0x16e8        
        float m_flOriginalScale; // 0x16f4        
        entity2::GameTime_t m_flLastChangeTime; // 0x16f8        
        Vector m_vLastChangePosition; // 0x16fc        
        float m_flLastChangeScale; // 0x1708        
        Vector m_vTargetPosition; // 0x170c        
        float m_flTargetScale; // 0x1718        
        bool m_bFirstThink; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float m_flStartAmplitude; // 0x1720        
        float m_flEndAmplitude; // 0x1724        
        float m_flScaleAmplitude; // 0x1728        
        float m_flStartFrequency; // 0x172c        
        float m_flEndFrequency; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ItemWiggle_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ItemWiggle_Thinker) == 0x1738);
};
