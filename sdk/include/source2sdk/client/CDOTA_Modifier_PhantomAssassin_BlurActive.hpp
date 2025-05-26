#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomAssassin_BlurActive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x1878            
            float fade_duration; // 0x187c            
            std::int32_t break_on_attack; // 0x1880            
            bool m_bDestroyNext; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            std::int32_t manacost_reduction_during_blur_pct; // 0x1888            
            // m_hVisibleEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hVisibleEntity;
            char m_hVisibleEntity[0x4]; // 0x188c            
            float m_flCountdown; // 0x1890            
            float buff_duration_after_break; // 0x1894            
            std::int32_t active_movespeed_bonus; // 0x1898            
            source2sdk::entity2::GameTime_t m_rtLastTime; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_BlurActive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PhantomAssassin_BlurActive) == 0x18a0);
    };
};
