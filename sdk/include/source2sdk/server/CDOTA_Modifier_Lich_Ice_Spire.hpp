#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lich_Ice_Spire : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x1878            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x187c            
            source2sdk::server::CountdownTimer m_Timer; // 0x1880            
            bool has_aura; // 0x1898            
            uint8_t _pad1899[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Ice_Spire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lich_Ice_Spire) == 0x18a0);
    };
};
