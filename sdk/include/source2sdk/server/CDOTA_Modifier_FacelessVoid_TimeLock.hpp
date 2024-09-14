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

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_FacelessVoid_TimeLock : public client::CDOTA_Buff
    {
    public:
        float duration; // 0x16e8        
        float duration_creep; // 0x16ec        
        float delay; // 0x16f0        
        int32_t chance_pct; // 0x16f4        
        int32_t bonus_damage; // 0x16f8        
        entity2::GameTime_t last_attack_time; // 0x16fc        
        // m_ProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_ProcAttackRecords;
        char m_ProcAttackRecords[0x18]; // 0x1700        
        entity2::GameTime_t apply_activity_modifier_until; // 0x1718        
        entity2::GameTime_t disable_activity_modifier_until; // 0x171c        
        // m_mapTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CHandle<server::CDOTA_BaseNPC>,int32_t> m_mapTargets;
        char m_mapTargets[0x28]; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeLock because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_FacelessVoid_TimeLock) == 0x1748);
};
