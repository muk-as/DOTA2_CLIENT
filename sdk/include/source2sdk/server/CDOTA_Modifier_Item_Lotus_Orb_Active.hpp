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
    // Size: 0x18e0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Lotus_Orb_Active : public client::CDOTA_Buff
    {
    public:
        client::CModifierParams m_LastParams; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Lotus_Orb_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Lotus_Orb_Active) == 0x18e0);
};
