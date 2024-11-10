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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker : public client::CDOTA_Buff
    {
    public:
        float creation_interval; // 0x1708        
        float vines_duration; // 0x170c        
        int32_t vine_spawn_interval; // 0x1710        
        Vector m_vInitialLoc; // 0x1714        
        Vector m_vFinalLoc; // 0x1720        
        int32_t m_iVineCount; // 0x172c        
        int32_t m_iVinesIndex; // 0x1730        
        bool m_bFoundTree; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1735[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker) == 0x1738);
};
