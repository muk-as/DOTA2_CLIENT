#pragma once
#include "source2sdk/soundsystem/SosEditItemType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
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
        soundsystem::SosEditItemType_t itemType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString itemName; // 0x8        
        CUtlString itemTypeName; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x18[0x8]; // 0x18
        CUtlString itemKVString; // 0x20        
        Vector2D itemPos; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SosEditItemInfo_t, itemType) == 0x0);
    static_assert(offsetof(SosEditItemInfo_t, itemName) == 0x8);
    static_assert(offsetof(SosEditItemInfo_t, itemTypeName) == 0x10);
    static_assert(offsetof(SosEditItemInfo_t, itemKVString) == 0x20);
    static_assert(offsetof(SosEditItemInfo_t, itemPos) == 0x28);
    
    static_assert(sizeof(SosEditItemInfo_t) == 0x30);
};
