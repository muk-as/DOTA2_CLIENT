#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sBounceInfo.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hWard"
        #pragma pack(push, 1)
        class CDOTA_Ability_WitchDoctor_DeathWard : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWard;
            char m_hWard[0x_]; // 0x_            
            std::int32_t bonus_accuracy; // 0x_            
            std::int32_t m_iDamage; // 0x_            
            std::int32_t m_iBounceRadius; // 0x_            
            std::int32_t m_iProjectileSpeed; // 0x_            
            source2sdk::entity2::GameTime_t m_fWardExpireTime; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_BounceInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sBounceInfo> m_BounceInfo;
            char m_BounceInfo[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_WitchDoctor_DeathWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_WitchDoctor_DeathWard) == 0x_);
    };
};
