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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PersistentInvisibility : public source2sdk::client::CDOTA_Buff
        {
        public:
            float fade_delay; // 0x1878            
            float m_flFadeTime; // 0x187c            
            source2sdk::entity2::GameTime_t m_flLastActionTime; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PersistentInvisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PersistentInvisibility) == 0x1888);
    };
};
