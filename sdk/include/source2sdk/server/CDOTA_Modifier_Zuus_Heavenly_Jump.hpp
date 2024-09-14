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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Zuus_Heavenly_Jump : public client::CDOTA_Buff
    {
    public:
        float hop_duration; // 0x16e8        
        int32_t hop_height; // 0x16ec        
        int32_t hop_distance; // 0x16f0        
        int32_t search_radius; // 0x16f4        
        float m_flStartZ; // 0x16f8        
        float m_flCurTime; // 0x16fc        
        float m_flJumpDuration; // 0x1700        
        float m_flJumpHeight; // 0x1704        
        Vector m_vTargetHorizontalDirection; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // hUnitsToHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hUnitsToHit;
        char hUnitsToHit[0x18]; // 0x1718        
        bool m_bLaunched; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_Heavenly_Jump because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Zuus_Heavenly_Jump) == 0x1738);
};
