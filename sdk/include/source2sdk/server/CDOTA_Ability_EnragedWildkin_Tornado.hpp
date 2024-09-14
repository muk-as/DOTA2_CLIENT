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
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_EnragedWildkin_Tornado : public server::CDOTABaseAbility
    {
    public:
        // m_hTornado has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTornado;
        char m_hTornado[0x4]; // 0x5a0        
        // m_hNeutralTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hNeutralTarget;
        char m_hNeutralTarget[0x4]; // 0x5a4        
        client::ParticleIndex_t m_nFXIndex; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EnragedWildkin_Tornado because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EnragedWildkin_Tornado) == 0x5b0);
};
