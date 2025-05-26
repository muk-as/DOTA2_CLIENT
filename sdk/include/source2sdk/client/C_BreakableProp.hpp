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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb48
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
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xa18            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xa40            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0xa68            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xa90            
            float m_impactEnergyScale; // 0xab8            
            std::int32_t m_iMinHealthDmg; // 0xabc            
            float m_flPressureDelay; // 0xac0            
            float m_flDefBurstScale; // 0xac4            
            Vector m_vDefBurstOffset; // 0xac8            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xad4            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xad8            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xadc            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xae0            
            uint8_t _pad0ae4[0x4]; // 0xae4
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xae8            
            CUtlString m_strBreakableContentsParticleOverride; // 0xaf0            
            bool m_bHasBreakPiecesOrCommands; // 0xaf8            
            uint8_t _pad0af9[0x3]; // 0xaf9
            float m_explodeDamage; // 0xafc            
            float m_explodeRadius; // 0xb00            
            uint8_t _pad0b04[0x4]; // 0xb04
            float m_explosionDelay; // 0xb08            
            uint8_t _pad0b0c[0x4]; // 0xb0c
            CUtlSymbolLarge m_explosionBuildupSound; // 0xb10            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xb18            
            CUtlSymbolLarge m_explosionCustomSound; // 0xb20            
            CUtlSymbolLarge m_explosionModifier; // 0xb28            
            std::int32_t m_explosionDangerSound; // 0xb30            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xb34            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb38            
            float m_flDefaultFadeScale; // 0xb3c            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xb40            
            uint8_t _pad0b44[0x4];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // void C_BreakablePropBreakThink; // 0x0
            // void C_BreakablePropRampToDefaultFadeScale; // 0x0
            // uint32_t m_nExplosionType; // 0xb04
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0xb48);
    };
};
