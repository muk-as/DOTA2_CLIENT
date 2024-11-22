#pragma once
#include "source2sdk/client/ArtyLevelID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        client::ArtyLevelID_t m_unLevelID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ArtyGameModeLevelInfo_t, m_szLevelName) == 0x0);
    static_assert(offsetof(ArtyGameModeLevelInfo_t, m_unLevelID) == 0x8);
    
    static_assert(sizeof(ArtyGameModeLevelInfo_t) == 0x10);
};
