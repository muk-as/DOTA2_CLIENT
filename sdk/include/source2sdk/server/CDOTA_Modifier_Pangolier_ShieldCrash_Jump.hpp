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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_ShieldCrash_Jump : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_duration; // 0x_            
            float jump_duration_gyroshell; // 0x_            
            std::int32_t jump_height; // 0x_            
            std::int32_t jump_height_gyroshell; // 0x_            
            float m_flStartZ; // 0x_            
            float m_flCurTime; // 0x_            
            float m_flJumpDuration; // 0x_            
            float m_flJumpHeight; // 0x_            
            std::int32_t jump_horizontal_distance; // 0x_            
            Vector m_vTargetHorizontalDirection; // 0x_            
            float m_flPreviousElapsedTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_ShieldCrash_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pangolier_ShieldCrash_Jump) == 0x_);
    };
};
