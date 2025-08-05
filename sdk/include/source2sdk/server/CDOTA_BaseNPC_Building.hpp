#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x19d0
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
        class CDOTA_BaseNPC_Building : public source2sdk::server::CDOTA_BaseNPC
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iDamageLevel; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            // metadata: MNetworkEnable
            // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
            char m_nFXIndex[0x8]; // 0x18c0            
            // metadata: MNetworkEnable
            // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
            char m_nFXIndexDestruction[0x8]; // 0x18c8            
            // metadata: MNetworkEnable
            QAngle m_angInitialAngles; // 0x18d0            
            // metadata: MNetworkEnable
            source2sdk::animationsystem::HSequence m_hHeroStatueSequence; // 0x18dc            
            // metadata: MNetworkEnable
            source2sdk::animationsystem::HSequence m_hConstantLayerSequence; // 0x18e0            
            // metadata: MNetworkEnable
            float m_fHeroStatueCycle; // 0x18e4            
            // metadata: MNetworkEnable
            std::int32_t m_iHeroStatueStatusEffectIndex; // 0x18e8            
            // metadata: MNetworkEnable
            bool m_bHeroStatue; // 0x18ec            
            // metadata: MNetworkEnable
            bool m_bBattleCup; // 0x18ed            
            // metadata: MNetworkEnable
            char m_HeroStatueInscription[32]; // 0x18ee            
            uint8_t _pad190e[0x2]; // 0x190e
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x1910            
            // metadata: MNetworkEnable
            Color m_ParticleTintColor; // 0x1914            
            CUtlSymbolLarge m_sDestroySnd; // 0x1918            
            CUtlSymbolLarge m_sDmgLvl1Snd; // 0x1920            
            CUtlSymbolLarge m_sDmgLvl2Snd; // 0x1928            
            CUtlSymbolLarge m_iszLinkedUnit; // 0x1930            
            CUtlSymbolLarge m_iszAmbientEffectName; // 0x1938            
            CUtlSymbolLarge m_iszDestructionEffectName; // 0x1940            
            CUtlSymbolLarge m_iszDamageModelLevel1; // 0x1948            
            CUtlSymbolLarge m_iszDamageModelLevel2; // 0x1950            
            CUtlSymbolLarge m_iszDamageEffectLevel1; // 0x1958            
            CUtlSymbolLarge m_iszDamageEffectLevel2; // 0x1960            
            float m_flDamageThresholdLevel1; // 0x1968            
            float m_flDamageThresholdLevel2; // 0x196c            
            bool m_bVulnerableOnCreepSpawn; // 0x1970            
            bool m_bHasOverriddenDestructionEffect; // 0x1971            
            uint8_t _pad1972[0x2]; // 0x1972
            std::int32_t m_iUpgradeIdentifier; // 0x1974            
            std::int32_t m_iInvulnCount; // 0x1978            
            std::int32_t m_iPlayerOwner; // 0x197c            
            bool m_bIsDireSide; // 0x1980            
            uint8_t _pad1981[0x3]; // 0x1981
            source2sdk::client::DOTA_LANE m_Lane; // 0x1984            
            float m_fAmountAlongLane[2]; // 0x1988            
            Vector m_vOverrideInitialAngles; // 0x1990            
            Vector m_vOverrideInitialAnglesBG; // 0x199c            
            std::int32_t m_nOverrideInitialAngles; // 0x19a8            
            uint8_t _pad19ac[0x4]; // 0x19ac
            source2sdk::server::CountdownTimer m_IdleRareAnimationTime; // 0x19b0            
            // metadata: MNetworkEnable
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x19c8            
            uint8_t _pad19cc[0x4];
            
            // Datamap fields:
            // int32_t InputSetInvulnCount; // 0x0
            // void InputReduceInvulnCount; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Building) == 0x19d0);
    };
};
