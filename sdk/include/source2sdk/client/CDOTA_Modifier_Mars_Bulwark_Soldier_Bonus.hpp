#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_Bulwark_Soldier_Bonus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nPoseParameterWE; // 0x1878            
            std::int32_t m_nPoseParameterNS; // 0x187c            
            float m_flLastPoseX; // 0x1880            
            float m_flLastPoseY; // 0x1884            
            std::int32_t m_nLastMaxDirection; // 0x1888            
            Vector m_vLastOrigin; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Soldier_Bonus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_Bulwark_Soldier_Bonus) == 0x18a0);
    };
};
