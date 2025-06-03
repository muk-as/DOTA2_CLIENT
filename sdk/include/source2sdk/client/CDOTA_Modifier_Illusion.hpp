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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Illusion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t outgoing_damage; // 0x1878            
            std::int32_t outgoing_damage_structure; // 0x187c            
            std::int32_t outgoing_damage_roshan; // 0x1880            
            std::int32_t incoming_damage; // 0x1884            
            std::int32_t bounty_base; // 0x1888            
            std::int32_t bounty_growth; // 0x188c            
            CUtlString m_strIllusionType; // 0x1890            
            char m_szIllusionLabel[64]; // 0x1898            
            bool m_bHidden; // 0x18d8            
            uint8_t _pad18d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Illusion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Illusion) == 0x18e0);
    };
};
