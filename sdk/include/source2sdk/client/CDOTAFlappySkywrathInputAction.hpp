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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFlappySkywrathInputAction
        {
        public:
            source2sdk::client::EFlappySkywrathInputAction eAction; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // vecButtons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> vecButtons;
            char vecButtons[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathInputAction, eAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathInputAction, vecButtons) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFlappySkywrathInputAction) == 0x_);
    };
};
