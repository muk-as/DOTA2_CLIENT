#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    class CDOTA_Modifier_Avianas_Feather : public server::CDOTA_Buff_Item
    {
    public:
        int32_t evasion; // 0x1708        
        int32_t move_speed; // 0x170c        
        int32_t flight_threshold; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Avianas_Feather because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Avianas_Feather) == 0x1718);
};
