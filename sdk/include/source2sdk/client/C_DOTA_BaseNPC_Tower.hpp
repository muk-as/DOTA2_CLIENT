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
    // Size: 0x1950
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerAttackTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerHighFiveTarget"
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Tower : public client::C_DOTA_BaseNPC_Building
    {
    public:
        client::ParticleIndex_t m_nAltHeldRangeFX; // 0x18e0        
        bool m_bWasInRange; // 0x18e4        
        [[maybe_unused]] std::uint8_t pad_0x18e5[0x3]; // 0x18e5
        client::ParticleIndex_t m_iRangeFX; // 0x18e8        
        client::ParticleIndex_t m_iPulseFX; // 0x18ec        
        uint8_t m_unTowerTier; // 0x18f0        
        [[maybe_unused]] std::uint8_t pad_0x18f1[0x3]; // 0x18f1
        float m_fTowerAggroDangerAmount; // 0x18f4        
        float m_flControlledUnitInRangeAmount; // 0x18f8        
        float m_flControlledUnitTargettedAmount; // 0x18fc        
        client::ParticleIndex_t m_iAnticipationFX; // 0x1900        
        [[maybe_unused]] std::uint8_t pad_0x1904[0x4]; // 0x1904
        CUtlSymbolLarge m_szAnticipationFXName; // 0x1908        
        // m_hPrevTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPrevTowerAttackTarget;
        char m_hPrevTowerAttackTarget[0x4]; // 0x1910        
        // metadata: MNetworkEnable
        // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerAttackTarget;
        char m_hTowerAttackTarget[0x4]; // 0x1914        
        // metadata: MNetworkEnable
        // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerHighFiveTarget;
        char m_hTowerHighFiveTarget[0x4]; // 0x1918        
        int32_t m_iPoseParameterAim; // 0x191c        
        QAngle m_angDefaultCustomTowerAngle; // 0x1920        
        float m_flLastAimYaw; // 0x192c        
        bool m_bClientSideCustomTower; // 0x1930        
        [[maybe_unused]] std::uint8_t pad_0x1931[0x7]; // 0x1931
        client::CountdownTimer m_IdleRareAnimationTime; // 0x1938        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Tower because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Tower) == 0x1950);
};
