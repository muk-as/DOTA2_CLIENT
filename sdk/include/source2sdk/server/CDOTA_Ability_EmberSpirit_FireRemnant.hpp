#pragma once
#include "source2sdk/client/RemnantData_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_EmberSpirit_FireRemnant : public server::CDOTABaseAbility
    {
    public:
        // m_vRemnantData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::RemnantData_t> m_vRemnantData;
        char m_vRemnantData[0x18]; // 0x5c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EmberSpirit_FireRemnant because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EmberSpirit_FireRemnant) == 0x5e0);
};
