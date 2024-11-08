#pragma once
#include "source2sdk/client/ArtyGameModeLevelInfo_t.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    struct ArtyGameModeInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_vecLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ArtyGameModeLevelInfo_t> m_vecLevels;
        char m_vecLevels[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ArtyGameModeInfo_t, m_vecLevels) == 0x8);
    
    static_assert(sizeof(ArtyGameModeInfo_t) == 0x20);
};
