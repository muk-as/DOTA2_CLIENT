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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t wave_damage; // 0x1878            
            std::int32_t wave_count; // 0x187c            
            float radius; // 0x1880            
            float wave_interval; // 0x1884            
            float burn_duration; // 0x1888            
            float burn_interval; // 0x188c            
            float first_wave_delay; // 0x1890            
            float building_damage; // 0x1894            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker) == 0x18a0);
    };
};
