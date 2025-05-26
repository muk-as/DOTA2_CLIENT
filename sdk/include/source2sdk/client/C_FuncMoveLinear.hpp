#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseToggle.hpp"

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
        // Standard-layout class: false
        // Size: 0x970
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecVelocity"
        // static metadata: MNetworkOverride "m_fFlags C_BaseEntity"
        #pragma pack(push, 1)
        class C_FuncMoveLinear : public source2sdk::client::C_BaseToggle
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_FuncMoveLinear) == 0x970);
    };
};
