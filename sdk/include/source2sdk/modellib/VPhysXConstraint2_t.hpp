#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/VPhysXConstraintParams_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysXConstraint2_t
        {
        public:
            std::uint32_t m_nFlags; // 0x_            
            std::uint16_t m_nParent; // 0x_            
            std::uint16_t m_nChild; // 0x_            
            source2sdk::modellib::VPhysXConstraintParams_t m_params; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraint2_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraint2_t, m_nParent) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraint2_t, m_nChild) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraint2_t, m_params) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXConstraint2_t) == 0x_);
    };
};
