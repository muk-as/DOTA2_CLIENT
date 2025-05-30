#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Silencer_LastWord_Silence_Checker : public client::CDOTA_Buff
    {
    public:
        int32_t damage_per_silence; // 0x1708        
        int32_t slow_per_silence; // 0x170c        
        float m_flTimeToNextTick; // 0x1710        
        entity2::GameTime_t m_rtLastTick; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_LastWord_Silence_Checker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Silencer_LastWord_Silence_Checker) == 0x1718);
};
