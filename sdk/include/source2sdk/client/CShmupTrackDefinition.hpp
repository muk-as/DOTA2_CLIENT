#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CShmupEventTime.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupTrackDefinition
        {
        public:
            CUtlString m_strName; // 0x0            
            // m_vecEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupEventTime> m_vecEvents;
            char m_vecEvents[0x18]; // 0x8            
            uint8_t _pad0020[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupTrackDefinition, m_strName) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupTrackDefinition, m_vecEvents) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CShmupTrackDefinition) == 0x28);
    };
};
