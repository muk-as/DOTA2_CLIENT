#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_Batrider_FlamingLasso : public client::CDOTA_Buff
    {
    public:
        float tick_rate; // 0x1708        
        int32_t drag_distance; // 0x170c        
        int32_t break_distance; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        Vector vPreviousLocation; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_FlamingLasso because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Batrider_FlamingLasso) == 0x1728);
};
