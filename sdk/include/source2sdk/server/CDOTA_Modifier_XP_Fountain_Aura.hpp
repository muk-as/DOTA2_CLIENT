#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_XP_Fountain_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x1878            
            bool m_bIsGranting; // 0x1879            
            bool m_bInitialized; // 0x187a            
            bool m_bSetFoW; // 0x187b            
            source2sdk::entity2::GameTime_t m_flNextXpActivationTime; // 0x187c            
            float countdown_time; // 0x1880            
            float think_interval; // 0x1884            
            float m_flRemainingCountDownTime; // 0x1888            
            float radius; // 0x188c            
            float m_flPauseDuration; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFxProgress; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_XP_Fountain_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_XP_Fountain_Aura) == 0x1898);
    };
};
