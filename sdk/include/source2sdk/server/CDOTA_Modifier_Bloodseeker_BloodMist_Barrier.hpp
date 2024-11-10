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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodseeker_BloodMist_Barrier : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t flLastGameTime; // 0x1708        
        float m_flCurrentShield; // 0x170c        
        float barrier_decay_pct; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_BloodMist_Barrier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_BloodMist_Barrier) == 0x1718);
};
