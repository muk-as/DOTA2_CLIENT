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
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Rattletrap_Hookshot : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x5a0        
        Vector m_vProjectileVelocity; // 0x5a4        
        bool m_bRetract; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b1[0xb]; // 0x5b1
        // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSourceCaster;
        char m_hSourceCaster[0x4]; // 0x5bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Rattletrap_Hookshot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Rattletrap_Hookshot) == 0x5c0);
};
