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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KoboldTunneler_ProspectingAura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            uint8_t _pad187c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KoboldTunneler_ProspectingAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KoboldTunneler_ProspectingAura) == 0x1880);
    };
};
