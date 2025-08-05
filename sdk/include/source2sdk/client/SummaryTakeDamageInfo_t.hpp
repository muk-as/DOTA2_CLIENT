#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CTakeDamageInfo.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xe8
        #pragma pack(push, 1)
        struct SummaryTakeDamageInfo_t
        {
        public:
            std::int32_t nSummarisedCount; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            source2sdk::client::CTakeDamageInfo info; // 0x8            
            source2sdk::client::CTakeDamageResult result; // 0xc8            
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hTarget;
            char hTarget[0x4]; // 0xe0            
            uint8_t _pad00e4[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SummaryTakeDamageInfo_t, nSummarisedCount) == 0x0);
        static_assert(offsetof(source2sdk::client::SummaryTakeDamageInfo_t, info) == 0x8);
        static_assert(offsetof(source2sdk::client::SummaryTakeDamageInfo_t, result) == 0xc8);
        static_assert(offsetof(source2sdk::client::SummaryTakeDamageInfo_t, hTarget) == 0xe0);
        
        static_assert(sizeof(source2sdk::client::SummaryTakeDamageInfo_t) == 0xe8);
    };
};
