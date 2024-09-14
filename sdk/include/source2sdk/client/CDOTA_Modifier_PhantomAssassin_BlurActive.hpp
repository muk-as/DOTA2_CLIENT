#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PhantomAssassin_BlurActive : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        float fade_duration; // 0x16ec        
        int32_t break_on_attack; // 0x16f0        
        bool m_bDestroyNext; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        int32_t manacost_reduction_during_blur_pct; // 0x16f8        
        // m_hVisibleEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hVisibleEntity;
        char m_hVisibleEntity[0x4]; // 0x16fc        
        float m_flCountdown; // 0x1700        
        float buff_duration_after_break; // 0x1704        
        int32_t active_movespeed_bonus; // 0x1708        
        entity2::GameTime_t m_rtLastTime; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_BlurActive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PhantomAssassin_BlurActive) == 0x1710);
};
