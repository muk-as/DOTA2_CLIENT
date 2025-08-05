#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb60
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
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0x9f0            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xa30            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xa58            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0xa80            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xaa8            
            float m_impactEnergyScale; // 0xad0            
            std::int32_t m_iMinHealthDmg; // 0xad4            
            float m_flPressureDelay; // 0xad8            
            float m_flDefBurstScale; // 0xadc            
            Vector m_vDefBurstOffset; // 0xae0            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xaec            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xaf0            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xaf4            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xaf8            
            uint8_t _pad0afc[0x4]; // 0xafc
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xb00            
            CUtlString m_strBreakableContentsParticleOverride; // 0xb08            
            bool m_bHasBreakPiecesOrCommands; // 0xb10            
            uint8_t _pad0b11[0x3]; // 0xb11
            float m_explodeDamage; // 0xb14            
            float m_explodeRadius; // 0xb18            
            uint8_t _pad0b1c[0x4]; // 0xb1c
            float m_explosionDelay; // 0xb20            
            uint8_t _pad0b24[0x4]; // 0xb24
            CUtlSymbolLarge m_explosionBuildupSound; // 0xb28            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xb30            
            CUtlSymbolLarge m_explosionCustomSound; // 0xb38            
            CUtlSymbolLarge m_explosionModifier; // 0xb40            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xb48            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb4c            
            float m_flDefaultFadeScale; // 0xb50            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xb54            
            uint8_t _pad0b58[0x8];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // void C_BreakablePropBreakThink; // 0x0
            // void C_BreakablePropRampToDefaultFadeScale; // 0x0
            // uint32_t m_nExplosionType; // 0xb1c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0xb60);
    };
};
