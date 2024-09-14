#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TutorialNPCBlocker : public client::CDOTA_Buff
    {
    public:
        Vector m_vecStart; // 0x16e8        
        Vector m_vecEnd; // 0x16f4        
        Vector m_vecCenter; // 0x1700        
        client::ParticleIndex_t m_nFXIndex; // 0x170c        
        bool m_bHidden; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TutorialNPCBlocker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TutorialNPCBlocker) == 0x1718);
};
