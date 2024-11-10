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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Viper_Nose_Dive : public client::CDOTA_Buff
    {
    public:
        Vector m_vTargetPos; // 0x1708        
        Vector m_vStart; // 0x1714        
        float m_flZDelta; // 0x1720        
        float radius; // 0x1724        
        int32_t corrosive_radius; // 0x1728        
        float effect_duration; // 0x172c        
        int32_t dive_speed; // 0x1730        
        float start_height; // 0x1734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Viper_Nose_Dive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Viper_Nose_Dive) == 0x1738);
};
