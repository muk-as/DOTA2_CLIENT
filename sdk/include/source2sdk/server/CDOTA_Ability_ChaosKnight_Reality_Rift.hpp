#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_ChaosKnight_Reality_Rift : public server::CDOTABaseAbility
    {
    public:
        float m_flPercentage; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4]; // 0x5a4
        // m_FXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_FXIndex;
        char m_FXIndex[0x18]; // 0x5a8        
        // m_hRiftIllusion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRiftIllusion;
        char m_hRiftIllusion[0x4]; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_ChaosKnight_Reality_Rift because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_ChaosKnight_Reality_Rift) == 0x5c8);
};
