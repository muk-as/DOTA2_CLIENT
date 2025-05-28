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
        class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public source2sdk::client::CDOTA_Buff
        {
        public:
            float slow; // 0x1888            
            std::int32_t magic_resistance; // 0x188c            
            float stun_duration; // 0x1890            
            Vector vLastPos; // 0x1894            
            bool bResetPosition; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            float m_fAccumulatedDistance; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a8            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x18ac            
            bool m_bStunned; // 0x18b0            
            uint8_t _pad18b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind) == 0x18b8);
    };
};
