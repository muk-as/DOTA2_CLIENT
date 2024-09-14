#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmBitFlags
    {
    public:
        uint32_t m_flags; // 0x0        
        
        // Static fields:
        static uint8_t &Get_MaxFlags() {return *reinterpret_cast<uint8_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNmBitFlags")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmBitFlags, m_flags) == 0x0);
    
    static_assert(sizeof(CNmBitFlags) == 0x4);
};
