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
    class CDOTA_Modifier_Clinkz_Burning_Army_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t m_iCount; // 0x16e8        
        int32_t count; // 0x16ec        
        int32_t range; // 0x16f0        
        Vector m_vFacePosition; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_Burning_Army_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Clinkz_Burning_Army_Thinker) == 0x1700);
};
