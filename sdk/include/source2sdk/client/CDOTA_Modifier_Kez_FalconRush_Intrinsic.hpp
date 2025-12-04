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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_FalconRush_Intrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_attack_rate; // 0x_            
            std::int32_t attack_speed_factor; // 0x_            
            float katana_attack_rate_penalty; // 0x_            
            float m_flAttackRate; // 0x_            
            bool m_bCanGenerateImage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_FalconRush_Intrinsic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_FalconRush_Intrinsic) == 0x_);
    };
};
