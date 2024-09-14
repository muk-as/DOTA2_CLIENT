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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_CogPush : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_flStartTime; // 0x16e8        
        Vector m_vDirection; // 0x16ec        
        float m_flEndTime; // 0x16f8        
        float m_flCurTime; // 0x16fc        
        float push_length; // 0x1700        
        float push_duration; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_CogPush because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_CogPush) == 0x1708);
};
