#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_Cog : public client::CDOTA_Buff
    {
    public:
        bool m_bEnabled; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t trigger_distance; // 0x16ec        
        int32_t push_length; // 0x16f0        
        float push_duration; // 0x16f4        
        int32_t cogs_radius; // 0x16f8        
        int32_t cogs_pullin; // 0x16fc        
        int32_t attacks_to_destroy; // 0x1700        
        int32_t m_iCogIndex; // 0x1704        
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        Vector vCenter; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_Cog) == 0x1718);
};
