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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_ArcToGround : public source2sdk::client::CDOTA_Buff
        {
        public:
            float leap_speed; // 0x1878            
            float give_up_distance; // 0x187c            
            float attackspeed_duration; // 0x1880            
            float m_flOriginalZDelta; // 0x1884            
            float m_flZDelta; // 0x1888            
            Vector m_vStart; // 0x188c            
            Vector m_vTargetPos; // 0x1898            
            float m_flSpeed; // 0x18a4            
            bool m_bDroppedFromTree; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18ac            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x18b0            
            float m_flOriginalHeight; // 0x18b4            
            bool m_bRightClickHop; // 0x18b8            
            uint8_t _pad18b9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_ArcToGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_ArcToGround) == 0x18c0);
    };
};
