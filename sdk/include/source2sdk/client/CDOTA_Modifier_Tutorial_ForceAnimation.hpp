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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tutorial_ForceAnimation : public client::CDOTA_Buff
    {
    public:
        int32_t m_nActivity; // 0x1708        
        bool m_bLoop; // 0x170c        
        bool m_bFacePlayer; // 0x170d        
        [[maybe_unused]] std::uint8_t pad_0x170e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tutorial_ForceAnimation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tutorial_ForceAnimation) == 0x1710);
};
