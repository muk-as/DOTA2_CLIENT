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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_Cog : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bEnabled; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            std::int32_t trigger_distance; // 0x17fc            
            std::int32_t push_length; // 0x1800            
            float push_duration; // 0x1804            
            std::int32_t cogs_radius; // 0x1808            
            std::int32_t cogs_pullin; // 0x180c            
            std::int32_t attacks_to_destroy; // 0x1810            
            std::int32_t m_iCogIndex; // 0x1814            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1818            
            Vector vCenter; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rattletrap_Cog) == 0x1828);
    };
};
