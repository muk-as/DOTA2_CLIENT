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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_Pounce_Leash : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t leash_radius; // 0x1878            
            Vector vLeashLocation; // 0x187c            
            bool m_bEscaped; // 0x1888            
            bool m_bFishBait; // 0x1889            
            uint8_t _pad188a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce_Leash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Slark_Pounce_Leash) == 0x1890);
    };
};
