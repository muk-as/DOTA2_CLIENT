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
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Puck_DreamCoil_Thinker : public client::CDOTA_Buff
    {
    public:
        // m_hLinkedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hLinkedEntities;
        char m_hLinkedEntities[0x18]; // 0x1708        
        int32_t coil_radius; // 0x1720        
        int32_t coil_break_radius; // 0x1724        
        int32_t coil_initial_damage; // 0x1728        
        float coil_stun_duration; // 0x172c        
        float coil_duration; // 0x1730        
        int32_t coil_break_damage; // 0x1734        
        // m_FXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_FXIndex;
        char m_FXIndex[0x18]; // 0x1738        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Puck_DreamCoil_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Puck_DreamCoil_Thinker) == 0x1750);
};
