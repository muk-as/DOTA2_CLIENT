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
        class CDOTA_Modifier_Leshrac_Lightning_Storm : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1878            
            float radius; // 0x187c            
            std::int32_t jump_count; // 0x1880            
            float slow_duration; // 0x1884            
            float jump_delay; // 0x1888            
            // hInitialTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hInitialTarget;
            char hInitialTarget[0x4]; // 0x188c            
            float m_flDamage; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Lightning_Storm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Leshrac_Lightning_Storm) == 0x1898);
    };
};
