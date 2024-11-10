#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/sSpiritDef.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Wisp_Spirits : public client::C_DOTABaseAbility
    {
    public:
        // m_SpiritDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sSpiritDef> m_SpiritDefs;
        char m_SpiritDefs[0x18]; // 0x600        
        int32_t m_nWispDirection; // 0x618        
        int32_t spirit_amount; // 0x61c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Wisp_Spirits because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Wisp_Spirits) == 0x620);
};
