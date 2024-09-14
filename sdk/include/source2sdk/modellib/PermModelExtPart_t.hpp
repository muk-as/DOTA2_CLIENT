#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PermModelExtPart_t
    {
    public:
        CTransform m_Transform; // 0x0        
        CUtlString m_Name; // 0x20        
        int32_t m_nParent; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        // m_refModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_refModel;
        char m_refModel[0x8]; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x38[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PermModelExtPart_t, m_Transform) == 0x0);
    static_assert(offsetof(PermModelExtPart_t, m_Name) == 0x20);
    static_assert(offsetof(PermModelExtPart_t, m_nParent) == 0x28);
    static_assert(offsetof(PermModelExtPart_t, m_refModel) == 0x30);
    
    static_assert(sizeof(PermModelExtPart_t) == 0x40);
};
