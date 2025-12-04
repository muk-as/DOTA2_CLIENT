#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SosEditItemType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SosEditItemInfo_t
        {
        public:
            source2sdk::soundsystem::SosEditItemType_t itemType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString itemName; // 0x_            
            CUtlString itemTypeName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString itemKVString; // 0x_            
            Vector2D itemPos; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemType) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemName) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemTypeName) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemKVString) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemPos) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem::SosEditItemInfo_t) == 0x_);
    };
};
