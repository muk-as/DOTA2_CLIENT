#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1940
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkExcludeByName "m_angRotation"
    // static metadata: MNetworkExcludeByName "m_angRotation[0]"
    // static metadata: MNetworkExcludeByName "m_angRotation[1]"
    // static metadata: MNetworkVarNames "int m_iDamageLevel"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_nFXIndex"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_nFXIndexDestruction"
    // static metadata: MNetworkVarNames "QAngle m_angInitialAngles"
    // static metadata: MNetworkVarNames "HSequence m_hHeroStatueSequence"
    // static metadata: MNetworkVarNames "HSequence m_hConstantLayerSequence"
    // static metadata: MNetworkVarNames "float m_fHeroStatueCycle"
    // static metadata: MNetworkVarNames "int m_iHeroStatueStatusEffectIndex"
    // static metadata: MNetworkVarNames "bool m_bHeroStatue"
    // static metadata: MNetworkVarNames "bool m_bBattleCup"
    // static metadata: MNetworkVarNames "char m_HeroStatueInscription"
    // static metadata: MNetworkVarNames "PlayerID_t m_iHeroStatueOwnerPlayerID"
    // static metadata: MNetworkVarNames "Color m_ParticleTintColor"
    // static metadata: MNetworkVarNames "FowCustomTeams_t m_nFoWTeam"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Building : public server::CDOTA_BaseNPC
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iDamageLevel; // 0x1830        
        [[maybe_unused]] std::uint8_t pad_0x1834[0x4]; // 0x1834
        // metadata: MNetworkEnable
        // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
        char m_nFXIndex[0x8]; // 0x1838        
        // metadata: MNetworkEnable
        // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
        char m_nFXIndexDestruction[0x8]; // 0x1840        
        // metadata: MNetworkEnable
        QAngle m_angInitialAngles; // 0x1848        
        // metadata: MNetworkEnable
        animationsystem::HSequence m_hHeroStatueSequence; // 0x1854        
        // metadata: MNetworkEnable
        animationsystem::HSequence m_hConstantLayerSequence; // 0x1858        
        // metadata: MNetworkEnable
        float m_fHeroStatueCycle; // 0x185c        
        // metadata: MNetworkEnable
        int32_t m_iHeroStatueStatusEffectIndex; // 0x1860        
        // metadata: MNetworkEnable
        bool m_bHeroStatue; // 0x1864        
        // metadata: MNetworkEnable
        bool m_bBattleCup; // 0x1865        
        // metadata: MNetworkEnable
        char m_HeroStatueInscription[32]; // 0x1866        
        [[maybe_unused]] std::uint8_t pad_0x1886[0x2]; // 0x1886
        // metadata: MNetworkEnable
        client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x1888        
        // metadata: MNetworkEnable
        Color m_ParticleTintColor; // 0x188c        
        CUtlSymbolLarge m_sDestroySnd; // 0x1890        
        CUtlSymbolLarge m_sDmgLvl1Snd; // 0x1898        
        CUtlSymbolLarge m_sDmgLvl2Snd; // 0x18a0        
        CUtlSymbolLarge m_iszLinkedUnit; // 0x18a8        
        CUtlSymbolLarge m_iszAmbientEffectName; // 0x18b0        
        CUtlSymbolLarge m_iszDestructionEffectName; // 0x18b8        
        CUtlSymbolLarge m_iszDamageModelLevel1; // 0x18c0        
        CUtlSymbolLarge m_iszDamageModelLevel2; // 0x18c8        
        CUtlSymbolLarge m_iszDamageEffectLevel1; // 0x18d0        
        CUtlSymbolLarge m_iszDamageEffectLevel2; // 0x18d8        
        float m_flDamageThresholdLevel1; // 0x18e0        
        float m_flDamageThresholdLevel2; // 0x18e4        
        bool m_bVulnerableOnCreepSpawn; // 0x18e8        
        bool m_bHasOverriddenDestructionEffect; // 0x18e9        
        [[maybe_unused]] std::uint8_t pad_0x18ea[0x2]; // 0x18ea
        int32_t m_iUpgradeIdentifier; // 0x18ec        
        int32_t m_iInvulnCount; // 0x18f0        
        int32_t m_iPlayerOwner; // 0x18f4        
        client::DOTA_LANE m_Lane; // 0x18f8        
        float m_fAmountAlongLane[2]; // 0x18fc        
        Vector m_vOverrideInitialAngles; // 0x1904        
        Vector m_vOverrideInitialAnglesBG; // 0x1910        
        int32_t m_nOverrideInitialAngles; // 0x191c        
        server::CountdownTimer m_IdleRareAnimationTime; // 0x1920        
        // metadata: MNetworkEnable
        client::FowCustomTeams_t m_nFoWTeam; // 0x1938        
        [[maybe_unused]] std::uint8_t pad_0x193c[0x4];
        
        // Static fields:
        static entity2::GameTime_t &Get_m_fLastAttackWarnTimers() {return *reinterpret_cast<entity2::GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_BaseNPC_Building")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // int32_t InputSetInvulnCount; // 0x0
        // void InputReduceInvulnCount; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Building because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Building) == 0x1940);
};
