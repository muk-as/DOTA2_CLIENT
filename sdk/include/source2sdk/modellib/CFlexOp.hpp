#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/FlexOpCode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFlexOp
        {
        public:
            source2sdk::modellib::FlexOpCode_t m_OpCode; // 0x0            
            std::int32_t m_Data; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CFlexOp, m_OpCode) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CFlexOp, m_Data) == 0x4);
        
        static_assert(sizeof(source2sdk::modellib::CFlexOp) == 0x8);
    };
};
