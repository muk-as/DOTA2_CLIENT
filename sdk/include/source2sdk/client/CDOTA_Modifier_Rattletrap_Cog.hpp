#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_Cog : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bEnabled; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            std::int32_t trigger_distance; // 0x187c            
            std::int32_t push_length; // 0x1880            
            float push_duration; // 0x1884            
            std::int32_t cogs_radius; // 0x1888            
            std::int32_t cogs_pullin; // 0x188c            
            std::int32_t attacks_to_destroy; // 0x1890            
            std::int32_t m_iCogIndex; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1898            
            Vector vCenter; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rattletrap_Cog) == 0x18a8);
    };
};
