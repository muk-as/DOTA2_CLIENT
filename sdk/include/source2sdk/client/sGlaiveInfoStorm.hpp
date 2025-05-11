#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x20
        #pragma pack(push, 1)
        class sGlaiveInfoStorm
        {
        public:
            std::int32_t iAttackIndex; // 0x0            
            std::int32_t iBounceCount; // 0x4            
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sGlaiveInfoStorm, iAttackIndex) == 0x0);
        static_assert(offsetof(source2sdk::client::sGlaiveInfoStorm, iBounceCount) == 0x4);
        static_assert(offsetof(source2sdk::client::sGlaiveInfoStorm, hAlreadyHitList) == 0x8);
        
        static_assert(sizeof(source2sdk::client::sGlaiveInfoStorm) == 0x20);
    };
};
