#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomAssassin_BlurActive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x_            
            float fade_duration; // 0x_            
            std::int32_t break_on_attack; // 0x_            
            bool m_bDestroyNext; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t manacost_reduction_during_blur_pct; // 0x_            
            // m_hVisibleEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVisibleEntity;
            char m_hVisibleEntity[0x_]; // 0x_            
            float m_flCountdown; // 0x_            
            float buff_duration_after_break; // 0x_            
            std::int32_t active_movespeed_bonus; // 0x_            
            source2sdk::entity2::GameTime_t m_rtLastTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_BlurActive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PhantomAssassin_BlurActive) == 0x_);
    };
};
