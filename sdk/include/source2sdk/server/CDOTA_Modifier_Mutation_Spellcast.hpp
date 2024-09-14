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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mutation_Spellcast : public client::CDOTA_Buff
    {
    public:
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTABaseAbility*> m_vecAbilities;
        char m_vecAbilities[0x18]; // 0x16e8        
        float m_fNextCastTime; // 0x1700        
        float m_fCastInterval; // 0x1704        
        float m_fWarningTime; // 0x1708        
        int32_t m_iNextAbility; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mutation_Spellcast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mutation_Spellcast) == 0x1710);
};
