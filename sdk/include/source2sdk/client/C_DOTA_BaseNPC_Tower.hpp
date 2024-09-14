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
    // Size: 0x18e0
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
        client::ParticleIndex_t m_nAltHeldRangeFX; // 0x1870        
        bool m_bWasInRange; // 0x1874        
        [[maybe_unused]] std::uint8_t pad_0x1875[0x3]; // 0x1875
        client::ParticleIndex_t m_iRangeFX; // 0x1878        
        client::ParticleIndex_t m_iPulseFX; // 0x187c        
        uint8_t m_unTowerTier; // 0x1880        
        [[maybe_unused]] std::uint8_t pad_0x1881[0x3]; // 0x1881
        float m_fTowerAggroDangerAmount; // 0x1884        
        float m_flControlledUnitInRangeAmount; // 0x1888        
        float m_flControlledUnitTargettedAmount; // 0x188c        
        client::ParticleIndex_t m_iAnticipationFX; // 0x1890        
        [[maybe_unused]] std::uint8_t pad_0x1894[0x4]; // 0x1894
        CUtlSymbolLarge m_szAnticipationFXName; // 0x1898        
        // m_hPrevTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPrevTowerAttackTarget;
        char m_hPrevTowerAttackTarget[0x4]; // 0x18a0        
        // metadata: MNetworkEnable
        // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerAttackTarget;
        char m_hTowerAttackTarget[0x4]; // 0x18a4        
        // metadata: MNetworkEnable
        // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerHighFiveTarget;
        char m_hTowerHighFiveTarget[0x4]; // 0x18a8        
        int32_t m_iPoseParameterAim; // 0x18ac        
        QAngle m_angDefaultCustomTowerAngle; // 0x18b0        
        float m_flLastAimYaw; // 0x18bc        
        bool m_bClientSideCustomTower; // 0x18c0        
        [[maybe_unused]] std::uint8_t pad_0x18c1[0x7]; // 0x18c1
        client::CountdownTimer m_IdleRareAnimationTime; // 0x18c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Tower because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Tower) == 0x18e0);
};
