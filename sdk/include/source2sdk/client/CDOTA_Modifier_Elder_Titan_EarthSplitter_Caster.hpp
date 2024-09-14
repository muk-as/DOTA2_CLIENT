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
    // Size: 0x1748
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster : public client::CDOTA_Buff
    {
    public:
        // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitUnits;
        char m_hHitUnits[0x18]; // 0x16e8        
        int32_t vision_width; // 0x1700        
        float vision_interval; // 0x1704        
        float vision_duration; // 0x1708        
        int32_t vision_step; // 0x170c        
        int32_t total_steps; // 0x1710        
        int32_t m_nCompletedSteps; // 0x1714        
        Vector m_vStart; // 0x1718        
        Vector m_vEnd; // 0x1724        
        Vector m_vNextVisionLocation; // 0x1730        
        Vector m_vCastDirection; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster) == 0x1748);
};
