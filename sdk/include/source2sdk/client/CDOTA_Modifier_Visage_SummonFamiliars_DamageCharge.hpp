#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    class CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge : public client::CDOTA_Buff
    {
    public:
        int32_t familiar_speed; // 0x1708        
        int32_t m_nFXIndex; // 0x170c        
        int32_t m_nFXIndexB; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        client::CountdownTimer m_ctTimer; // 0x1718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge) == 0x1730);
};
