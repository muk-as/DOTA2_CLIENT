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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Elder_Titan_AncestralSpirit : public server::CDOTABaseAbility
    {
    public:
        int32_t speed; // 0x5a0        
        int32_t radius; // 0x5a4        
        float buff_duration; // 0x5a8        
        float spirit_duration; // 0x5ac        
        int32_t m_nCreepsHit; // 0x5b0        
        int32_t m_nHeroesHit; // 0x5b4        
        bool m_bIsReturning; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5b9[0x3]; // 0x5b9
        // m_hAncestralSpirit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAncestralSpirit;
        char m_hAncestralSpirit[0x4]; // 0x5bc        
        client::ParticleIndex_t m_nReturnFXIndex; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4]; // 0x5c4
        CUtlString m_strMoveSpiritSwapAbility; // 0x5c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_AncestralSpirit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Elder_Titan_AncestralSpirit) == 0x5d0);
};
