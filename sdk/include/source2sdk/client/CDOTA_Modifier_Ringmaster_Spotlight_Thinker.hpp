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
        class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool self_spotlight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float radius; // 0x_            
            float initial_speed; // 0x_            
            float sweep_speed; // 0x_            
            float sweep_radius; // 0x_            
            float linger_duration; // 0x_            
            std::int32_t spotlight_index; // 0x_            
            Vector m_vStartLocation; // 0x_            
            Vector m_vTargetLocation; // 0x_            
            float m_flTargetReachedTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Spotlight_Thinker) == 0x_);
    };
};
