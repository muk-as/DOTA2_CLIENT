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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SosEditItemInfo_t
        {
        public:
            source2sdk::soundsystem::SosEditItemType_t itemType; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlString itemName; // 0x8            
            CUtlString itemTypeName; // 0x10            
            uint8_t _pad0018[0x8]; // 0x18
            CUtlString itemKVString; // 0x20            
            Vector2D itemPos; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemType) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemName) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemTypeName) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemKVString) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem::SosEditItemInfo_t, itemPos) == 0x28);
        
        static_assert(sizeof(source2sdk::soundsystem::SosEditItemInfo_t) == 0x30);
    };
};
