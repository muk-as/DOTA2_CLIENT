#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class sSpiritInfo;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1778
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DeathProphet_Exorcism : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        int32_t spirit_speed; // 0x170c        
        int32_t max_distance; // 0x1710        
        int32_t give_up_distance; // 0x1714        
        int32_t heal_percent; // 0x1718        
        int32_t spirit_duration; // 0x171c        
        float ghost_spawn_rate; // 0x1720        
        int32_t movement_bonus; // 0x1724        
        int32_t m_iSpirits; // 0x1728        
        entity2::GameTime_t m_fStartTime; // 0x172c        
        entity2::GameTime_t m_fLastThinkTime; // 0x1730        
        entity2::GameTime_t m_fSpawnTime; // 0x1734        
        bool m_bFirstSpawn; // 0x1738        
        bool m_bCommentedOnExpired; // 0x1739        
        bool m_bForceExpired; // 0x173a        
        [[maybe_unused]] std::uint8_t pad_0x173b[0x5]; // 0x173b
        // m_vecDeadHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecDeadHeroes;
        char m_vecDeadHeroes[0x18]; // 0x1740        
        // m_vecSpirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sSpiritInfo*> m_vecSpirits;
        char m_vecSpirits[0x18]; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x1770[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Exorcism because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DeathProphet_Exorcism) == 0x1778);
};
