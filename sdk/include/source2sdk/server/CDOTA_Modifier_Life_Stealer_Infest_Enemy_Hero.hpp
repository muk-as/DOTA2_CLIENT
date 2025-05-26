#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Life_Stealer_Infest_Enemy_Hero : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_rate_enemy; // 0x1878            
            float dot_duration; // 0x187c            
            float radius; // 0x1880            
            float m_flTotalDamage; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Infest_Enemy_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Life_Stealer_Infest_Enemy_Hero) == 0x1888);
    };
};
