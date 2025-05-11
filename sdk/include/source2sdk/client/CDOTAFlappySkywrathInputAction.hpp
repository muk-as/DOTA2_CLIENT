#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFlappySkywrathInputAction.hpp"

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
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFlappySkywrathInputAction
        {
        public:
            source2sdk::client::EFlappySkywrathInputAction eAction; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // vecButtons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> vecButtons;
            char vecButtons[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathInputAction, eAction) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathInputAction, vecButtons) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CDOTAFlappySkywrathInputAction) == 0x20);
    };
};
