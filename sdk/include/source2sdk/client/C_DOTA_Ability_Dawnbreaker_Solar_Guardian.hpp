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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Dawnbreaker_Solar_Guardian : public client::C_DOTABaseAbility
    {
    public:
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5d8        
        bool m_bJumping; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5dd[0x3]; // 0x5dd
        // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTeleportTarget;
        char m_hTeleportTarget[0x4]; // 0x5e0        
        client::ParticleIndex_t m_nTPFXIndex; // 0x5e4        
        client::ParticleIndex_t m_nAoEFXIndex; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Dawnbreaker_Solar_Guardian because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Dawnbreaker_Solar_Guardian) == 0x5f0);
};
