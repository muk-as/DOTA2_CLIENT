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
        class CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_penalty; // 0x17f8            
            std::int32_t lifesteal_percent; // 0x17fc            
            std::int32_t lifesteal_range; // 0x1800            
            uint8_t _pad1804[0x4]; // 0x1804
            // m_vecTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecTargets;
            char m_vecTargets[0x18]; // 0x1808            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lycan_Wolf_Bite_Lifesteal) == 0x1820);
    };
};
