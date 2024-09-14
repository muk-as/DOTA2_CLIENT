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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Shredder_Chakram : public server::CDOTABaseAbility
    {
    public:
        float radius; // 0x5a0        
        float speed; // 0x5a4        
        float pass_slow_duration; // 0x5a8        
        int32_t pass_damage; // 0x5ac        
        Vector m_vEndLocation; // 0x5b0        
        float m_fZCoord; // 0x5bc        
        bool m_bIsReturning; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c1[0x3]; // 0x5c1
        client::ParticleIndex_t m_nFXIndex; // 0x5c4        
        client::ParticleIndex_t m_nFXIndexB; // 0x5c8        
        client::ParticleIndex_t m_nFXIndexC; // 0x5cc        
        int32_t m_nProjectileIndex; // 0x5d0        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5d4        
        // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hReturnHits;
        char m_hReturnHits[0x18]; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5f0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Shredder_Chakram because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Shredder_Chakram) == 0x5f8);
};
