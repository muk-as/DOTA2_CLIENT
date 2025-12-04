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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class sGlaiveInfo
        {
        public:
            std::int32_t iAttackIndex; // 0x_            
            std::int32_t iBounceCount; // 0x_            
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sGlaiveInfo, iAttackIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::sGlaiveInfo, iBounceCount) == 0x_);
        static_assert(offsetof(source2sdk::client::sGlaiveInfo, hAlreadyHitList) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sGlaiveInfo) == 0x_);
    };
};
