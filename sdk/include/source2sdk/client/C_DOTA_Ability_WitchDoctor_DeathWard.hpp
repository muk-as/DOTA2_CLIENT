#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sBounceInfo.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hWard"
        #pragma pack(push, 1)
        class C_DOTA_Ability_WitchDoctor_DeathWard : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWard;
            char m_hWard[0x4]; // 0x5b0            
            std::int32_t bonus_accuracy; // 0x5b4            
            std::int32_t m_iDamage; // 0x5b8            
            std::int32_t m_iBounceRadius; // 0x5bc            
            std::int32_t m_iProjectileSpeed; // 0x5c0            
            source2sdk::entity2::GameTime_t m_fWardExpireTime; // 0x5c4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            // m_BounceInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sBounceInfo> m_BounceInfo;
            char m_BounceInfo[0x18]; // 0x5d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_WitchDoctor_DeathWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_WitchDoctor_DeathWard) == 0x5e8);
    };
};
