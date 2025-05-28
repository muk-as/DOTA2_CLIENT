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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_WhirlingDeath_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stat_loss_pct; // 0x1888            
            float stat_loss_univ; // 0x188c            
            std::int32_t iPrimaryAttribute; // 0x1890            
            float flStatLossStr; // 0x1894            
            float flStatLossAgi; // 0x1898            
            float flStatLossInt; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_WhirlingDeath_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shredder_WhirlingDeath_Debuff) == 0x18a0);
    };
};
