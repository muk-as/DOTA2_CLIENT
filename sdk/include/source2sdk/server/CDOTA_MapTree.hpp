#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BinaryObject.hpp"

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
        class CDOTA_MapTree : public source2sdk::server::CDOTA_BinaryObject
        {
        public:
            uint8_t _pad_[0x_];
            // Datamap fields:
            // void InputCutDown; // 0x_
            // void InputCutDownForever; // 0x_
            // void InputGrowBack; // 0x_
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTA_MapTree) == 0x_);
    };
};
