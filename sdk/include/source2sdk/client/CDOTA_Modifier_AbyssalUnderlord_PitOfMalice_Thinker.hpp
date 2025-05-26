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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pit_damage; // 0x1878            
            float radius; // 0x187c            
            float pit_interval; // 0x1880            
            float ensnare_duration; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker) == 0x1888);
    };
};
