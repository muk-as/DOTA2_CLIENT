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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet : public client::CDOTA_Buff
    {
    public:
        Vector vCasterOrigin; // 0x1708        
        Vector vEnd; // 0x1714        
        int32_t hitcount; // 0x1720        
        int32_t fleet_count; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet) == 0x1728);
};
