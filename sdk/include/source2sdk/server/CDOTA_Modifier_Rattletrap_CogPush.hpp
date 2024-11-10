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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_CogPush : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_flStartTime; // 0x1708        
        Vector m_vDirection; // 0x170c        
        float m_flEndTime; // 0x1718        
        float m_flCurTime; // 0x171c        
        float push_length; // 0x1720        
        float push_duration; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_CogPush because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_CogPush) == 0x1728);
};
