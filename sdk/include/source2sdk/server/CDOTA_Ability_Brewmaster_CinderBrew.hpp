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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Brewmaster_CinderBrew : public server::CDOTABaseAbility
    {
    public:
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x5c8        
        float duration; // 0x5e0        
        int32_t barrel_impact_damage; // 0x5e4        
        int32_t barrel_width; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_CinderBrew because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Brewmaster_CinderBrew) == 0x5f8);
};
