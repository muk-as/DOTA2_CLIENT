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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slardar_Amplify_Damage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t armor_reduction; // 0x17f8            
            float scepter_delay; // 0x17fc            
            std::int32_t undispellable; // 0x1800            
            float puddle_radius; // 0x1804            
            float puddle_duration; // 0x1808            
            Vector m_vecLastPuddle; // 0x180c            
            // m_hPuddle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPuddle;
            char m_hPuddle[0x4]; // 0x1818            
            std::int32_t m_nSelfBuffSerialNumber; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slardar_Amplify_Damage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Slardar_Amplify_Damage) == 0x1820);
    };
};
