#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1768
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_FacelessVoid_TimeLock : public client::CDOTA_Buff
    {
    public:
        float duration; // 0x1708        
        float duration_creep; // 0x170c        
        float delay; // 0x1710        
        int32_t chance_pct; // 0x1714        
        int32_t bonus_damage; // 0x1718        
        entity2::GameTime_t last_attack_time; // 0x171c        
        // m_ProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_ProcAttackRecords;
        char m_ProcAttackRecords[0x18]; // 0x1720        
        entity2::GameTime_t apply_activity_modifier_until; // 0x1738        
        entity2::GameTime_t disable_activity_modifier_until; // 0x173c        
        // m_mapTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CHandle<client::C_DOTA_BaseNPC>,int32_t> m_mapTargets;
        char m_mapTargets[0x28]; // 0x1740        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeLock because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_FacelessVoid_TimeLock) == 0x1768);
};
