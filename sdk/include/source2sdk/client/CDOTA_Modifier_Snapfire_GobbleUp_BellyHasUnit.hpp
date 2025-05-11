#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hGobbledUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGobbledUnit;
            char m_hGobbledUnit[0x4]; // 0x17f8            
            source2sdk::client::PlayerID_t m_nOriginalControllingUnit; // 0x17fc            
            bool m_bUnitWasLaunched; // 0x1800            
            uint8_t _pad1801[0x3]; // 0x1801
            float max_time_in_belly; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit) == 0x1808);
    };
};
