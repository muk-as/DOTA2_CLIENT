#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Chen_Summon_Convert : public server::CDOTABaseAbility
    {
    public:
        // m_hInnateUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInnateUnit;
        char m_hInnateUnit[0x4]; // 0x5c8        
        bool m_bDeterminedFacet; // 0x5cc        
        bool summon_centaurs; // 0x5cd        
        bool summon_wolves; // 0x5ce        
        bool summon_hellbears; // 0x5cf        
        bool summon_trolls; // 0x5d0        
        bool summon_satyrs; // 0x5d1        
        [[maybe_unused]] std::uint8_t pad_0x5d2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Chen_Summon_Convert because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Chen_Summon_Convert) == 0x5d8);
};
