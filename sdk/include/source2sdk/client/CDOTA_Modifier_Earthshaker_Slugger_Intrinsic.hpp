#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Earthshaker_Slugger_Intrinsic : public client::CDOTA_Buff
    {
    public:
        // m_EnchantTotemAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_EnchantTotemAttackRecords;
        char m_EnchantTotemAttackRecords[0x18]; // 0x16e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Slugger_Intrinsic because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Earthshaker_Slugger_Intrinsic) == 0x1700);
};
