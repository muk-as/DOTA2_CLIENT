#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        float wisp_damage; // 0x16ec        
        float off_duration; // 0x16f0        
        float off_duration_initial; // 0x16f4        
        float on_duration; // 0x16f8        
        int32_t hit_count; // 0x16fc        
        int32_t m_iAttackCount; // 0x1700        
        entity2::GameTime_t m_flNextTimeOn; // 0x1704        
        bool m_bActive; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        client::ParticleIndex_t m_nFXIndex; // 0x170c        
        client::ParticleIndex_t m_nFXIndexB; // 0x1710        
        entity2::GameTime_t m_flNextTime; // 0x1714        
        // m_vecDamagedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecDamagedEntities;
        char m_vecDamagedEntities[0x18]; // 0x1718        
        float m_flCorrectionTime; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura) == 0x1738);
};
