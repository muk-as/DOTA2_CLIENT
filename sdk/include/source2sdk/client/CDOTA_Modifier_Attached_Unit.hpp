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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Attached_Unit : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1878            
            bool m_bPhysicalImmune; // 0x187c            
            bool m_bMagicImmune; // 0x187d            
            uint8_t _pad187e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Attached_Unit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Attached_Unit) == 0x1880);
    };
};
