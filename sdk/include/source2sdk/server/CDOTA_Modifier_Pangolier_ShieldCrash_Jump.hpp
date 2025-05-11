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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_ShieldCrash_Jump : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_duration; // 0x17f8            
            float jump_duration_gyroshell; // 0x17fc            
            std::int32_t jump_height; // 0x1800            
            std::int32_t jump_height_gyroshell; // 0x1804            
            float m_flStartZ; // 0x1808            
            float m_flCurTime; // 0x180c            
            float m_flJumpDuration; // 0x1810            
            float m_flJumpHeight; // 0x1814            
            std::int32_t jump_horizontal_distance; // 0x1818            
            Vector m_vTargetHorizontalDirection; // 0x181c            
            float m_flPreviousElapsedTime; // 0x1828            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_ShieldCrash_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pangolier_ShieldCrash_Jump) == 0x1830);
    };
};
