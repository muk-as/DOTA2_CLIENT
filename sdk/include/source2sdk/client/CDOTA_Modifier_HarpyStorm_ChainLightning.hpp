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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_HarpyStorm_ChainLightning : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t jump_range; // 0x1888            
            std::int32_t max_targets; // 0x188c            
            float damage_percent_loss; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_HarpyStorm_ChainLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_HarpyStorm_ChainLightning) == 0x1898);
    };
};
