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
    class CDOTA_Modifier_QueenOfPain_ScreamOfPain_Fear : public client::CDOTA_Buff
    {
    public:
        Vector m_vOriginal; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_ScreamOfPain_Fear because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_QueenOfPain_ScreamOfPain_Fear) == 0x1718);
};
