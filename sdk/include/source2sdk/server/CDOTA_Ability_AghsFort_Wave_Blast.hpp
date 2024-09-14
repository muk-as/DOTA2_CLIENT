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
    class CDOTA_Ability_AghsFort_Wave_Blast : public server::CDOTABaseAbility
    {
    public:
        int32_t damage; // 0x5a0        
        float knockback_duration; // 0x5a4        
        float disarm_duration; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4]; // 0x5ac
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5b0        
        client::ParticleIndex_t m_nPreviewFX; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Wave_Blast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_Wave_Blast) == 0x5d0);
};
