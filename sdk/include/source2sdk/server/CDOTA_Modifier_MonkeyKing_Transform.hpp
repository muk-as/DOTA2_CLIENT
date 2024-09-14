#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_Transform : public client::CDOTA_Buff
    {
    public:
        CUtlString m_strDisguise; // 0x16e8        
        int32_t movespeed; // 0x16f0        
        int32_t m_nDisguisedSpeed; // 0x16f4        
        int32_t reveal_radius; // 0x16f8        
        client::ParticleIndex_t m_nDisguiseEffectIndex; // 0x16fc        
        // m_hCourierToClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCourierToClone;
        char m_hCourierToClone[0x4]; // 0x1700        
        // m_hCreepToClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCreepToClone;
        char m_hCreepToClone[0x4]; // 0x1704        
        // m_aryBountyRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_aryBountyRuneSpawners;
        char m_aryBountyRuneSpawners[0x18]; // 0x1708        
        bool m_bIsFlyingCourier; // 0x1720        
        bool m_bIsRune; // 0x1721        
        bool m_bIsBanana; // 0x1722        
        bool m_bIsFakeAlly; // 0x1723        
        uint32_t m_nMischiefUnitType; // 0x1724        
        int32_t m_nMischiefHealthbarOffset; // 0x1728        
        float invul_duration; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_Transform because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_Transform) == 0x1730);
};
