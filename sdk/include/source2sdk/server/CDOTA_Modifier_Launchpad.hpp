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
        class CDOTA_Modifier_Launchpad : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iActualMovespeedBonus; // 0x1878            
            std::int32_t movespeed_bonus_fast; // 0x187c            
            std::int32_t movespeed_bonus_moderate; // 0x1880            
            std::int32_t movespeed_bonus_slow; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Launchpad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Launchpad) == 0x1888);
    };
};
