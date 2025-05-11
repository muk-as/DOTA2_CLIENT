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
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfigElement_SetBodygroupOnAttachedModels : public source2sdk::modellib::CModelConfigElement
        {
        public:
            CUtlString m_GroupName; // 0x48            
            std::int32_t m_nChoice; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModelConfigElement_SetBodygroupOnAttachedModels because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigElement_SetBodygroupOnAttachedModels) == 0x58);
    };
};
