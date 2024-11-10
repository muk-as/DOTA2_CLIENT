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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Jakiro_IcePath_Thinker : public client::CDOTA_Buff
    {
    public:
        float path_delay; // 0x1708        
        int32_t path_radius; // 0x170c        
        int32_t m_nDamage; // 0x1710        
        float m_flRadius; // 0x1714        
        float stun_duration; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x1720        
        Vector m_vPathStart; // 0x1738        
        Vector m_vPathEnd; // 0x1744        
        entity2::GameTime_t m_fStartTime; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_IcePath_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Jakiro_IcePath_Thinker) == 0x1760);
};
