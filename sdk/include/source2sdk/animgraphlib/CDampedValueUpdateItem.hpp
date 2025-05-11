#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDampedValueUpdateItem
        {
        public:
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x0            
            uint8_t _pad0010[0x8]; // 0x10
            source2sdk::animgraphlib::CAnimParamHandle m_hParamIn; // 0x18            
            source2sdk::animgraphlib::CAnimParamHandle m_hParamOut; // 0x1a            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CDampedValueUpdateItem, m_damping) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CDampedValueUpdateItem, m_hParamIn) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CDampedValueUpdateItem, m_hParamOut) == 0x1a);
        
        static_assert(sizeof(source2sdk::animgraphlib::CDampedValueUpdateItem) == 0x20);
    };
};
