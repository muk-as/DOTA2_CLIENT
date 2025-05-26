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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool self_spotlight; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            float radius; // 0x187c            
            float initial_speed; // 0x1880            
            float sweep_speed; // 0x1884            
            float sweep_radius; // 0x1888            
            float linger_duration; // 0x188c            
            std::int32_t spotlight_index; // 0x1890            
            Vector m_vStartLocation; // 0x1894            
            Vector m_vTargetLocation; // 0x18a0            
            float m_flTargetReachedTime; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Spotlight_Thinker) == 0x18b0);
    };
};
