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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mjollnir_Static : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x8]; // 0x17f8
            std::int32_t static_chance; // 0x1800            
            std::int32_t static_strikes; // 0x1804            
            std::int32_t static_damage; // 0x1808            
            std::int32_t static_primary_radius; // 0x180c            
            std::int32_t static_seconary_radius; // 0x1810            
            std::int32_t static_radius; // 0x1814            
            float static_cooldown; // 0x1818            
            std::int32_t chain_damage_per_charge; // 0x181c            
            source2sdk::server::CountdownTimer m_StaticTimer; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir_Static because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Mjollnir_Static) == 0x1838);
    };
};
