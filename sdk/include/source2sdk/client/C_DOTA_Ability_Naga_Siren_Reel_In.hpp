#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flLongestEnsnareDuration"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Naga_Siren_Reel_In : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flLongestEnsnareDuration; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4]; // 0x5dc
        // affectedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> affectedEntities;
        char affectedEntities[0x18]; // 0x5e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Naga_Siren_Reel_In because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Naga_Siren_Reel_In) == 0x5f8);
};
