#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_BountyHunter_WindWalk : public server::CDOTA_Modifier_Invisible
    {
    public:
        int32_t damage_reduction_pct; // 0x16f8        
        float shard_stun_duration; // 0x16fc        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_BountyHunter_WindWalk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_BountyHunter_WindWalk) == 0x1718);
};
