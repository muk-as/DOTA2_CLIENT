#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TutorialNPCBlocker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vecStart; // 0x1888            
            Vector m_vecEnd; // 0x1894            
            Vector m_vecCenter; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18ac            
            bool m_bHidden; // 0x18b0            
            uint8_t _pad18b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TutorialNPCBlocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TutorialNPCBlocker) == 0x18b8);
    };
};
