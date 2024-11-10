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
    class CDOTA_Modifier_Lina_LagunaBlade_Line : public client::CDOTA_Buff
    {
    public:
        Vector vStart; // 0x1708        
        Vector vEnd; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lina_LagunaBlade_Line because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lina_LagunaBlade_Line) == 0x1720);
};
