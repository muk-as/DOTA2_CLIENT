#pragma once
#include "source2sdk/modellib/CModelConfigElement.hpp"
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
    // Standard-layout class: false
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModelConfigElement_SetBodygroup : public modellib::CModelConfigElement
    {
    public:
        CUtlString m_GroupName; // 0x48        
        int32_t m_nChoice; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModelConfigElement_SetBodygroup because it is not a standard-layout class
    static_assert(sizeof(CModelConfigElement_SetBodygroup) == 0x58);
};
