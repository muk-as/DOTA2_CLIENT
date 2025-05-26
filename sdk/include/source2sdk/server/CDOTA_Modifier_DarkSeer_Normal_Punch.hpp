#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x19f0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkSeer_Normal_Punch : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_PositionIndex[30]; // 0x1878            
            source2sdk::client::ParticleIndex_t m_nNormalPunchBuffIndex; // 0x19e0            
            float m_flDistanceTraveled; // 0x19e4            
            bool m_bIsValidTarget; // 0x19e8            
            uint8_t _pad19e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_Normal_Punch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkSeer_Normal_Punch) == 0x19f0);
    };
};
