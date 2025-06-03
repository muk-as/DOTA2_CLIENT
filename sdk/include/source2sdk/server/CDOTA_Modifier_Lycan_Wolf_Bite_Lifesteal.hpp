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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_penalty; // 0x1878            
            float lifesteal_percent; // 0x187c            
            float lifesteal_range; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_vecTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTargets;
            char m_vecTargets[0x18]; // 0x1888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal) == 0x18a0);
    };
};
