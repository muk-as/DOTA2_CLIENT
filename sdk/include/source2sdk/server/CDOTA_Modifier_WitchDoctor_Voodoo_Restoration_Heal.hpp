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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal : public client::CDOTA_Buff
    {
    public:
        int32_t heal; // 0x16e8        
        float mana_per_second; // 0x16ec        
        float heal_interval; // 0x16f0        
        int32_t does_heal_all_allies; // 0x16f4        
        int32_t does_damage; // 0x16f8        
        int32_t self_only_heal_percentage; // 0x16fc        
        float m_flTotalHealing; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal) == 0x1708);
};
