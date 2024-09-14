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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker : public client::CDOTA_Buff
    {
    public:
        float interval_scepter; // 0x16e8        
        bool bInBufferTime; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3]; // 0x16ed
        int32_t damage; // 0x16f0        
        entity2::GameTime_t m_flLastApplyTime; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker) == 0x16f8);
};
