#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyGameModeLevelInfo_t.hpp"

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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyGameModeInfo_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_vecLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ArtyGameModeLevelInfo_t> m_vecLevels;
            char m_vecLevels[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyGameModeInfo_t, m_vecLevels) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ArtyGameModeInfo_t) == 0x20);
    };
};
