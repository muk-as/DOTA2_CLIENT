#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1af8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerAttackTarget"
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerHighFiveTarget"
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Tower : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAltHeldRangeFX; // 0x1a88            
            bool m_bWasInRange; // 0x1a8c            
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            source2sdk::client::ParticleIndex_t m_iRangeFX; // 0x1a90            
            source2sdk::client::ParticleIndex_t m_iPulseFX; // 0x1a94            
            std::uint8_t m_unTowerTier; // 0x1a98            
            uint8_t _pad1a99[0x3]; // 0x1a99
            float m_fTowerAggroDangerAmount; // 0x1a9c            
            float m_flControlledUnitInRangeAmount; // 0x1aa0            
            float m_flControlledUnitTargettedAmount; // 0x1aa4            
            source2sdk::client::ParticleIndex_t m_iAnticipationFX; // 0x1aa8            
            uint8_t _pad1aac[0x4]; // 0x1aac
            CUtlSymbolLarge m_szAnticipationFXName; // 0x1ab0            
            // m_hPrevTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTowerAttackTarget;
            char m_hPrevTowerAttackTarget[0x4]; // 0x1ab8            
            // metadata: MNetworkEnable
            // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerAttackTarget;
            char m_hTowerAttackTarget[0x4]; // 0x1abc            
            // metadata: MNetworkEnable
            // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerHighFiveTarget;
            char m_hTowerHighFiveTarget[0x4]; // 0x1ac0            
            std::int32_t m_iPoseParameterAim; // 0x1ac4            
            QAngle m_angDefaultCustomTowerAngle; // 0x1ac8            
            float m_flLastAimYaw; // 0x1ad4            
            bool m_bClientSideCustomTower; // 0x1ad8            
            uint8_t _pad1ad9[0x7]; // 0x1ad9
            source2sdk::client::CountdownTimer m_IdleRareAnimationTime; // 0x1ae0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Tower) == 0x1af8);
    };
};
