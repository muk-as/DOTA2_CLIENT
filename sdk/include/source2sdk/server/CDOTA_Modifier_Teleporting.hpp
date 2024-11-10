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
    // Size: 0x1b60
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Teleporting : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x20]; // 0x1708
        float m_fStartTime; // 0x1728        
        char m_iszPortalLoopAppear[260]; // 0x172c        
        char m_iszPortalLoopDisappear[260]; // 0x1830        
        char m_iszHeroLoopAppear[260]; // 0x1934        
        char m_iszHeroLoopDisappear[260]; // 0x1a38        
        bool m_bSkipTeleportAnim; // 0x1b3c        
        bool m_bPlayingCoopAnim; // 0x1b3d        
        bool m_bIsPlayingTauntGesture; // 0x1b3e        
        [[maybe_unused]] std::uint8_t pad_0x1b3f[0x1]; // 0x1b3f
        float m_fChannelTime; // 0x1b40        
        Vector m_vStart; // 0x1b44        
        Vector m_vEnd; // 0x1b50        
        [[maybe_unused]] std::uint8_t pad_0x1b5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Teleporting) == 0x1b60);
};
