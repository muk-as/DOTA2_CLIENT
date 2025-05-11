#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimNodeNetworkMode.hpp"
#include "source2sdk/animgraphlib/CAnimNodePath.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x58
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            source2sdk::animgraphlib::CAnimNodePath m_nodePath; // 0x18            
            source2sdk::animgraphlib::AnimNodeNetworkMode m_networkMode; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            CUtlString m_name; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateNodeBase, m_nodePath) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateNodeBase, m_networkMode) == 0x48);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateNodeBase, m_name) == 0x50);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimUpdateNodeBase) == 0x58);
    };
};
