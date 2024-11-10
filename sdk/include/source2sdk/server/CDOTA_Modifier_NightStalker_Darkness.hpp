#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_NightStalker_Darkness : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_damage; // 0x1708        
        int32_t status_resistance; // 0x170c        
        int32_t hp_regen; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        bool m_bIsDay; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_Darkness because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_NightStalker_Darkness) == 0x1720);
};
