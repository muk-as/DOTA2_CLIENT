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
        // Size: 0x1850
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_Firefly : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            float radius; // 0x17fc            
            std::int32_t m_ifirefly_Active; // 0x1800            
            float tree_radius; // 0x1804            
            float damage_per_second; // 0x1808            
            float movement_speed; // 0x180c            
            std::int32_t bonus_slow_resistance; // 0x1810            
            float tick_interval; // 0x1814            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1818            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x181c            
            source2sdk::entity2::GameTime_t m_fNextDamageTick; // 0x1820            
            Vector m_vLastFirePoolLoc; // 0x1824            
            std::int32_t bonus_vision; // 0x1830            
            uint8_t _pad1834[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_Firefly because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Batrider_Firefly) == 0x1850);
    };
};
