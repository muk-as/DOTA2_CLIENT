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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x510
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_MapTree : public source2sdk::server::CDOTA_BinaryObject
        {
        public:
            uint8_t _pad04e8[0x28];
            // Datamap fields:
            // void InputCutDown; // 0x0
            // void InputCutDownForever; // 0x0
            // void InputGrowBack; // 0x0
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTA_MapTree) == 0x510);
    };
};
