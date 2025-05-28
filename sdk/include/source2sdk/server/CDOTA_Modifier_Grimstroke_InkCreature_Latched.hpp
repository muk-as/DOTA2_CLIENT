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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_InkCreature_Latched : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1888            
            float m_fZOffset; // 0x188c            
            bool m_bRemovedByEnemy; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            float latch_duration; // 0x1894            
            std::int32_t pop_damage; // 0x1898            
            std::int32_t latched_unit_offset; // 0x189c            
            std::int32_t latched_unit_offset_short; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature_Latched because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Grimstroke_InkCreature_Latched) == 0x18a8);
    };
};
