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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_ElectricVortex_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDestination; // 0x17f8            
            std::int32_t electric_vortex_pull_distance; // 0x1804            
            float electric_vortex_pull_tether_range; // 0x1808            
            uint8_t _pad180c[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_ElectricVortex_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_StormSpirit_ElectricVortex_Pull) == 0x1818);
    };
};
