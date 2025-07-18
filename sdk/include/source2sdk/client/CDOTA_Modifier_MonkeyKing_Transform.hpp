#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_Transform : public source2sdk::client::CDOTA_Buff
        {
        public:
            CUtlString m_strDisguise; // 0x1878            
            std::int32_t movespeed; // 0x1880            
            std::int32_t m_nDisguisedSpeed; // 0x1884            
            std::int32_t reveal_radius; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nDisguiseEffectIndex; // 0x188c            
            // m_hCourierToClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCourierToClone;
            char m_hCourierToClone[0x4]; // 0x1890            
            // m_hCreepToClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCreepToClone;
            char m_hCreepToClone[0x4]; // 0x1894            
            // m_aryBountyRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_aryBountyRuneSpawners;
            char m_aryBountyRuneSpawners[0x18]; // 0x1898            
            bool m_bIsFlyingCourier; // 0x18b0            
            bool m_bIsRune; // 0x18b1            
            bool m_bIsBanana; // 0x18b2            
            bool m_bIsFakeAlly; // 0x18b3            
            std::uint32_t m_nMischiefUnitType; // 0x18b4            
            std::int32_t m_nMischiefHealthbarOffset; // 0x18b8            
            float invul_duration; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_Transform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_Transform) == 0x18c0);
    };
};
