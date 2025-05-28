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
        class CDOTA_Modifier_Necrolyte_GhostShroud_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal_bonus; // 0x1888            
            std::int32_t bonus_damage; // 0x188c            
            float slow_aoe; // 0x1890            
            float movement_transfer; // 0x1894            
            float movement_speed; // 0x1898            
            float m_flMovementSpeedAmp; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_GhostShroud_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Necrolyte_GhostShroud_Active) == 0x18a0);
    };
};
