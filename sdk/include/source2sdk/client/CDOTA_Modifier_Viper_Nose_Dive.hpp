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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Viper_Nose_Dive : public client::CDOTA_Buff
    {
    public:
        Vector m_vTargetPos; // 0x16e8        
        Vector m_vStart; // 0x16f4        
        float m_flZDelta; // 0x1700        
        float radius; // 0x1704        
        int32_t corrosive_radius; // 0x1708        
        float effect_duration; // 0x170c        
        int32_t dive_speed; // 0x1710        
        float start_height; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Viper_Nose_Dive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Viper_Nose_Dive) == 0x1718);
};
