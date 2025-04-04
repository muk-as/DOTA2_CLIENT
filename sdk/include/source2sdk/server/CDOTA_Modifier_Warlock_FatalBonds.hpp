#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Warlock_FatalBonds : public client::CDOTA_Buff
    {
    public:
        // m_FatalBondsEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_FatalBondsEntities;
        char m_FatalBondsEntities[0x18]; // 0x1708        
        int32_t damage_share_percentage; // 0x1720        
        float imp_duration; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_FatalBonds because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Warlock_FatalBonds) == 0x1728);
};
