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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TutorialNPCBlocker_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vecStart; // 0x1878            
            Vector m_vecEnd; // 0x1884            
            float m_flRadius; // 0x1890            
            bool m_bHidden; // 0x1894            
            uint8_t _pad1895[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TutorialNPCBlocker_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TutorialNPCBlocker_Thinker) == 0x1898);
    };
};
