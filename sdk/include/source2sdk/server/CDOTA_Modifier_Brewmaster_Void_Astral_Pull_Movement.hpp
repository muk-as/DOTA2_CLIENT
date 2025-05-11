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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_Void_Astral_Pull_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDirection; // 0x17f8            
            float m_flEndTime; // 0x1804            
            float m_flCurTime; // 0x1808            
            std::int32_t pull_distance; // 0x180c            
            std::int32_t damage; // 0x1810            
            float pull_duration; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_Void_Astral_Pull_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_Void_Astral_Pull_Movement) == 0x1818);
    };
};
