#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Phoenix_IcarusDive : public client::CDOTA_Buff
    {
    public:
        Vector m_vSource; // 0x1708        
        Vector m_vTarget; // 0x1714        
        Vector m_vDirection; // 0x1720        
        QAngle m_angDirection; // 0x172c        
        float m_flCurrentTime; // 0x1738        
        int32_t dash_length; // 0x173c        
        int32_t dash_width; // 0x1740        
        int32_t hit_radius; // 0x1744        
        float burn_duration; // 0x1748        
        float dive_duration; // 0x174c        
        float impact_damage; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4]; // 0x1754
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_IcarusDive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Phoenix_IcarusDive) == 0x1770);
};
