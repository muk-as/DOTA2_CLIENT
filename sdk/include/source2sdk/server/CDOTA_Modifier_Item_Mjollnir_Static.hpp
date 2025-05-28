#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mjollnir_Static : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x14]; // 0x1888
            std::int32_t static_chance; // 0x189c            
            std::int32_t static_strikes; // 0x18a0            
            std::int32_t static_damage; // 0x18a4            
            std::int32_t static_primary_radius; // 0x18a8            
            std::int32_t static_seconary_radius; // 0x18ac            
            std::int32_t static_radius; // 0x18b0            
            float static_cooldown; // 0x18b4            
            std::int32_t chain_damage_per_charge; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            source2sdk::server::CountdownTimer m_StaticTimer; // 0x18c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir_Static because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Mjollnir_Static) == 0x18d8);
    };
};
