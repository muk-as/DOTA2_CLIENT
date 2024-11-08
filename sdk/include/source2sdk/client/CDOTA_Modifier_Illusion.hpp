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
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Illusion : public client::CDOTA_Buff
    {
    public:
        int32_t outgoing_damage; // 0x1708        
        int32_t outgoing_damage_structure; // 0x170c        
        int32_t outgoing_damage_roshan; // 0x1710        
        int32_t incoming_damage; // 0x1714        
        int32_t bounty_base; // 0x1718        
        int32_t bounty_growth; // 0x171c        
        CUtlString m_strIllusionType; // 0x1720        
        char m_szIllusionLabel[64]; // 0x1728        
        bool m_bHidden; // 0x1768        
        [[maybe_unused]] std::uint8_t pad_0x1769[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Illusion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Illusion) == 0x1770);
};
