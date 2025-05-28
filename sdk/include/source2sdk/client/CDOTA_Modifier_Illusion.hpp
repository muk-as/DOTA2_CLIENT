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
        // Size: 0x18f0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Illusion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t outgoing_damage; // 0x1888            
            std::int32_t outgoing_damage_structure; // 0x188c            
            std::int32_t outgoing_damage_roshan; // 0x1890            
            std::int32_t incoming_damage; // 0x1894            
            std::int32_t bounty_base; // 0x1898            
            std::int32_t bounty_growth; // 0x189c            
            CUtlString m_strIllusionType; // 0x18a0            
            char m_szIllusionLabel[64]; // 0x18a8            
            bool m_bHidden; // 0x18e8            
            uint8_t _pad18e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Illusion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Illusion) == 0x18f0);
    };
};
