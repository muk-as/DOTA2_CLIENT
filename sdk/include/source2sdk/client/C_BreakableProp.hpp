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
        // Size: 0x980
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
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0x838            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x878            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0x8a0            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0x8c8            
            float m_impactEnergyScale; // 0x8f0            
            std::int32_t m_iMinHealthDmg; // 0x8f4            
            float m_flPressureDelay; // 0x8f8            
            float m_flDefBurstScale; // 0x8fc            
            Vector m_vDefBurstOffset; // 0x900            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0x90c            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x910            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x914            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0x918            
            uint8_t _pad091c[0x4]; // 0x91c
            CUtlString m_strBreakableContentsPropGroupOverride; // 0x920            
            CUtlString m_strBreakableContentsParticleOverride; // 0x928            
            bool m_bHasBreakPiecesOrCommands; // 0x930            
            uint8_t _pad0931[0x3]; // 0x931
            float m_explodeDamage; // 0x934            
            float m_explodeRadius; // 0x938            
            uint8_t _pad093c[0x4]; // 0x93c
            float m_explosionDelay; // 0x940            
            uint8_t _pad0944[0x4]; // 0x944
            CUtlSymbolLarge m_explosionBuildupSound; // 0x948            
            CUtlSymbolLarge m_explosionCustomEffect; // 0x950            
            CUtlSymbolLarge m_explosionCustomSound; // 0x958            
            CUtlSymbolLarge m_explosionModifier; // 0x960            
            std::int32_t m_explosionDangerSound; // 0x968            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0x96c            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x970            
            float m_flDefaultFadeScale; // 0x974            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0x978            
            uint8_t _pad097c[0x4];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // void C_BreakablePropBreakThink; // 0x0
            // void C_BreakablePropRampToDefaultFadeScale; // 0x0
            // uint32_t m_nExplosionType; // 0x93c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0x980);
    };
};
