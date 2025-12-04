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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_XP_Fountain_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x_            
            bool m_bIsGranting; // 0x_            
            bool m_bInitialized; // 0x_            
            bool m_bSetFoW; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextXpActivationTime; // 0x_            
            float countdown_time; // 0x_            
            float think_interval; // 0x_            
            float m_flRemainingCountDownTime; // 0x_            
            float radius; // 0x_            
            float m_flPauseDuration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_XP_Fountain_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_XP_Fountain_Aura) == 0x_);
    };
};
