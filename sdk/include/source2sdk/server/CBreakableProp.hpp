#pragma once
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x970
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x800[0x8]; // 0x800
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0x808        
        entity2::CEntityIOOutput m_OnBreak; // 0x848        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0x870        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0x898        
        float m_impactEnergyScale; // 0x8c0        
        int32_t m_iMinHealthDmg; // 0x8c4        
        QAngle m_preferredCarryAngles; // 0x8c8        
        float m_flPressureDelay; // 0x8d4        
        float m_flDefBurstScale; // 0x8d8        
        Vector m_vDefBurstOffset; // 0x8dc        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0x8e8        
        client::PerformanceMode_t m_PerformanceMode; // 0x8ec        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x8f0        
        client::BreakableContentsType_t m_BreakableContentsType; // 0x8f4        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0x8f8        
        CUtlString m_strBreakableContentsParticleOverride; // 0x900        
        bool m_bHasBreakPiecesOrCommands; // 0x908        
        [[maybe_unused]] std::uint8_t pad_0x909[0x3]; // 0x909
        float m_explodeDamage; // 0x90c        
        float m_explodeRadius; // 0x910        
        [[maybe_unused]] std::uint8_t pad_0x914[0x4]; // 0x914
        float m_explosionDelay; // 0x918        
        [[maybe_unused]] std::uint8_t pad_0x91c[0x4]; // 0x91c
        CUtlSymbolLarge m_explosionBuildupSound; // 0x920        
        CUtlSymbolLarge m_explosionCustomEffect; // 0x928        
        CUtlSymbolLarge m_explosionCustomSound; // 0x930        
        CUtlSymbolLarge m_explosionModifier; // 0x938        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0x940        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x944        
        bool m_bOriginalBlockLOS; // 0x948        
        [[maybe_unused]] std::uint8_t pad_0x949[0x3]; // 0x949
        float m_flDefaultFadeScale; // 0x94c        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0x950        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0x954        
        bool m_bUsePuntSound; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x959[0x7]; // 0x959
        CUtlSymbolLarge m_iszPuntSound; // 0x960        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0x968        
        [[maybe_unused]] std::uint8_t pad_0x969[0x7];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // bool InputSetNavIgnore; // 0x0
        // void InputEnablePuntSound; // 0x0
        // void InputDisablePuntSound; // 0x0
        // void CBreakablePropBreakThink; // 0x0
        // void CBreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0x914
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0x970);
};
