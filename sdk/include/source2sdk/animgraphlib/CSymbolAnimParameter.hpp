#pragma once
#include "source2sdk/animgraphlib/CConcreteAnimParameter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Symbol Parameter"
    #pragma pack(push, 1)
    class CSymbolAnimParameter : public animgraphlib::CConcreteAnimParameter
    {
    public:
        // metadata: MPropertyFriendlyName "Default Value"
        CGlobalSymbol m_defaultValue; // 0x80        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSymbolAnimParameter because it is not a standard-layout class
    static_assert(sizeof(CSymbolAnimParameter) == 0x88);
};
