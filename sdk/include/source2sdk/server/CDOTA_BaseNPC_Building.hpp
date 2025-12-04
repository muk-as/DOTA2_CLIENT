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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int32_t m_iDamageLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
            char m_nFXIndex[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
            char m_nFXIndexDestruction[0x_]; // 0x_            
            // metadata: MNetworkEnable
            QAngle m_angInitialAngles; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::animationsystem::HSequence m_hHeroStatueSequence; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::animationsystem::HSequence m_hConstantLayerSequence; // 0x_            
            // metadata: MNetworkEnable
            float m_fHeroStatueCycle; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iHeroStatueStatusEffectIndex; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHeroStatue; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBattleCup; // 0x_            
            // metadata: MNetworkEnable
            char m_HeroStatueInscription[32]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x_            
            // metadata: MNetworkEnable
            Color m_ParticleTintColor; // 0x_            
            CUtlSymbolLarge m_sDestroySnd; // 0x_            
            CUtlSymbolLarge m_sDmgLvl1Snd; // 0x_            
            CUtlSymbolLarge m_sDmgLvl2Snd; // 0x_            
            CUtlSymbolLarge m_iszLinkedUnit; // 0x_            
            CUtlSymbolLarge m_iszAmbientEffectName; // 0x_            
            CUtlSymbolLarge m_iszDestructionEffectName; // 0x_            
            CUtlSymbolLarge m_iszDamageModelLevel1; // 0x_            
            CUtlSymbolLarge m_iszDamageModelLevel2; // 0x_            
            CUtlSymbolLarge m_iszDamageEffectLevel1; // 0x_            
            CUtlSymbolLarge m_iszDamageEffectLevel2; // 0x_            
            float m_flDamageThresholdLevel1; // 0x_            
            float m_flDamageThresholdLevel2; // 0x_            
            bool m_bVulnerableOnCreepSpawn; // 0x_            
            bool m_bHasOverriddenDestructionEffect; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iUpgradeIdentifier; // 0x_            
            std::int32_t m_iInvulnCount; // 0x_            
            std::int32_t m_iPlayerOwner; // 0x_            
            bool m_bIsDireSide; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::DOTA_LANE m_Lane; // 0x_            
            float m_fAmountAlongLane[2]; // 0x_            
            Vector m_vOverrideInitialAngles; // 0x_            
            Vector m_vOverrideInitialAnglesBG; // 0x_            
            std::int32_t m_nOverrideInitialAngles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_IdleRareAnimationTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // int32_t InputSetInvulnCount; // 0x_
            // void InputReduceInvulnCount; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Building) == 0x_);
    };
};
