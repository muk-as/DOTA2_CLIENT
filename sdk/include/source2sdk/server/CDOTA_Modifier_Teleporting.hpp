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
        // Size: 0x1d00
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Teleporting : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x50]; // 0x1878
            float m_fStartTime; // 0x18c8            
            char m_iszPortalLoopAppear[260]; // 0x18cc            
            char m_iszPortalLoopDisappear[260]; // 0x19d0            
            char m_iszHeroLoopAppear[260]; // 0x1ad4            
            char m_iszHeroLoopDisappear[260]; // 0x1bd8            
            bool m_bSkipTeleportAnim; // 0x1cdc            
            bool m_bPlayingCoopAnim; // 0x1cdd            
            bool m_bIsPlayingTauntGesture; // 0x1cde            
            uint8_t _pad1cdf[0x1]; // 0x1cdf
            float m_fChannelTime; // 0x1ce0            
            Vector m_vStart; // 0x1ce4            
            Vector m_vEnd; // 0x1cf0            
            uint8_t _pad1cfc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Teleporting) == 0x1d00);
    };
};
