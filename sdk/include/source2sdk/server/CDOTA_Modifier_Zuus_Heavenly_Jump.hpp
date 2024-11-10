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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Zuus_Heavenly_Jump : public client::CDOTA_Buff
    {
    public:
        float hop_duration; // 0x1708        
        int32_t hop_height; // 0x170c        
        int32_t hop_distance; // 0x1710        
        int32_t search_radius; // 0x1714        
        float m_flStartZ; // 0x1718        
        float m_flCurTime; // 0x171c        
        float m_flJumpDuration; // 0x1720        
        float m_flJumpHeight; // 0x1724        
        Vector m_vTargetHorizontalDirection; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        // hUnitsToHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hUnitsToHit;
        char hUnitsToHit[0x18]; // 0x1738        
        bool m_bLaunched; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1751[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_Heavenly_Jump because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Zuus_Heavenly_Jump) == 0x1758);
};
