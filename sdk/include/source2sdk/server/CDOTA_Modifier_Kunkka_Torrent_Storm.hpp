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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Torrent_Storm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float torrent_min_distance; // 0x1878            
            float torrent_max_distance; // 0x187c            
            std::int32_t m_iExplosionQuadrant; // 0x1880            
            uint8_t _pad1884[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent_Storm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kunkka_Torrent_Storm) == 0x1898);
    };
};
