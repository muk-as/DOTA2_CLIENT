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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            source2sdk::client::ParticleIndex_t m_nAltHeldRangeFX; // 0x_            
            bool m_bWasInRange; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_iRangeFX; // 0x_            
            source2sdk::client::ParticleIndex_t m_iPulseFX; // 0x_            
            std::uint8_t m_unTowerTier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fTowerAggroDangerAmount; // 0x_            
            float m_flControlledUnitInRangeAmount; // 0x_            
            float m_flControlledUnitTargettedAmount; // 0x_            
            source2sdk::client::ParticleIndex_t m_iAnticipationFX; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_szAnticipationFXName; // 0x_            
            // m_hPrevTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTowerAttackTarget;
            char m_hPrevTowerAttackTarget[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerAttackTarget;
            char m_hTowerAttackTarget[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerHighFiveTarget;
            char m_hTowerHighFiveTarget[0x_]; // 0x_            
            std::int32_t m_iPoseParameterAim; // 0x_            
            QAngle m_angDefaultCustomTowerAngle; // 0x_            
            float m_flLastAimYaw; // 0x_            
            bool m_bClientSideCustomTower; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_IdleRareAnimationTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Tower) == 0x_);
    };
};
