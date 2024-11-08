#pragma once
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class C_BreakableProp : public client::CBaseProp
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        client::CPropDataComponent m_CPropDataComponent; // 0x888        
        entity2::CEntityIOOutput m_OnBreak; // 0x8c8        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0x8f0        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0x918        
        float m_impactEnergyScale; // 0x940        
        int32_t m_iMinHealthDmg; // 0x944        
        float m_flPressureDelay; // 0x948        
        float m_flDefBurstScale; // 0x94c        
        Vector m_vDefBurstOffset; // 0x950        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0x95c        
        client::PerformanceMode_t m_PerformanceMode; // 0x960        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x964        
        client::BreakableContentsType_t m_BreakableContentsType; // 0x968        
        [[maybe_unused]] std::uint8_t pad_0x96c[0x4]; // 0x96c
        CUtlString m_strBreakableContentsPropGroupOverride; // 0x970        
        CUtlString m_strBreakableContentsParticleOverride; // 0x978        
        bool m_bHasBreakPiecesOrCommands; // 0x980        
        [[maybe_unused]] std::uint8_t pad_0x981[0x3]; // 0x981
        float m_explodeDamage; // 0x984        
        float m_explodeRadius; // 0x988        
        [[maybe_unused]] std::uint8_t pad_0x98c[0x4]; // 0x98c
        float m_explosionDelay; // 0x990        
        [[maybe_unused]] std::uint8_t pad_0x994[0x4]; // 0x994
        CUtlSymbolLarge m_explosionBuildupSound; // 0x998        
        CUtlSymbolLarge m_explosionCustomEffect; // 0x9a0        
        CUtlSymbolLarge m_explosionCustomSound; // 0x9a8        
        CUtlSymbolLarge m_explosionModifier; // 0x9b0        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0x9b8        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x9bc        
        float m_flDefaultFadeScale; // 0x9c0        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0x9c4        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0x9c8        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0x9cc        
        [[maybe_unused]] std::uint8_t pad_0x9cd[0x3];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0x98c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0x9d0);
};
