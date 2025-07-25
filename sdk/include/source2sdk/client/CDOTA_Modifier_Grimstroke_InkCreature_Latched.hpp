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
        class CDOTA_Modifier_Grimstroke_InkCreature_Latched : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1878            
            float m_fZOffset; // 0x187c            
            bool m_bRemovedByEnemy; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            float latch_duration; // 0x1884            
            std::int32_t pop_damage; // 0x1888            
            std::int32_t latched_unit_offset; // 0x188c            
            std::int32_t latched_unit_offset_short; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature_Latched because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Grimstroke_InkCreature_Latched) == 0x1898);
    };
};
