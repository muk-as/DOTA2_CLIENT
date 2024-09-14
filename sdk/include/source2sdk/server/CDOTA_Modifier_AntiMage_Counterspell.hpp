#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CModifierParams.hpp"
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
    // Size: 0x18c8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AntiMage_Counterspell : public client::CDOTA_Buff
    {
    public:
        client::CModifierParams m_LastParams; // 0x16e8        
        int32_t magic_resistance; // 0x18c0        
        int32_t reflected_spell_amp; // 0x18c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AntiMage_Counterspell because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AntiMage_Counterspell) == 0x18c8);
};
