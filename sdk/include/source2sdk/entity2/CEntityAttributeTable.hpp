#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CEntityAttributeTable
        {
        public:
            // m_Attributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringToken,Attribute_t> m_Attributes;
            char m_Attributes[0x_]; // 0x_            
            // m_Names has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringToken,CUtlString> m_Names;
            char m_Names[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityAttributeTable, m_Attributes) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityAttributeTable, m_Names) == 0x_);
        
        static_assert(sizeof(source2sdk::entity2::CEntityAttributeTable) == 0x_);
    };
};
