#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_Polarization : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_second; // 0x1878            
            float damage_interval; // 0x187c            
            float damage_duration; // 0x1880            
            std::int32_t rock_search_radius; // 0x1884            
            // m_hMagnetizeAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hMagnetizeAbility;
            char m_hMagnetizeAbility[0x4]; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Polarization because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_Polarization) == 0x1890);
    };
};
