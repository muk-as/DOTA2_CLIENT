#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyLevelID_t.hpp"

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
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyGameModeLevelInfo_t
        {
        public:
            CUtlString m_szLevelName; // 0x0            
            source2sdk::client::ArtyLevelID_t m_unLevelID; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyGameModeLevelInfo_t, m_szLevelName) == 0x0);
        static_assert(offsetof(source2sdk::client::ArtyGameModeLevelInfo_t, m_unLevelID) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ArtyGameModeLevelInfo_t) == 0x10);
    };
};
