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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LoneDruid_SpiritLink : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_attack_speed; // 0x1878            
            std::int32_t lifesteal_percent; // 0x187c            
            std::int32_t armor; // 0x1880            
            std::int32_t armor_sharing; // 0x1884            
            std::int32_t active_bonus; // 0x1888            
            std::int32_t lifesteal_both_ways; // 0x188c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_SpiritLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_LoneDruid_SpiritLink) == 0x1898);
    };
};
