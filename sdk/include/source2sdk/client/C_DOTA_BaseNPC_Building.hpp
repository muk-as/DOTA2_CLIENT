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
    // Size: 0x18c8
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
        int32_t m_iDamageLevel; // 0x1858        
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x185c        
        client::ParticleIndex_t m_nTPFXIndex; // 0x1860        
        client::ParticleIndex_t m_nStatusFXIndex; // 0x1864        
        // metadata: MNetworkEnable
        // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
        char m_nFXIndex[0x8]; // 0x1868        
        // metadata: MNetworkEnable
        // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
        char m_nFXIndexDestruction[0x8]; // 0x1870        
        // metadata: MNetworkEnable
        QAngle m_angInitialAngles; // 0x1878        
        // metadata: MNetworkEnable
        animationsystem::HSequence m_hHeroStatueSequence; // 0x1884        
        // metadata: MNetworkEnable
        animationsystem::HSequence m_hConstantLayerSequence; // 0x1888        
        // metadata: MNetworkEnable
        float m_fHeroStatueCycle; // 0x188c        
        // metadata: MNetworkEnable
        int32_t m_iHeroStatueStatusEffectIndex; // 0x1890        
        // metadata: MNetworkEnable
        bool m_bHeroStatue; // 0x1894        
        // metadata: MNetworkEnable
        bool m_bBattleCup; // 0x1895        
        // metadata: MNetworkEnable
        char m_HeroStatueInscription[32]; // 0x1896        
        [[maybe_unused]] std::uint8_t pad_0x18b6[0x2]; // 0x18b6
        // metadata: MNetworkEnable
        client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x18b8        
        // metadata: MNetworkEnable
        Color m_ParticleTintColor; // 0x18bc        
        // metadata: MNetworkEnable
        client::FowCustomTeams_t m_nFoWTeam; // 0x18c0        
        [[maybe_unused]] std::uint8_t pad_0x18c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Building because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Building) == 0x18c8);
};
