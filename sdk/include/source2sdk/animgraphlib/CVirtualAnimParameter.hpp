#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimParamType_t.hpp"
#include "source2sdk/animgraphlib/CAnimParameterBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        class CVirtualAnimParameter : public source2sdk::animgraphlib::CAnimParameterBase
        {
        public:
            CUtlString m_expressionString; // 0x_            
            source2sdk::animgraphlib::AnimParamType_t m_eParamType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVirtualAnimParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CVirtualAnimParameter) == 0x_);
    };
};
