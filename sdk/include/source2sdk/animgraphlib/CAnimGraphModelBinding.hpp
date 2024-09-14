#pragma once
#include "source2sdk/animgraphlib/CAnimUpdateSharedData.hpp"
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
    // Standard-layout class: true
    // Size: 0x28
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimGraphModelBinding
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        CUtlString m_modelName; // 0x8        
        // m_pSharedData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CAnimUpdateSharedData> m_pSharedData;
        char m_pSharedData[0x8]; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x18[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimGraphModelBinding, m_modelName) == 0x8);
    static_assert(offsetof(CAnimGraphModelBinding, m_pSharedData) == 0x10);
    
    static_assert(sizeof(CAnimGraphModelBinding) == 0x28);
};
