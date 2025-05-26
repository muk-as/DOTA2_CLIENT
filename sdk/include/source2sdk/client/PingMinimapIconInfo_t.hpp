#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EPingMinimapDrawCondition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x24
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PingMinimapIconInfo_t
        {
        public:
            // metadata: MPropertyDescription "ID of icon to show on minimap. See scripts/minimap_icons.txt and mod_textures.txt"
            std::int32_t m_nIconID; // 0x0            
            // metadata: MPropertyDescription "Size in world units of the minimap icon."
            float m_flSize; // 0x4            
            bool m_bAlignBottom; // 0x8            
            bool m_bForceBaseIconWhite; // 0x9            
            uint8_t _pad000a[0x2]; // 0xa
            float m_flAnimStartSize; // 0xc            
            float m_flAnimThrobSize; // 0x10            
            float m_flAnimThrobRate; // 0x14            
            // metadata: MPropertyDescription "Duration of time that the intro takes."
            float m_flAnimIntroDuration; // 0x18            
            // metadata: MPropertyDescription "Duration of time the outro takes."
            float m_flAnimOutroDuration; // 0x1c            
            source2sdk::client::EPingMinimapDrawCondition m_eDrawCondition; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_nIconID) == 0x0);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_flSize) == 0x4);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_bAlignBottom) == 0x8);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_bForceBaseIconWhite) == 0x9);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_flAnimStartSize) == 0xc);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_flAnimThrobSize) == 0x10);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_flAnimThrobRate) == 0x14);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_flAnimIntroDuration) == 0x18);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_flAnimOutroDuration) == 0x1c);
        static_assert(offsetof(source2sdk::client::PingMinimapIconInfo_t, m_eDrawCondition) == 0x20);
        
        static_assert(sizeof(source2sdk::client::PingMinimapIconInfo_t) == 0x24);
    };
};
