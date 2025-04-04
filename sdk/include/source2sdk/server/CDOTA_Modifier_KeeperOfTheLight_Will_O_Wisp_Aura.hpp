#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        float wisp_damage; // 0x170c        
        float off_duration; // 0x1710        
        float off_duration_initial; // 0x1714        
        float on_duration; // 0x1718        
        int32_t hit_count; // 0x171c        
        int32_t m_iAttackCount; // 0x1720        
        entity2::GameTime_t m_flNextTimeOn; // 0x1724        
        bool m_bActive; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        client::ParticleIndex_t m_nFXIndex; // 0x172c        
        client::ParticleIndex_t m_nFXIndexB; // 0x1730        
        entity2::GameTime_t m_flNextTime; // 0x1734        
        // m_vecDamagedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecDamagedEntities;
        char m_vecDamagedEntities[0x18]; // 0x1738        
        float m_flCorrectionTime; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura) == 0x1758);
};
