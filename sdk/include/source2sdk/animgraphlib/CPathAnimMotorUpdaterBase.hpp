#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimMotorUpdaterBase.hpp"

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
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPathAnimMotorUpdaterBase : public source2sdk::animgraphlib::CAnimMotorUpdaterBase
        {
        public:
            bool m_bLockToPath; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathAnimMotorUpdaterBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CPathAnimMotorUpdaterBase) == 0x28);
    };
};
