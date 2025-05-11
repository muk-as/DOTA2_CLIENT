#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace smartprops
    {
        struct CSmartPropModifier;
    };
};
namespace source2sdk
{
    namespace smartprops
    {
        struct CSmartPropSelectionCriteria;
    };
};

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x80
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataBase
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataAnonymousNode
        // static metadata: MPropertyFriendlyName "Smart Prop Element"
        #pragma pack(push, 1)
        class CSmartPropElement
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertySuppressField
            // metadata: MVDataUniqueMonotonicInt "_editor/next_element_id"
            std::int32_t m_nElementID; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // metadata: MVDataEnableKey
            // metadata: MPropertyDescription "Is this element enabled? If not enabled, this element will not be evaluted and will have no effect on the result."
            // metadata: MPropertySortPriority "10"
            CSmartPropAttributeBool m_bEnabled; // 0x10            
            // metadata: MPropertyFriendlyName "Selection Criteria"
            // metadata: MVDataPromoteField
            // m_SelectionCriteria has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropSelectionCriteria*> m_SelectionCriteria;
            char m_SelectionCriteria[0x18]; // 0x50            
            // metadata: MPropertyFriendlyName "Modifiers"
            // metadata: MVDataPromoteField
            // m_Modifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropModifier*> m_Modifiers;
            char m_Modifiers[0x18]; // 0x68            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_nElementID) == 0x8);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_bEnabled) == 0x10);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_SelectionCriteria) == 0x50);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_Modifiers) == 0x68);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement) == 0x80);
    };
};
