#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    class CSmartPropChoice;
};

namespace source2sdk::smartprops
{
    class CSmartPropElement;
};

namespace source2sdk::smartprops
{
    class CSmartPropModifier;
};

namespace source2sdk::smartprops
{
    class CSmartPropVariable;
};

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MSmartPropClassVersion
    // static metadata: MVDataRoot
    // static metadata: MVDataSingleton
    // static metadata: MVDataFileExtension
    // static metadata: MVDataPreviewWidget
    // static metadata: MVDataGroupNodeClass
    // static metadata: MVDataUsesComponentEditor
    // static metadata: MPropertyFriendlyName "Smart Prop Root"
    // static metadata: MPropertyDescription "Root of a smart prop, contains a list of elements to evaluate."
    #pragma pack(push, 1)
    class CSmartPropRoot
    {
    public:
        // metadata: MPropertyDescription "Specifies the current version of this smart prop. Any existing references to this smart prop with an older version number will not automatically update."
        int32_t m_nContentVersion; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyDescription "Maximum depth of smart prop evaluation stack during evaluation."
        CSmartPropAttributeInt m_nMaxDepth; // 0x8        
        // metadata: MPropertyFriendlyName "Variables"
        // metadata: MVDataPromoteField
        // m_Variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<smartprops::CSmartPropVariable*> m_Variables;
        char m_Variables[0x18]; // 0x48        
        // metadata: MPropertyFriendlyName "Choices"
        // metadata: MVDataPromoteField
        // m_Choices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<smartprops::CSmartPropChoice*> m_Choices;
        char m_Choices[0x18]; // 0x60        
        // metadata: MPropertyDescription "List of the root level elements making up the smart prop definition, each element may be an entire tree."
        // metadata: MVDataPromoteField
        // m_Children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<smartprops::CSmartPropElement*> m_Children;
        char m_Children[0x18]; // 0x78        
        // metadata: MPropertyFriendlyName "Modifiers"
        // metadata: MVDataPromoteField
        // m_Modifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<smartprops::CSmartPropModifier*> m_Modifiers;
        char m_Modifiers[0x18]; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0xa8[0x20];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSmartPropRoot, m_nContentVersion) == 0x0);
    static_assert(offsetof(CSmartPropRoot, m_nMaxDepth) == 0x8);
    static_assert(offsetof(CSmartPropRoot, m_Variables) == 0x48);
    static_assert(offsetof(CSmartPropRoot, m_Choices) == 0x60);
    static_assert(offsetof(CSmartPropRoot, m_Children) == 0x78);
    static_assert(offsetof(CSmartPropRoot, m_Modifiers) == 0x90);
    
    static_assert(sizeof(CSmartPropRoot) == 0xc8);
};
