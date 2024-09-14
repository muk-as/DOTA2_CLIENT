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
    class CDOTA_Modifier_JumpBoots : public client::CDOTA_Buff
    {
    public:
        Vector m_vDirection; // 0x16e8        
        float m_flStartZ; // 0x16f4        
        float m_flCurTime; // 0x16f8        
        int32_t push_length; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_JumpBoots because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_JumpBoots) == 0x1700);
};
