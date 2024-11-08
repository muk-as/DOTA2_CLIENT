#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Necrolyte_Sadist : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x1708        
        bool m_bStackCountChanged; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        // m_fStackExpireTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_fStackExpireTimes;
        char m_fStackExpireTimes[0x18]; // 0x1710        
        float bonus_aoe; // 0x1728        
        float bonus_spell_amp; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_Sadist because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Necrolyte_Sadist) == 0x1730);
};
