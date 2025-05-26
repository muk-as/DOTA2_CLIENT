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
        class CDOTA_Modifier_AghsFort_TrapRoom_Hookshot : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1878            
            Vector m_vStartPosition; // 0x187c            
            uint8_t _pad1888[0x14]; // 0x1888
            std::int32_t speed; // 0x189c            
            float duration; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_TrapRoom_Hookshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_TrapRoom_Hookshot) == 0x18a8);
    };
};
