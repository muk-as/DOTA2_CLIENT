#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ChaosKnight_Chaos_Strike : public client::CDOTA_Buff
    {
    public:
        float creep_multiplier; // 0x1708        
        float creep_lifesteal_reduction_pct; // 0x170c        
        int32_t crit_min; // 0x1710        
        int32_t crit_max; // 0x1714        
        int32_t lifesteal; // 0x1718        
        float chance; // 0x171c        
        int32_t m_nNextCrit; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        // m_vCritRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_vCritRecords;
        char m_vCritRecords[0x18]; // 0x1728        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ChaosKnight_Chaos_Strike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ChaosKnight_Chaos_Strike) == 0x1740);
};
