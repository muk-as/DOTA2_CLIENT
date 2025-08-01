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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Sharpshooter_Recoil : public source2sdk::client::CDOTA_Buff
        {
        public:
            float recoil_duration; // 0x1878            
            std::int32_t recoil_height; // 0x187c            
            std::int32_t recoil_distance; // 0x1880            
            float m_flStartZ; // 0x1884            
            float m_flCurTime; // 0x1888            
            float m_flJumpDuration; // 0x188c            
            float m_flJumpHeight; // 0x1890            
            Vector m_vTargetHorizontalDirection; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_Recoil because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Sharpshooter_Recoil) == 0x18a0);
    };
};
