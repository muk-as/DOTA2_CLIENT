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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_ArcToGround : public source2sdk::client::CDOTA_Buff
        {
        public:
            float leap_speed; // 0x_            
            float give_up_distance; // 0x_            
            float attackspeed_duration; // 0x_            
            float m_flOriginalZDelta; // 0x_            
            float m_flZDelta; // 0x_            
            Vector m_vStart; // 0x_            
            Vector m_vTargetPos; // 0x_            
            float m_flSpeed; // 0x_            
            bool m_bDroppedFromTree; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x_            
            float m_flOriginalHeight; // 0x_            
            bool m_bRightClickHop; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_ArcToGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_ArcToGround) == 0x_);
    };
};
