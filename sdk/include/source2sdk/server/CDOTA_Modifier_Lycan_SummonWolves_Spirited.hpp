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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x1808            
            std::int32_t wolf_index; // 0x180c            
            std::int32_t back_distance; // 0x1810            
            std::int32_t side_distance; // 0x1814            
            Vector m_vecDesiredPosition; // 0x1818            
            std::int32_t m_iBackOffsetFactor; // 0x1824            
            bool m_bRightWolf; // 0x1828            
            uint8_t _pad1829[0x3]; // 0x1829
            float invis_level; // 0x182c            
            std::int32_t model_scale; // 0x1830            
            bool m_bInitialized; // 0x1834            
            bool m_bDeathFxTriggered; // 0x1835            
            uint8_t _pad1836[0x2]; // 0x1836
            float death_fx_time; // 0x1838            
            uint8_t _pad183c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_SummonWolves_Spirited because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lycan_SummonWolves_Spirited) == 0x1840);
    };
};
