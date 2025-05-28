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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_ArcToGround : public source2sdk::client::CDOTA_Buff
        {
        public:
            float leap_speed; // 0x1888            
            float give_up_distance; // 0x188c            
            float attackspeed_duration; // 0x1890            
            float m_flOriginalZDelta; // 0x1894            
            float m_flZDelta; // 0x1898            
            Vector m_vStart; // 0x189c            
            Vector m_vTargetPos; // 0x18a8            
            float m_flSpeed; // 0x18b4            
            bool m_bDroppedFromTree; // 0x18b8            
            uint8_t _pad18b9[0x3]; // 0x18b9
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18bc            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x18c0            
            float m_flOriginalHeight; // 0x18c4            
            bool m_bRightClickHop; // 0x18c8            
            uint8_t _pad18c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_ArcToGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_ArcToGround) == 0x18d0);
    };
};
