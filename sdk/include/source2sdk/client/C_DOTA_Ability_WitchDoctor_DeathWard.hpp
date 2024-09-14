#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sBounceInfo.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hWard"
    #pragma pack(push, 1)
    class C_DOTA_Ability_WitchDoctor_DeathWard : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hWard;
        char m_hWard[0x4]; // 0x5d8        
        int32_t m_iDamage; // 0x5dc        
        int32_t m_iBounceRadius; // 0x5e0        
        int32_t m_iProjectileSpeed; // 0x5e4        
        entity2::GameTime_t m_fWardExpireTime; // 0x5e8        
        client::ParticleIndex_t m_nFXIndex; // 0x5ec        
        // m_BounceInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sBounceInfo> m_BounceInfo;
        char m_BounceInfo[0x18]; // 0x5f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_WitchDoctor_DeathWard because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_WitchDoctor_DeathWard) == 0x608);
};
