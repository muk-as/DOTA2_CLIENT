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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Grapple_VictimMotion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t impact_damage; // 0x1888            
            float debuff_duration; // 0x188c            
            float landing_radius; // 0x1890            
            float air_duration; // 0x1894            
            std::int32_t air_height; // 0x1898            
            std::int32_t travel_distance; // 0x189c            
            Vector m_vDestination; // 0x18a0            
            float m_flStartZ; // 0x18ac            
            float m_flCurTime; // 0x18b0            
            float m_flJumpDuration; // 0x18b4            
            float m_flJumpHeight; // 0x18b8            
            Vector m_vTargetHorizontalDirection; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Grapple_VictimMotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Grapple_VictimMotion) == 0x18c8);
    };
};
