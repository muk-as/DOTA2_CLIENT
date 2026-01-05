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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bIsUsable"
        #pragma pack(push, 1)
        class C_BaseDoor : public source2sdk::client::C_BaseToggle
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bIsUsable; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseDoor) == 0x_);
    };
};
