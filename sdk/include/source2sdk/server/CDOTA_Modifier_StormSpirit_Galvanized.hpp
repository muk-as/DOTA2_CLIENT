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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_StormSpirit_Galvanized : public client::CDOTA_Buff
    {
    public:
        float perma_mp_per_kill; // 0x16e8        
        float mp_per_kill; // 0x16ec        
        int32_t aoe; // 0x16f0        
        int32_t charges_per_ult; // 0x16f4        
        int32_t charges_per_death; // 0x16f8        
        int32_t m_nCounter; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_Galvanized because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_StormSpirit_Galvanized) == 0x1700);
};
