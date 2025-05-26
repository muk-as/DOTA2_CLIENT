#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CInfoPlayerStartDota.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x538
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoPlayerStartGoodGuys : public source2sdk::server::CInfoPlayerStartDota
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CInfoPlayerStartGoodGuys) == 0x538);
    };
};
