#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1b40
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Teleporting : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x20]; // 0x16e8
        float m_fStartTime; // 0x1708        
        char m_iszPortalLoopAppear[260]; // 0x170c        
        char m_iszPortalLoopDisappear[260]; // 0x1810        
        char m_iszHeroLoopAppear[260]; // 0x1914        
        char m_iszHeroLoopDisappear[260]; // 0x1a18        
        bool m_bSkipTeleportAnim; // 0x1b1c        
        bool m_bPlayingCoopAnim; // 0x1b1d        
        bool m_bIsPlayingTauntGesture; // 0x1b1e        
        [[maybe_unused]] std::uint8_t pad_0x1b1f[0x1]; // 0x1b1f
        float m_fChannelTime; // 0x1b20        
        Vector m_vStart; // 0x1b24        
        Vector m_vEnd; // 0x1b30        
        [[maybe_unused]] std::uint8_t pad_0x1b3c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Teleporting) == 0x1b40);
};
