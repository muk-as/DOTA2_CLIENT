#pragma once
#include "source2sdk/client/CTakeDamageInfo.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xf0
    #pragma pack(push, 1)
    struct SummaryTakeDamageInfo_t
    {
    public:
        int32_t nSummarisedCount; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        client::CTakeDamageInfo info; // 0x8        
        client::CTakeDamageResult result; // 0xc8        
        // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hTarget;
        char hTarget[0x4]; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SummaryTakeDamageInfo_t, nSummarisedCount) == 0x0);
    static_assert(offsetof(SummaryTakeDamageInfo_t, info) == 0x8);
    static_assert(offsetof(SummaryTakeDamageInfo_t, result) == 0xc8);
    static_assert(offsetof(SummaryTakeDamageInfo_t, hTarget) == 0xe8);
    
    static_assert(sizeof(SummaryTakeDamageInfo_t) == 0xf0);
};
