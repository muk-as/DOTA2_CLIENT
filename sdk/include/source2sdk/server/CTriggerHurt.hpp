#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
        #pragma pack(push, 1)
        class CTriggerHurt : public source2sdk::server::CBaseTrigger
        {
        public:
            float m_flOriginalDamage; // 0x_            
            float m_flDamage; // 0x_            
            float m_flDamageCap; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastDmgTime; // 0x_            
            float m_flForgivenessDelay; // 0x_            
            source2sdk::client::DamageTypes_t m_bitsDamageInflict; // 0x_            
            std::int32_t m_damageModel; // 0x_            
            bool m_bNoDmgForce; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vDamageForce; // 0x_            
            bool m_thinkAlways; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_hurtThinkPeriod; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnHurt; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnHurtPlayer; // 0x_            
            // m_hurtEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hurtEntities;
            char m_hurtEntities[0x_]; // 0x_            
            
            // Datamap fields:
            // void CTriggerHurtRadiationThink; // 0x_
            // void CTriggerHurtHurtThink; // 0x_
            // void CTriggerHurtNavThink; // 0x_
            // float InputSetDamage; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerHurt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerHurt) == 0x_);
    };
};
