#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Ability_MonkeyKing_Spring : public server::CDOTABaseAbility
    {
    public:
        Vector m_vPos; // 0x5a0        
        entity2::GameTime_t m_fStartChannelTime; // 0x5ac        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5b0        
        client::ParticleIndex_t m_nFxIndex; // 0x5b4        
        int32_t m_nRefCount; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_MonkeyKing_Spring because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_MonkeyKing_Spring) == 0x5c0);
};
