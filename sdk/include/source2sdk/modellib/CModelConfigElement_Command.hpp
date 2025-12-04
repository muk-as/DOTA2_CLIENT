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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfigElement_Command : public source2sdk::modellib::CModelConfigElement
        {
        public:
            CUtlString m_Command; // 0x_            
            KeyValues3 m_Args; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModelConfigElement_Command because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigElement_Command) == 0x_);
    };
};
