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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyGameModeLevelInfo_t
        {
        public:
            CUtlString m_szLevelName; // 0x_            
            source2sdk::client::ArtyLevelID_t m_unLevelID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyGameModeLevelInfo_t, m_szLevelName) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameModeLevelInfo_t, m_unLevelID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ArtyGameModeLevelInfo_t) == 0x_);
    };
};
