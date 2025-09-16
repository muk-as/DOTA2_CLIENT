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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ab0
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
            std::int32_t m_iDamageLevel; // 0x1a40            
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x1a44            
            source2sdk::client::ParticleIndex_t m_nTPFXIndex; // 0x1a48            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x1a4c            
            // metadata: MNetworkEnable
            // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
            char m_nFXIndex[0x8]; // 0x1a50            
            // metadata: MNetworkEnable
            // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
            char m_nFXIndexDestruction[0x8]; // 0x1a58            
            // metadata: MNetworkEnable
            QAngle m_angInitialAngles; // 0x1a60            
            // metadata: MNetworkEnable
            source2sdk::animationsystem::HSequence m_hHeroStatueSequence; // 0x1a6c            
            // metadata: MNetworkEnable
            source2sdk::animationsystem::HSequence m_hConstantLayerSequence; // 0x1a70            
            // metadata: MNetworkEnable
            float m_fHeroStatueCycle; // 0x1a74            
            // metadata: MNetworkEnable
            std::int32_t m_iHeroStatueStatusEffectIndex; // 0x1a78            
            // metadata: MNetworkEnable
            bool m_bHeroStatue; // 0x1a7c            
            // metadata: MNetworkEnable
            bool m_bBattleCup; // 0x1a7d            
            // metadata: MNetworkEnable
            char m_HeroStatueInscription[32]; // 0x1a7e            
            uint8_t _pad1a9e[0x2]; // 0x1a9e
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x1aa0            
            // metadata: MNetworkEnable
            Color m_ParticleTintColor; // 0x1aa4            
            // metadata: MNetworkEnable
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x1aa8            
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Building) == 0x1ab0);
    };
};
