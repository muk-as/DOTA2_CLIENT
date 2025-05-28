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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_FalconRush_Intrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_attack_rate; // 0x1888            
            std::int32_t attack_speed_factor; // 0x188c            
            float katana_attack_rate_penalty; // 0x1890            
            float m_flAttackRate; // 0x1894            
            bool m_bCanGenerateImage; // 0x1898            
            uint8_t _pad1899[0x1f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_FalconRush_Intrinsic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_FalconRush_Intrinsic) == 0x18b8);
    };
};
