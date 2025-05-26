#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PortraitWorldUnit.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1e50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_Artillery_PortraitWorldUnit : public source2sdk::client::C_PortraitWorldUnit
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_Artillery_PortraitWorldUnit) == 0x1e50);
    };
};
