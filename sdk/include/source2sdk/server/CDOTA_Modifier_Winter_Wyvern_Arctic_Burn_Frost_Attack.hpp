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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack : public client::CDOTA_Buff
    {
    public:
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack) == 0x1720);
};
