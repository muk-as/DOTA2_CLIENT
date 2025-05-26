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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Necrolyte_Sadist_Counter : public source2sdk::client::CDOTA_Buff
        {
        public:
            float mana_regen; // 0x1878            
            float health_regen; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_Sadist_Counter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Necrolyte_Sadist_Counter) == 0x1880);
    };
};
