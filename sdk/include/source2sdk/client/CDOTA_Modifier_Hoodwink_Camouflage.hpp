#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Camouflage : public client::CDOTA_Buff
    {
    public:
        float fade_time; // 0x1708        
        entity2::GameTime_t m_flFadeTime; // 0x170c        
        bool m_bInvisLastThink; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Camouflage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Camouflage) == 0x1718);
};
