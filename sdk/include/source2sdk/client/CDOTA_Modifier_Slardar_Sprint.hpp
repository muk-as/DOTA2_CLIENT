#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slardar_Sprint : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_speed; // 0x1878            
            std::int32_t speed_burst_percent; // 0x187c            
            float speed_burst_duration; // 0x1880            
            float speed_burst_max_duration; // 0x1884            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slardar_Sprint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Slardar_Sprint) == 0x1890);
    };
};
