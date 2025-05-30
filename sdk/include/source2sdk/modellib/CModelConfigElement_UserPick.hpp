#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CModelConfigElement.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x60
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfigElement_UserPick : public source2sdk::modellib::CModelConfigElement
        {
        public:
            // m_Choices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Choices;
            char m_Choices[0x18]; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModelConfigElement_UserPick because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigElement_UserPick) == 0x60);
    };
};
