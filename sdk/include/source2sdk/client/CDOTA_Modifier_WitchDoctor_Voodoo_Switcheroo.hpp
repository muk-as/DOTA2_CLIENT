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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_WitchDoctor_Voodoo_Switcheroo : public client::CDOTA_Buff
    {
    public:
        Vector m_vSavedPos; // 0x16e8        
        // m_hSavedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSavedAbility;
        char m_hSavedAbility[0x4]; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Voodoo_Switcheroo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_WitchDoctor_Voodoo_Switcheroo) == 0x16f8);
};
