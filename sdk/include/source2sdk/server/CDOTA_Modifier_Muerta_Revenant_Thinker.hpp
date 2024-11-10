#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sRevenantDef.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1780
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Muerta_Revenant_Thinker : public client::CDOTA_Buff
    {
    public:
        bool m_bSpiritsExplode; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float m_fDeadZoneDistance; // 0x170c        
        float m_fDesiredDeadZoneDistance; // 0x1710        
        int32_t damage; // 0x1714        
        int32_t hit_radius; // 0x1718        
        float speed_initial; // 0x171c        
        float speed_max; // 0x1720        
        float acceleration; // 0x1724        
        int32_t kill_check_radius; // 0x1728        
        int32_t kill_radius_expansion; // 0x172c        
        float kill_radius_expansion_speed; // 0x1730        
        int32_t num_revenants; // 0x1734        
        int32_t rotation_direction; // 0x1738        
        float radius; // 0x173c        
        float rotation_initial; // 0x1740        
        client::ParticleIndex_t m_nWarningFX; // 0x1744        
        // m_SpiritDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sRevenantDef> m_SpiritDefs;
        char m_SpiritDefs[0x18]; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x1760[0x18]; // 0x1760
        int32_t m_nRevenantImpacts; // 0x1778        
        [[maybe_unused]] std::uint8_t pad_0x177c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_Revenant_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Muerta_Revenant_Thinker) == 0x1780);
};
