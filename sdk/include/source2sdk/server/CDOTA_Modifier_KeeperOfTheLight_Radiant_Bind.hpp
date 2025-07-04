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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public source2sdk::client::CDOTA_Buff
        {
        public:
            float slow; // 0x1878            
            std::int32_t magic_resistance; // 0x187c            
            float stun_duration; // 0x1880            
            Vector vLastPos; // 0x1884            
            bool bResetPosition; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            float m_fAccumulatedDistance; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1898            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x189c            
            bool m_bStunned; // 0x18a0            
            uint8_t _pad18a1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind) == 0x18a8);
    };
};
