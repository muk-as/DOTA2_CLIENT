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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stun_duration; // 0x17f8            
            bool bHasScepter; // 0x17fc            
            uint8_t _pad17fd[0x3]; // 0x17fd
            float aoe; // 0x1800            
            std::int32_t m_iCount; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker) == 0x1808);
    };
};
