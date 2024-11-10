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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SkeletonKing_MortalStrike : public client::CDOTA_Buff
    {
    public:
        int32_t crit_mult; // 0x1708        
        int32_t wraith_crit_bonus; // 0x170c        
        float wraith_cd_mult; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_vCritRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_vCritRecords;
        char m_vCritRecords[0x18]; // 0x1718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_MortalStrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SkeletonKing_MortalStrike) == 0x1730);
};
