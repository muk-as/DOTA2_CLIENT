#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Skywrath_Mage_Shield_Barrier : public client::CDOTA_Buff
    {
    public:
        int32_t m_nDamageAbsorbed; // 0x1708        
        float damage_barrier_base; // 0x170c        
        float damage_barrier_per_level; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_flExpirationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_flExpirationTimes;
        char m_flExpirationTimes[0x18]; // 0x1718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Skywrath_Mage_Shield_Barrier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Skywrath_Mage_Shield_Barrier) == 0x1730);
};
