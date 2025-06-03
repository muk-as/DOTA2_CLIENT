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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Abaddon_AphoticShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            float damage_absorb; // 0x187c            
            std::int32_t regen; // 0x1880            
            std::int32_t m_nDamageAbsorbed; // 0x1884            
            float absorb_to_damage; // 0x1888            
            float absorb_damage_aoe; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastTickTime; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Abaddon_AphoticShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Abaddon_AphoticShield) == 0x1898);
    };
};
