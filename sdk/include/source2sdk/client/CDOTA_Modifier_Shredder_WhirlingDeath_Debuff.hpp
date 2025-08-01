#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_WhirlingDeath_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stat_loss_pct; // 0x1878            
            float stat_loss_univ; // 0x187c            
            std::int32_t iPrimaryAttribute; // 0x1880            
            float flStatLossStr; // 0x1884            
            float flStatLossAgi; // 0x1888            
            float flStatLossInt; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_WhirlingDeath_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Shredder_WhirlingDeath_Debuff) == 0x1890);
    };
};
