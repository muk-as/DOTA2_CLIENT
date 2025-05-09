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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_QueenOfPain_Innate_Seduction : public client::CDOTA_Buff
    {
    public:
        float spell_lifesteal; // 0x1708        
        float close_radius; // 0x170c        
        float max_radius; // 0x1710        
        float spell_lifesteal_close; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_Innate_Seduction because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_QueenOfPain_Innate_Seduction) == 0x1718);
};
