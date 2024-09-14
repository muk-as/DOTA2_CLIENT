#pragma once
#include "source2sdk/modellib/CFlexOp.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFlexRule
    {
    public:
        int32_t m_nFlex; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_FlexOps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CFlexOp> m_FlexOps;
        char m_FlexOps[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFlexRule, m_nFlex) == 0x0);
    static_assert(offsetof(CFlexRule, m_FlexOps) == 0x8);
    
    static_assert(sizeof(CFlexRule) == 0x20);
};
