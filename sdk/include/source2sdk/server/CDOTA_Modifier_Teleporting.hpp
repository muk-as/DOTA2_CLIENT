#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1d10
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Teleporting : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x50]; // 0x1888
            float m_fStartTime; // 0x18d8            
            char m_iszPortalLoopAppear[260]; // 0x18dc            
            char m_iszPortalLoopDisappear[260]; // 0x19e0            
            char m_iszHeroLoopAppear[260]; // 0x1ae4            
            char m_iszHeroLoopDisappear[260]; // 0x1be8            
            bool m_bSkipTeleportAnim; // 0x1cec            
            bool m_bPlayingCoopAnim; // 0x1ced            
            bool m_bIsPlayingTauntGesture; // 0x1cee            
            uint8_t _pad1cef[0x1]; // 0x1cef
            float m_fChannelTime; // 0x1cf0            
            Vector m_vStart; // 0x1cf4            
            Vector m_vEnd; // 0x1d00            
            uint8_t _pad1d0c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Teleporting) == 0x1d10);
    };
};
