#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_EmberSpirit_SleightOfFist : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vCastLoc; // 0x5d8        
        int32_t m_nHeroesKilled; // 0x5e4        
        // m_hAttackEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAttackEntities;
        char m_hAttackEntities[0x18]; // 0x5e8        
        client::ParticleIndex_t m_nFXMarkerIndex; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_EmberSpirit_SleightOfFist because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_EmberSpirit_SleightOfFist) == 0x608);
};
