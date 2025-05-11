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
        // Size: 0x1860
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Illusion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t outgoing_damage; // 0x17f8            
            std::int32_t outgoing_damage_structure; // 0x17fc            
            std::int32_t outgoing_damage_roshan; // 0x1800            
            std::int32_t incoming_damage; // 0x1804            
            std::int32_t bounty_base; // 0x1808            
            std::int32_t bounty_growth; // 0x180c            
            CUtlString m_strIllusionType; // 0x1810            
            char m_szIllusionLabel[64]; // 0x1818            
            bool m_bHidden; // 0x1858            
            uint8_t _pad1859[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Illusion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Illusion) == 0x1860);
    };
};
