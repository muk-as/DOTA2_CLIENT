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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Grapple_VictimMotion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t impact_damage; // 0x17f8            
            float debuff_duration; // 0x17fc            
            float landing_radius; // 0x1800            
            float air_duration; // 0x1804            
            std::int32_t air_height; // 0x1808            
            std::int32_t travel_distance; // 0x180c            
            Vector m_vDestination; // 0x1810            
            float m_flStartZ; // 0x181c            
            float m_flCurTime; // 0x1820            
            float m_flJumpDuration; // 0x1824            
            float m_flJumpHeight; // 0x1828            
            Vector m_vTargetHorizontalDirection; // 0x182c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Grapple_VictimMotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Grapple_VictimMotion) == 0x1838);
    };
};
