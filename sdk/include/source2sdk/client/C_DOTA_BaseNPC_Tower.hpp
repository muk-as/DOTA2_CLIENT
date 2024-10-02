#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerAttackTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerHighFiveTarget"
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Tower : public client::C_DOTA_BaseNPC_Building
    {
    public:
        client::ParticleIndex_t m_nAltHeldRangeFX; // 0x1878        
        bool m_bWasInRange; // 0x187c        
        [[maybe_unused]] std::uint8_t pad_0x187d[0x3]; // 0x187d
        client::ParticleIndex_t m_iRangeFX; // 0x1880        
        client::ParticleIndex_t m_iPulseFX; // 0x1884        
        uint8_t m_unTowerTier; // 0x1888        
        [[maybe_unused]] std::uint8_t pad_0x1889[0x3]; // 0x1889
        float m_fTowerAggroDangerAmount; // 0x188c        
        float m_flControlledUnitInRangeAmount; // 0x1890        
        float m_flControlledUnitTargettedAmount; // 0x1894        
        client::ParticleIndex_t m_iAnticipationFX; // 0x1898        
        [[maybe_unused]] std::uint8_t pad_0x189c[0x4]; // 0x189c
        CUtlSymbolLarge m_szAnticipationFXName; // 0x18a0        
        // m_hPrevTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPrevTowerAttackTarget;
        char m_hPrevTowerAttackTarget[0x4]; // 0x18a8        
        // metadata: MNetworkEnable
        // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerAttackTarget;
        char m_hTowerAttackTarget[0x4]; // 0x18ac        
        // metadata: MNetworkEnable
        // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerHighFiveTarget;
        char m_hTowerHighFiveTarget[0x4]; // 0x18b0        
        int32_t m_iPoseParameterAim; // 0x18b4        
        QAngle m_angDefaultCustomTowerAngle; // 0x18b8        
        float m_flLastAimYaw; // 0x18c4        
        bool m_bClientSideCustomTower; // 0x18c8        
        [[maybe_unused]] std::uint8_t pad_0x18c9[0x7]; // 0x18c9
        client::CountdownTimer m_IdleRareAnimationTime; // 0x18d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Tower because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Tower) == 0x18e8);
};
