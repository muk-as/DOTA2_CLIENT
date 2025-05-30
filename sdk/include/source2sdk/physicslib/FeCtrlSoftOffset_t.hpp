#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeCtrlSoftOffset_t
        {
        public:
            std::uint16_t nCtrlParent; // 0x0            
            std::uint16_t nCtrlChild; // 0x2            
            Vector vOffset; // 0x4            
            float flAlpha; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeCtrlSoftOffset_t, nCtrlParent) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeCtrlSoftOffset_t, nCtrlChild) == 0x2);
        static_assert(offsetof(source2sdk::physicslib::FeCtrlSoftOffset_t, vOffset) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::FeCtrlSoftOffset_t, flAlpha) == 0x10);
        
        static_assert(sizeof(source2sdk::physicslib::FeCtrlSoftOffset_t) == 0x14);
    };
};
