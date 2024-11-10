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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_Cog : public client::CDOTA_Buff
    {
    public:
        bool m_bEnabled; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t trigger_distance; // 0x170c        
        int32_t push_length; // 0x1710        
        float push_duration; // 0x1714        
        int32_t cogs_radius; // 0x1718        
        int32_t cogs_pullin; // 0x171c        
        int32_t attacks_to_destroy; // 0x1720        
        int32_t m_iCogIndex; // 0x1724        
        client::ParticleIndex_t m_nFXIndex; // 0x1728        
        Vector vCenter; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_Cog) == 0x1738);
};
