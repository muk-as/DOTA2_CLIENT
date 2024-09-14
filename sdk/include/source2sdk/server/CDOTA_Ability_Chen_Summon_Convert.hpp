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
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Chen_Summon_Convert : public server::CDOTABaseAbility
    {
    public:
        // m_hInnateUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInnateUnit;
        char m_hInnateUnit[0x4]; // 0x5a0        
        bool m_bDeterminedFacet; // 0x5a4        
        bool summon_centaurs; // 0x5a5        
        bool summon_wolves; // 0x5a6        
        bool summon_hellbears; // 0x5a7        
        bool summon_trolls; // 0x5a8        
        bool summon_satyrs; // 0x5a9        
        [[maybe_unused]] std::uint8_t pad_0x5aa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Chen_Summon_Convert because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Chen_Summon_Convert) == 0x5b0);
};
