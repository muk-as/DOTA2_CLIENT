#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_CDOTA_Modifier_CrystalMaiden_IceRink_Movement_Ricochet : public client::CDOTA_Buff
    {
    public:
        float m_flStartZ; // 0x1708        
        float m_flCurTime; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_CDOTA_Modifier_CrystalMaiden_IceRink_Movement_Ricochet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_CDOTA_Modifier_CrystalMaiden_IceRink_Movement_Ricochet) == 0x1710);
};
