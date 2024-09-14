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
    class CDOTA_Modifier_Invoker_ChaosMeteor_Land : public client::CDOTA_Buff
    {
    public:
        Vector m_vDir; // 0x16e8        
        int32_t travel_speed; // 0x16f4        
        int32_t travel_distance; // 0x16f8        
        int32_t vision_distance; // 0x16fc        
        float spell_amp; // 0x1700        
        float spell_lifesteal; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ChaosMeteor_Land because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_ChaosMeteor_Land) == 0x1708);
};
