#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_Transform : public source2sdk::client::CDOTA_Buff
        {
        public:
            CUtlString m_strDisguise; // 0x1888            
            std::int32_t movespeed; // 0x1890            
            std::int32_t m_nDisguisedSpeed; // 0x1894            
            std::int32_t reveal_radius; // 0x1898            
            source2sdk::client::ParticleIndex_t m_nDisguiseEffectIndex; // 0x189c            
            // m_hCourierToClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCourierToClone;
            char m_hCourierToClone[0x4]; // 0x18a0            
            // m_hCreepToClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCreepToClone;
            char m_hCreepToClone[0x4]; // 0x18a4            
            // m_aryBountyRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_aryBountyRuneSpawners;
            char m_aryBountyRuneSpawners[0x18]; // 0x18a8            
            bool m_bIsFlyingCourier; // 0x18c0            
            bool m_bIsRune; // 0x18c1            
            bool m_bIsBanana; // 0x18c2            
            bool m_bIsFakeAlly; // 0x18c3            
            std::uint32_t m_nMischiefUnitType; // 0x18c4            
            std::int32_t m_nMischiefHealthbarOffset; // 0x18c8            
            float invul_duration; // 0x18cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_Transform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_Transform) == 0x18d0);
    };
};
