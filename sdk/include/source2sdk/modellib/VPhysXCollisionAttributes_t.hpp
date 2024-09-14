#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VPhysXCollisionAttributes_t
    {
    public:
        uint32_t m_CollisionGroup; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_InteractAs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_InteractAs;
        char m_InteractAs[0x18]; // 0x8        
        // m_InteractWith has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_InteractWith;
        char m_InteractWith[0x18]; // 0x20        
        // m_InteractExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_InteractExclude;
        char m_InteractExclude[0x18]; // 0x38        
        CUtlString m_CollisionGroupString; // 0x50        
        // m_InteractAsStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_InteractAsStrings;
        char m_InteractAsStrings[0x18]; // 0x58        
        // m_InteractWithStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_InteractWithStrings;
        char m_InteractWithStrings[0x18]; // 0x70        
        // m_InteractExcludeStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_InteractExcludeStrings;
        char m_InteractExcludeStrings[0x18]; // 0x88        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_CollisionGroup) == 0x0);
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_InteractAs) == 0x8);
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_InteractWith) == 0x20);
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_InteractExclude) == 0x38);
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_CollisionGroupString) == 0x50);
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_InteractAsStrings) == 0x58);
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_InteractWithStrings) == 0x70);
    static_assert(offsetof(VPhysXCollisionAttributes_t, m_InteractExcludeStrings) == 0x88);
    
    static_assert(sizeof(VPhysXCollisionAttributes_t) == 0xa0);
};
