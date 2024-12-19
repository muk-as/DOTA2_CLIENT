#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18e0
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
    class C_DOTA_BaseNPC_Building : public client::C_DOTA_BaseNPC
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iDamageLevel; // 0x1870        
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x1874        
        client::ParticleIndex_t m_nTPFXIndex; // 0x1878        
        client::ParticleIndex_t m_nStatusFXIndex; // 0x187c        
        // metadata: MNetworkEnable
        // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
        char m_nFXIndex[0x8]; // 0x1880        
        // metadata: MNetworkEnable
        // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
        char m_nFXIndexDestruction[0x8]; // 0x1888        
        // metadata: MNetworkEnable
        QAngle m_angInitialAngles; // 0x1890        
        // metadata: MNetworkEnable
        animationsystem::HSequence m_hHeroStatueSequence; // 0x189c        
        // metadata: MNetworkEnable
        animationsystem::HSequence m_hConstantLayerSequence; // 0x18a0        
        // metadata: MNetworkEnable
        float m_fHeroStatueCycle; // 0x18a4        
        // metadata: MNetworkEnable
        int32_t m_iHeroStatueStatusEffectIndex; // 0x18a8        
        // metadata: MNetworkEnable
        bool m_bHeroStatue; // 0x18ac        
        // metadata: MNetworkEnable
        bool m_bBattleCup; // 0x18ad        
        // metadata: MNetworkEnable
        char m_HeroStatueInscription[32]; // 0x18ae        
        [[maybe_unused]] std::uint8_t pad_0x18ce[0x2]; // 0x18ce
        // metadata: MNetworkEnable
        client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x18d0        
        // metadata: MNetworkEnable
        Color m_ParticleTintColor; // 0x18d4        
        // metadata: MNetworkEnable
        client::FowCustomTeams_t m_nFoWTeam; // 0x18d8        
        [[maybe_unused]] std::uint8_t pad_0x18dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Building because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Building) == 0x18e0);
};
