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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public client::CDOTA_Buff
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x16e8        
        int32_t wolf_index; // 0x16ec        
        int32_t back_distance; // 0x16f0        
        int32_t side_distance; // 0x16f4        
        Vector m_vecDesiredPosition; // 0x16f8        
        int32_t m_iBackOffsetFactor; // 0x1704        
        bool m_bRightWolf; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float invis_level; // 0x170c        
        int32_t model_scale; // 0x1710        
        bool m_bInitialized; // 0x1714        
        bool m_bDeathFxTriggered; // 0x1715        
        [[maybe_unused]] std::uint8_t pad_0x1716[0x2]; // 0x1716
        float death_fx_time; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_SummonWolves_Spirited because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lycan_SummonWolves_Spirited) == 0x1720);
};
