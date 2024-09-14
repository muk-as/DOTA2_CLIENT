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
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PrimalBeast_Pulverize_Self : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        Vector m_vPulverizeCenter; // 0x16ec        
        Vector m_vCasterStartPos; // 0x16f8        
        float splash_radius; // 0x1704        
        float interval; // 0x1708        
        float ministun; // 0x170c        
        int32_t damage; // 0x1710        
        int32_t bonus_damage_per_hit; // 0x1714        
        int32_t m_nHitCount; // 0x1718        
        float bonus_aoe_duration; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Pulverize_Self because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Pulverize_Self) == 0x1720);
};
