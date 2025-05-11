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
        // Size: 0x1c50
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Teleporting : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x20]; // 0x17f8
            float m_fStartTime; // 0x1818            
            char m_iszPortalLoopAppear[260]; // 0x181c            
            char m_iszPortalLoopDisappear[260]; // 0x1920            
            char m_iszHeroLoopAppear[260]; // 0x1a24            
            char m_iszHeroLoopDisappear[260]; // 0x1b28            
            bool m_bSkipTeleportAnim; // 0x1c2c            
            bool m_bPlayingCoopAnim; // 0x1c2d            
            bool m_bIsPlayingTauntGesture; // 0x1c2e            
            uint8_t _pad1c2f[0x1]; // 0x1c2f
            float m_fChannelTime; // 0x1c30            
            Vector m_vStart; // 0x1c34            
            Vector m_vEnd; // 0x1c40            
            uint8_t _pad1c4c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Teleporting) == 0x1c50);
    };
};
