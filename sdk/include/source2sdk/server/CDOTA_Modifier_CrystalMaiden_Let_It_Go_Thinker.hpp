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
    class CDOTA_Modifier_CrystalMaiden_Let_It_Go_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vPathStart; // 0x16e8        
        Vector m_vPathEnd; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_Let_It_Go_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CrystalMaiden_Let_It_Go_Thinker) == 0x1700);
};
