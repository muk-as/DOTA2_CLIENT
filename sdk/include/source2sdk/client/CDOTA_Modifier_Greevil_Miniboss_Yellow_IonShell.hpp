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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Greevil_Miniboss_Yellow_IonShell : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x1888            
            std::int32_t damage_per_second; // 0x188c            
            uint8_t _pad1890[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Greevil_Miniboss_Yellow_IonShell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Greevil_Miniboss_Yellow_IonShell) == 0x18a8);
    };
};
