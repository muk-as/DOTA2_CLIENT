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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sniper_Shrapnel_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            bool m_bExploded; // 0x17fc            
            uint8_t _pad17fd[0xb]; // 0x17fd
            bool m_bGrantedGem; // 0x1808            
            uint8_t _pad1809[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_Shrapnel_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sniper_Shrapnel_Thinker) == 0x1810);
    };
};
