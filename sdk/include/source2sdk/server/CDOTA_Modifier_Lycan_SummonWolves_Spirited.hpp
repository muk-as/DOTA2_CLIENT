#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x1888            
            std::int32_t wolf_index; // 0x188c            
            std::int32_t back_distance; // 0x1890            
            std::int32_t side_distance; // 0x1894            
            Vector m_vecDesiredPosition; // 0x1898            
            std::int32_t m_iBackOffsetFactor; // 0x18a4            
            bool m_bRightWolf; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            float invis_level; // 0x18ac            
            std::int32_t model_scale; // 0x18b0            
            bool m_bInitialized; // 0x18b4            
            bool m_bDeathFxTriggered; // 0x18b5            
            uint8_t _pad18b6[0x2]; // 0x18b6
            float death_fx_time; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_SummonWolves_Spirited because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lycan_SummonWolves_Spirited) == 0x18c0);
    };
};
