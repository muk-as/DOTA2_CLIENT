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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_XP_Fountain_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x1888            
            bool m_bIsGranting; // 0x1889            
            bool m_bInitialized; // 0x188a            
            bool m_bSetFoW; // 0x188b            
            source2sdk::entity2::GameTime_t m_flNextXpActivationTime; // 0x188c            
            float countdown_time; // 0x1890            
            float think_interval; // 0x1894            
            float m_flRemainingCountDownTime; // 0x1898            
            float radius; // 0x189c            
            float m_flPauseDuration; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_XP_Fountain_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_XP_Fountain_Aura) == 0x18a8);
    };
};
