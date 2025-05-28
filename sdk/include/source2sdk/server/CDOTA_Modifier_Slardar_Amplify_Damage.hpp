#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slardar_Amplify_Damage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t armor_reduction; // 0x1888            
            float scepter_delay; // 0x188c            
            std::int32_t undispellable; // 0x1890            
            float puddle_radius; // 0x1894            
            float puddle_duration; // 0x1898            
            Vector m_vecLastPuddle; // 0x189c            
            // m_hPuddle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPuddle;
            char m_hPuddle[0x4]; // 0x18a8            
            std::int32_t m_nSelfBuffSerialNumber; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slardar_Amplify_Damage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Slardar_Amplify_Damage) == 0x18b0);
    };
};
