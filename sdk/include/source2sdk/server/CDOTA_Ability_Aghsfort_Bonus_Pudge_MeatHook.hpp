#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // static metadata: MNetworkVarNames "int m_nConsecutiveHits"
        #pragma pack(push, 1)
        class CDOTA_Ability_Aghsfort_Bonus_Pudge_MeatHook : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            VectorWS m_vProjectileLocation; // 0x_            
            float hook_speed; // 0x_            
            std::int32_t hook_width; // 0x_            
            std::int32_t hook_distance; // 0x_            
            bool m_bRetracting; // 0x_            
            bool m_bDiedInHook; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVictim;
            char m_hVictim[0x_]; // 0x_            
            VectorWS m_vTargetPosition; // 0x_            
            VectorWS m_vCasterPosition; // 0x_            
            bool m_bChainDetached; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_iChainParticle; // 0x_            
            std::int32_t m_iHookParticle; // 0x_            
            std::int32_t m_nManaCost; // 0x_            
            // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSourceCaster;
            char m_hSourceCaster[0x_]; // 0x_            
            std::int32_t m_nNextConsecutiveHitCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nConsecutiveHits; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Aghsfort_Bonus_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Aghsfort_Bonus_Pudge_MeatHook) == 0x_);
    };
};
