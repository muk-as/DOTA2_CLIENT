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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morty_Hop : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vStartPosition; // 0x17f8            
            Vector m_vTargetPosition; // 0x1804            
            float m_flCurrentTimeHoriz; // 0x1810            
            float m_flCurrentTimeVert; // 0x1814            
            float m_flZCoefficientA; // 0x1818            
            float m_flZCoefficientB; // 0x181c            
            bool m_bInterrupted; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            float duration; // 0x1824            
            std::int32_t height; // 0x1828            
            std::int32_t damage; // 0x182c            
            std::int32_t damage_radius; // 0x1830            
            uint8_t _pad1834[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morty_Hop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Morty_Hop) == 0x1838);
    };
};
