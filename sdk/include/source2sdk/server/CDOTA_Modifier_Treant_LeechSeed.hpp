#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_TempTree;
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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_LeechSeed : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_interval; // 0x1878            
            std::int32_t leech_damage; // 0x187c            
            std::int32_t movement_slow; // 0x1880            
            float radius; // 0x1884            
            std::int32_t projectile_speed; // 0x1888            
            bool ground_plant; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_TempTree> m_hTree;
            char m_hTree[0x4]; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LeechSeed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Treant_LeechSeed) == 0x1898);
    };
};
