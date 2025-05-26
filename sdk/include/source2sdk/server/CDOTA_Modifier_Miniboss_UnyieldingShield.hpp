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
        class CDOTA_Modifier_Miniboss_UnyieldingShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_absorb; // 0x1878            
            float regen_per_second; // 0x187c            
            float regen_bonus_per_interval; // 0x1880            
            bool smaller_shield; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            std::int32_t m_nDamageAbsorbed; // 0x1888            
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x188c            
            source2sdk::client::ParticleIndex_t nFXIndex; // 0x1890            
            std::int32_t m_nVisualTeam; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Miniboss_UnyieldingShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Miniboss_UnyieldingShield) == 0x1898);
    };
};
