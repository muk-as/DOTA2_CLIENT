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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet : public client::CDOTA_Buff
    {
    public:
        Vector vCasterOrigin; // 0x16e8        
        Vector vEnd; // 0x16f4        
        int32_t hitcount; // 0x1700        
        int32_t fleet_count; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet) == 0x1708);
};
