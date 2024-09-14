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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x17a0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze : public client::CDOTA_Buff
    {
    public:
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CHandle<server::CDOTABaseAbility>,40> m_vecAbilities;
        char m_vecAbilities[0xb8]; // 0x16e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze) == 0x17a0);
};
