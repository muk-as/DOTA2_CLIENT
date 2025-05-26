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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stun_duration; // 0x1878            
            bool bHasScepter; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            float aoe; // 0x1880            
            std::int32_t m_iCount; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker) == 0x1888);
    };
};
