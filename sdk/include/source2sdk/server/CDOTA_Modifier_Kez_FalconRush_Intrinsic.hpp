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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_FalconRush_Intrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_attack_rate_katana; // 0x17f8            
            float base_attack_rate_sai; // 0x17fc            
            std::int32_t attack_speed_factor; // 0x1800            
            float m_flAttackRate; // 0x1804            
            uint8_t _pad1808[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_FalconRush_Intrinsic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_FalconRush_Intrinsic) == 0x1820);
    };
};
