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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeFitMatrix_t
        {
        public:
            CTransform bone; // 0x_            
            Vector vCenter; // 0x_            
            std::uint16_t nEnd; // 0x_            
            std::uint16_t nNode; // 0x_            
            std::uint16_t nBeginDynamic; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeFitMatrix_t, bone) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeFitMatrix_t, vCenter) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeFitMatrix_t, nEnd) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeFitMatrix_t, nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeFitMatrix_t, nBeginDynamic) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeFitMatrix_t) == 0x_);
    };
};
