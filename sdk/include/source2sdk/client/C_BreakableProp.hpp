#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BaseExplosionTypes_t.hpp"
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class C_BreakableProp : public source2sdk::client::CBaseProp
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x_            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0x_            
            float m_impactEnergyScale; // 0x_            
            std::int32_t m_iMinHealthDmg; // 0x_            
            float m_flPressureDelay; // 0x_            
            float m_flDefBurstScale; // 0x_            
            Vector m_vDefBurstOffset; // 0x_            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x_]; // 0x_            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x_            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x_            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strBreakableContentsPropGroupOverride; // 0x_            
            CUtlString m_strBreakableContentsParticleOverride; // 0x_            
            bool m_bHasBreakPiecesOrCommands; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_explodeDamage; // 0x_            
            float m_explodeRadius; // 0x_            
            source2sdk::client::BaseExplosionTypes_t m_nExplosionType; // 0x_            
            float m_explosionDelay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_explosionBuildupSound; // 0x_            
            CUtlSymbolLarge m_explosionCustomEffect; // 0x_            
            CUtlSymbolLarge m_explosionCustomSound; // 0x_            
            CUtlSymbolLarge m_explosionModifier; // 0x_            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x_            
            float m_flDefaultFadeScale; // 0x_            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputBreak; // 0x_
            // int32_t InputSetHealth; // 0x_
            // int32_t InputAddHealth; // 0x_
            // int32_t InputRemoveHealth; // 0x_
            // void C_BreakablePropBreakThink; // 0x_
            // void C_BreakablePropRampToDefaultFadeScale; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0x_);
    };
};
