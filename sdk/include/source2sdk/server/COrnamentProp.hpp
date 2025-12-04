#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class COrnamentProp : public source2sdk::server::CDynamicProp
        {
        public:
            CUtlSymbolLarge m_initialOwner; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetAttached; // 0x_
            // void InputDetach; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in COrnamentProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::COrnamentProp) == 0x_);
    };
};
