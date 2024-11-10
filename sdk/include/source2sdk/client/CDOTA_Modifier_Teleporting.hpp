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
    class CDOTA_Modifier_Teleporting : public client::CDOTA_Buff
    {
    public:
        float m_fChannelTime; // 0x1708        
        Vector m_vStart; // 0x170c        
        Vector m_vEnd; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Teleporting) == 0x1728);
};
