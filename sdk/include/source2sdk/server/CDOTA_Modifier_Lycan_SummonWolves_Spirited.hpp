#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
    class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public server::CDOTA_Modifier_Invisible
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x1718        
        int32_t wolf_index; // 0x171c        
        int32_t back_distance; // 0x1720        
        int32_t side_distance; // 0x1724        
        Vector m_vecDesiredPosition; // 0x1728        
        int32_t m_iBackOffsetFactor; // 0x1734        
        bool m_bRightWolf; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x3]; // 0x1739
        float invis_level; // 0x173c        
        int32_t model_scale; // 0x1740        
        bool m_bInitialized; // 0x1744        
        bool m_bDeathFxTriggered; // 0x1745        
        [[maybe_unused]] std::uint8_t pad_0x1746[0x2]; // 0x1746
        float death_fx_time; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_SummonWolves_Spirited because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lycan_SummonWolves_Spirited) == 0x1750);
};
