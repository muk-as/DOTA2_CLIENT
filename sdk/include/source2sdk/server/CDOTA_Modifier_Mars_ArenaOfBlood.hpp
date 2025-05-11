#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1860
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_ArenaOfBlood : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            std::int32_t width; // 0x17fc            
            std::int32_t spear_damage; // 0x1800            
            std::int32_t spear_distance_from_wall; // 0x1804            
            float spear_attack_interval; // 0x1808            
            uint8_t _pad180c[0x34]; // 0x180c
            std::int32_t m_hObstruction; // 0x1840            
            uint8_t _pad1844[0x4]; // 0x1844
            // m_vecAvoidLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecAvoidLocations;
            char m_vecAvoidLocations[0x18]; // 0x1848            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_ArenaOfBlood) == 0x1860);
    };
};
