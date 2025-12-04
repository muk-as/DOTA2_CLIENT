#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByName "m_angRotation"
        // static metadata: MNetworkExcludeByName "m_angRotation[0]"
        // static metadata: MNetworkExcludeByName "m_angRotation[1]"
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "int m_iDamageLevel"
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Building : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iDamageLevel; // 0x_            
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nTPFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x_            
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
            // metadata: MNetworkEnable
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Building) == 0x_);
    };
};
