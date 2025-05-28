#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc : public source2sdk::client::CDOTA_Buff
        {
        public:
            float duration; // 0x1888            
            float duration_creep; // 0x188c            
            std::int32_t bonus_damage; // 0x1890            
            float delay; // 0x1894            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hTarget;
            char m_hTarget[0x4]; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc) == 0x18a0);
    };
};
