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
        class CDOTA_Modifier_Rattletrap_Cog : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bEnabled; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            std::int32_t trigger_distance; // 0x188c            
            std::int32_t push_length; // 0x1890            
            float push_duration; // 0x1894            
            std::int32_t cogs_radius; // 0x1898            
            std::int32_t cogs_pullin; // 0x189c            
            std::int32_t attacks_to_destroy; // 0x18a0            
            std::int32_t m_iCogIndex; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a8            
            Vector vCenter; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rattletrap_Cog) == 0x18b8);
    };
};
