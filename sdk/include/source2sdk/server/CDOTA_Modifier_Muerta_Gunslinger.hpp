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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Muerta_Gunslinger : public client::CDOTA_Buff
    {
    public:
        float double_shot_chance; // 0x1708        
        float target_search_bonus_range; // 0x170c        
        int32_t bonus_damage; // 0x1710        
        // m_hSecondaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSecondaryTarget;
        char m_hSecondaryTarget[0x4]; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_Gunslinger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Muerta_Gunslinger) == 0x1718);
};
