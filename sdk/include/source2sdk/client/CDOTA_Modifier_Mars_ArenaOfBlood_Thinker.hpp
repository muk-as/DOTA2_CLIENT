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
    class CDOTA_Modifier_Mars_ArenaOfBlood_Thinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        float formation_time; // 0x170c        
        float m_flInitialZ; // 0x1710        
        float m_flFinalZ; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_ArenaOfBlood_Thinker) == 0x1728);
};
