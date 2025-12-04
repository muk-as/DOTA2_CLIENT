#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AnimNodeID.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimNodePath
        {
        public:
            source2sdk::modellib::AnimNodeID m_path[11]; // 0x_            
            std::int32_t m_nCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimNodePath, m_path) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimNodePath, m_nCount) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimNodePath) == 0x_);
    };
};
