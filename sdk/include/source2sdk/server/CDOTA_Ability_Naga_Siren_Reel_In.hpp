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
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flLongestEnsnareDuration"
    #pragma pack(push, 1)
    class CDOTA_Ability_Naga_Siren_Reel_In : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flLongestEnsnareDuration; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        // affectedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> affectedEntities;
        char affectedEntities[0x18]; // 0x5a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Naga_Siren_Reel_In because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Naga_Siren_Reel_In) == 0x5c0);
};
